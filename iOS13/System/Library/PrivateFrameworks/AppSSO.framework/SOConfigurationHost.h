/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
*/


@class SOConfiguration, SOConfigurationVersion;

@interface SOConfigurationHost : NSObject {

	SOConfiguration* _configuration;
	SOConfigurationVersion* _configurationVersion;

}

@property (nonatomic,readonly) long long configVersion; 
+(id)defaultManager;
+(id)_loadProfilesFromDict:(id)arg1 ;
+(id)_loadProfilesFromURL:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(long long)configVersion;
-(id)profilesWithExtensionBundleIdentifier:(id)arg1 ;
-(id)configurationForClientWithError:(id*)arg1 ;
-(id)realms;
-(BOOL)saveConfigurationData:(id)arg1 error:(id*)arg2 ;
-(void)_loadConfigForFirstTime;
-(BOOL)_saveConfigToFile:(id)arg1 error:(id*)arg2 ;
-(id)_checkAssociatedDomainForProfiles:(id)arg1 ;
-(void)_checkNewVersion;
-(id)profileForURL:(id)arg1 responseCode:(long long)arg2 ;
-(BOOL)_isConfigFileAvailable;
-(void)_reloadConfigWithReason:(long long)arg1 ;
-(void)_startKeyBagObserverForReloadingConfiguration;
-(void)_extensionsLoaded:(id)arg1 ;
-(id)_stringWithReason:(long long)arg1 ;
-(id)_checkExtensionsExistenceForProfiles:(id)arg1 ;
-(void)_configurationLoadedWithReason:(long long)arg1 ;
-(BOOL)_initDataVaultIfNeededWithError:(id*)arg1 ;
-(long long)willHandleURL:(id)arg1 responseCode:(long long)arg2 callerBundleIdentifier:(id)arg3 ;
@end

