/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
*/


@class SOConfiguration, SOConfigurationVersion, NSMutableArray;

@interface SOConfigurationHost : NSObject {

	SOConfiguration* _configuration;
	SOConfigurationVersion* _configurationVersion;
	NSMutableArray* _removedProfiles;

}

@property (nonatomic,readonly) long long configVersion; 
+(id)defaultManager;
+(id)_loadProfilesFromURL:(id)arg1 ;
+(id)_loadProfilesFromDict:(id)arg1 ;
-(void)_configurationLoadedWithReason:(long long)arg1 ;
-(void)_reloadConfigWithReason:(long long)arg1 ;
-(void)_extensionsLoaded:(id)arg1 ;
-(id)_checkAssociatedDomainForProfiles:(id)arg1 ;
-(id)init;
-(id)_stringWithReason:(long long)arg1 ;
-(id)configurationForClientWithError:(id*)arg1 ;
-(void)_checkNewVersion;
-(BOOL)_saveConfigToFile:(id)arg1 error:(id*)arg2 ;
-(long long)configVersion;
-(id)removedProfileForExtensionBundleIdentifier:(id)arg1 ;
-(id)_checkExtensionsExistenceForProfiles:(id)arg1 ;
-(BOOL)_initDataVaultIfNeededWithError:(id*)arg1 ;
-(id)profilesWithExtensionBundleIdentifier:(id)arg1 ;
-(id)_defaultConfigurationFile;
-(void)_startKeyBagObserverForReloadingConfiguration;
-(void)_loadConfigForFirstTime;
-(BOOL)_isConfigFileAvailable;
-(id)profileForURL:(id)arg1 responseCode:(long long)arg2 ;
-(BOOL)saveConfigurationData:(id)arg1 error:(id*)arg2 ;
-(id)realms;
-(void)dealloc;
-(long long)willHandleURL:(id)arg1 responseCode:(long long)arg2 callerBundleIdentifier:(id)arg3 ;
-(id)_defaultConfigurationPath;
@end

