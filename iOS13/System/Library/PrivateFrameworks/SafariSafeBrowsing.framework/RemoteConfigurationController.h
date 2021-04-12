/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)_lastConfigurationUpdateAttemptDate;
-(BOOL)_shouldUpdateConfigurationGivenLastConfigurationUpdateAttemptDate:(id)arg1 ;
-(void)_setCurrentDateAsLastConfigurationUpdateAttemptDate;
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
-(void)_didReceiveConfigurationData:(id)arg1 ;
-(void)_downloadConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setCurrentConfiguration:(id)arg1 ;
-(BOOL)isSafeBrowsingOff;
-(BOOL)forceLoadConfigurationFromDisk;
-(BOOL)forceUpdateConfigurationFromServer;
@end

