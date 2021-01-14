/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSDictionary, ProviderConfiguration;

@interface RemoteConfigurationController : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSDictionary* _currentConfiguration;
	NSObject*<OS_dispatch_source> _updateTimer;
	BOOL _googleConfigurationDidChange;
	BOOL _tencentConfigurationDidChange;
	ProviderConfiguration* _googleProviderConfiguration;
	ProviderConfiguration* _tencentProviderConfiguration;

}

@property (getter=isSafeBrowsingOff,nonatomic,readonly) BOOL safeBrowsingOff; 
@property (nonatomic,readonly) ProviderConfiguration * googleProviderConfiguration;               //@synthesize googleProviderConfiguration=_googleProviderConfiguration - In the implementation block
@property (nonatomic,readonly) ProviderConfiguration * tencentProviderConfiguration;              //@synthesize tencentProviderConfiguration=_tencentProviderConfiguration - In the implementation block
+(id)sharedController;
-(id)init;
-(ProviderConfiguration *)googleProviderConfiguration;
-(ProviderConfiguration *)tencentProviderConfiguration;
-(void)_loadConfigurationFromDiskIfNecessary;
-(void)_updateConfigurationIfNecessary;
-(void)_initializeProviderConfigurationsWithConfiguration:(id)arg1 ;
-(void)_scheduleConfigurationUpdateDaily;
-(void)_resetProviderConfigurationsDidChange;
-(void)_initializeToDefaultProviderConfigurations;
-(id)_providerToTurnOffFromProviderDictionary:(id)arg1 ;
-(void)_simplifyProviderConfigurations;
-(id)_urlOfDownloadedConfiguration;
-(void)_writeConfigurationToDisk:(id)arg1 ;
-(void)_notifyProviderConfigurationsDidChangeIfNecessary;
-(id)_lastConfigurationUpdateAttemptDate;
-(void)_setCurrentConfiguration:(id)arg1 ;
-(BOOL)_shouldUpdateConfigurationGivenLastConfigurationUpdateAttemptDate:(id)arg1 ;
-(void)_setCurrentDateAsLastConfigurationUpdateAttemptDate;
-(void)_didReceiveConfigurationData:(id)arg1 ;
-(void)_downloadConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isSafeBrowsingOff;
-(BOOL)forceLoadConfigurationFromDisk;
-(BOOL)forceUpdateConfigurationFromServer;
-(void)dealloc;
@end

