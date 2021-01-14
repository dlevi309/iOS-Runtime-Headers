/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@class NSMutableArray, NSMutableDictionary, NSNumber, NSData, NSArray;

@interface BFFSettingsManager : NSObject {

	NSMutableArray* _stashedPaths;
	NSMutableDictionary* _stashedPreferences;
	NSMutableDictionary* _stashedManagedConfigurationSettings;
	NSMutableArray* _stashedButtonHaptics;
	NSNumber* _stashedAssistantEnabled;
	NSNumber* _stashedAssistantVoiceTriggerEnabled;
	NSNumber* _stashedSiriDataSharingOptInStatus;
	NSNumber* _stashedLocationServicesEnabled;
	NSData* _stashedLocationServicesSettings;
	NSData* _stashedWatchData;
	NSArray* _stashedFlowSkipIdentifiers;
	NSNumber* _stashedScreenTimeEnabled;
	NSNumber* _stashedAutoUpdateEnabled;
	NSNumber* _stashedAutoDownloadEnabled;
	NSData* _stashedAccessibilityData;
	NSNumber* _stashedUserInterfaceStyleMode;
	NSMutableArray* _stashedAnalytics;

}
+(id)sharedManager;
-(void)setScreenTimeEnabled:(BOOL)arg1 ;
-(void)stashWatchData:(id)arg1 ;
-(void)_applyLocationServicesSettings;
-(void)_restoreWatchData;
-(void)stashLocationServicesChoice:(BOOL)arg1 ;
-(void)stashAccessibilityData:(id)arg1 ;
-(unsigned long long)stashVersion;
-(void)setObject:(id)arg1 forDomain:(id)arg2 key:(id)arg3 ;
-(void)stashPath:(id)arg1 ;
-(id)init;
-(id)loadConfigurationFromDisk;
-(BOOL)removeSafeHaven;
-(void)stashHapticType:(long long)arg1 forButtonKind:(long long)arg2 ;
-(BOOL)hasStashedValues;
-(void)populatePathsToStash;
-(void)setAssistantEnabled:(BOOL)arg1 ;
-(long long)stashConfigurationType;
-(void)setBool:(BOOL)arg1 forManagedConfigurationSetting:(id)arg2 ;
-(id)stashBuildVersion;
-(void)_restoreAccessibilityData;
-(void)setAssistantVoiceTriggerEnabled:(BOOL)arg1 ;
-(void)_applyStashedButtonHaptics;
-(void)removeBoolSettingForManagedConfigurationSetting:(id)arg1 ;
-(BOOL)_commitStash;
-(void)_restoreAnalyticsData;
-(void)applySafeHavenStash;
-(void)setAutoUpdateEnabled:(BOOL)arg1 ;
-(void)_reset:(BOOL)arg1 ;
-(id)_shovePath:(id)arg1 toPath:(id)arg2 ;
-(void)_restoreStashedFiles;
-(void)clearHapticTypeForButtonKind:(long long)arg1 ;
-(void)stashFlowSkipIdentifiers:(id)arg1 ;
-(id)_preferencesForDomain:(id)arg1 ;
-(BOOL)_stashPaths;
-(void)_applyLocationServices;
-(id)stashProductVersion;
-(void)reset;
-(void)stashAnalyticEvent:(id)arg1 payload:(id)arg2 ;
-(void)setAutoDownloadEnabled:(BOOL)arg1 ;
-(void)_applyUserInterfaceStyleMode;
-(BOOL)_stashConfiguration:(BOOL)arg1 ;
-(void)_applyScreenTimePreferences;
-(void)setBool:(BOOL)arg1 forDomain:(id)arg2 key:(id)arg3 ;
-(void)postDidRestoreSafeHavenNotification;
-(void)_applyUpdatePreferences;
-(void)_applyStashedFlowSkipIdentifiers;
-(void)_applyStashedPreferences;
-(BOOL)hasStashedValuesOnDisk;
-(BOOL)hideStashInSafeHaven;
-(unsigned long long)_restoreConfiguration;
-(void)stashLocationServicesSettings:(id)arg1 ;
-(void)setUserInterfaceStyleMode:(long long)arg1 ;
-(BOOL)hideStashInSafeHavenAsProvisional:(BOOL)arg1 ;
-(void)_applyAssistantPreferences;
-(void)_applyStashedManagedConfiguration;
@end

