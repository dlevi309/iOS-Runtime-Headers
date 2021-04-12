/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
*/


@class SOClient, SOConfiguration, SOConfigurationVersion;

@interface SOConfigurationClient : NSObject {

	SOClient* _client;
	SOConfiguration* _configuration;
	SOConfigurationVersion* _configurationVersion;

}

@property (nonatomic,readonly) SOConfiguration * configuration; 
@property (nonatomic,readonly) long long configVersion; 
+(id)defaultClient;
-(id)init;
-(SOConfiguration *)configuration;
-(long long)configVersion;
-(void)_checkNewVersion;
-(id)profileForURL:(id)arg1 responseCode:(long long)arg2 ;
-(BOOL)willHandleURL:(id)arg1 responseCode:(long long)arg2 callerBundleIdentifier:(id)arg3 ;
-(void)_reloadConfig;
@end

