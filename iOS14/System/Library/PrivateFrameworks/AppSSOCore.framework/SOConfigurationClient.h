/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_checkNewVersion;
-(long long)configVersion;
-(SOConfiguration *)configuration;
-(void)_reloadConfig;
-(id)profileForURL:(id)arg1 responseCode:(long long)arg2 ;
-(BOOL)willHandleURL:(id)arg1 responseCode:(long long)arg2 callerBundleIdentifier:(id)arg3 ;
@end

