source "https://rubygems.org"

gem "cocoapods", "~> 1.5"
gem "dotenv"
gem "fastlane"

plugins_path = File.join(File.dirname(__FILE__), 'fastlane', 'Pluginfile')
eval_gemfile(plugins_path) if File.exist?(plugins_path)
