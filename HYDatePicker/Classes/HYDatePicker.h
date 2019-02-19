//
//  HYDatePicker.h
//  StudyEvent
//
//  Created by ocean on 2019/2/18.
//  Copyright © 2019 ocean. All rights reserved.
//

/**
 例子:
 HYDatePicker *picker = [[HYDatePicker alloc] init];
 picker.delegate = self;
 //    picker.datePickerHeight = 250;
 //    picker.toobarHeight = 45;
 
 //    [picker setCancelText:@"一"];
 //    [picker setConfirmText:@"二"];
 
 //    [picker setCancelTextColor:[UIColor redColor] font:[UIFont systemFontOfSize:10]];
 //    [picker setConfirmTextColor:[UIColor purpleColor] font:[UIFont systemFontOfSize:30.0]];
 
 //    [picker setTitleText:@"选择日期"];
 //    [picker setTitleTextColor:[UIColor redColor] font:[UIFont systemFontOfSize:40]];
 
 //    [picker setCurrentDate:[NSDate dateWithTimeIntervalSinceNow:24 * 60 * 60 * 2]];
 //    [picker setMinimumDate:[NSDate dateWithTimeIntervalSinceNow:- 24 * 60 * 60 * 3]];
 //    [picker setMaximumDate:[NSDate dateWithTimeIntervalSinceNow:24 * 60 * 60 * 3]];
 
 [picker show];
 */

#import <UIKit/UIKit.h>

@class HYDatePicker;

NS_ASSUME_NONNULL_BEGIN

@protocol HYDatePickerDelegate <NSObject>

@optional

/**
 点击了确定

 @param datePicker HYDatePicker
 @param date 选中的日期
 */
- (void)datePickerDidClickConfirm:(HYDatePicker *)datePicker
                             date:(NSDate *)date;

@end

@interface HYDatePicker : UIView

@property (nonatomic, weak, nullable) id<HYDatePickerDelegate> delegate;

#pragma mark - UIDatePicker
/** 内部封装的 UIDatePicker */
@property (nonatomic, strong) UIDatePicker *datePicker;
/** UIDatePicker 的高度，默认250.0f */
@property (nonatomic, assign) CGFloat datePickerHeight;

#pragma mark - UIToolbar
/** 内部封装的 UIToolbar */
@property (nonatomic, strong) UIToolbar *toolbar;
/** 工具栏高度 默认 45 */
@property (nonatomic, assign) CGFloat toobarHeight;

#pragma mark - 左侧 "取消"
/** 设置左侧 ”取消“ 的文字，默认 ”取消“ */
- (void)setCancelText:(NSString *)text;
/**
 设置左侧 ”取消“ 的文字属性

 @param textColor 文字颜色
 @param font 文字字体
 */
- (void)setCancelTextColor:(nullable UIColor *)textColor
                      font:(nullable UIFont *)font;
/** 设置左侧 ”取消“ 的文字属性 */
- (void)setCancelTextAttributes:(nullable NSDictionary<NSAttributedStringKey,id> *)attributes
                       forState:(UIControlState)state ;

#pragma mark - 右侧 "确定"
/** 设置右侧 ”确定“ 的文字，默认 ”确定“ */
- (void)setConfirmText:(NSString *)text;
/**
 设置右侧 ”确定“ 的文字属性

 @param textColor 文字颜色
 @param font 文字字体
 */
- (void)setConfirmTextColor:(nullable UIColor *)textColor
                       font:(nullable UIFont *)font;
/** 设置右侧 ”确定“ 的文字属性 */
- (void)setConfirmTextAttributes:(nullable NSDictionary<NSAttributedStringKey,id> *)attributes
                        forState:(UIControlState)state;

#pragma mark - 中间 title
/** 设置中间 title 的文字，默认 nil */
- (void)setTitleText:(NSString *)text;
/**
 设置中间 title 的文字属性

 @param textColor 文字颜色
 @param font 文字字体
 */
- (void)setTitleTextColor:(nullable UIColor *)textColor
                     font:(nullable UIFont *)font;
/** 设置中间 title 的文字属性 */
- (void)setTitleTextAttributes:(nullable NSDictionary<NSAttributedStringKey,id> *)attributes
                      forState:(UIControlState)state;

#pragma mark - 日期设置
/** 设置当前日期 */
- (void)setCurrentDate:(NSDate *)date;
/** 设置最小日期 */
- (void)setMinimumDate:(NSDate *)date;
/** 设置最大日期 */
- (void)setMaximumDate:(NSDate *)date;

#pragma mark - Show & Dismiss
- (void)show;
- (void)dismiss;

@end

NS_ASSUME_NONNULL_END
