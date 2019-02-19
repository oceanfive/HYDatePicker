Pod::Spec.new do |s|
  s.name             = 'HYDatePicker'
  s.version          = '0.0.1'
  s.summary          = '日期选择器'
  s.description      = <<-DESC
iOS的日期选择器，对系统的一个封装
                       DESC

  s.homepage         = 'https://github.com/oceanfive/HYDatePicker'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'oceanfive' => '849638313@qq.com' }
  s.source           = { :git => 'https://github.com/oceanfive/HYDatePicker.git', :tag => s.version.to_s }
  s.ios.deployment_target = '7.0'
  s.source_files = 'HYDatePicker/Classes/**/*'
  s.frameworks = 'UIKit'
end
