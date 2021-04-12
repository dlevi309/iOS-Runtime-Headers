/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioDataAnalysis.framework/AudioDataAnalysis
*/


@class ADASPreferenceStore;

@interface ADASManager : NSObject {

	ADASPreferenceStore* _prefStore;

}
-(id)_setDefaultsFor:(id)arg1 value:(id)arg2 ;
-(void)_syncNanoForWrite:(id)arg1 ;
-(id)init;
-(id)_getSpecialKeys:(id)arg1 nano:(BOOL)arg2 ;
-(id)_setChainedKeys:(id)arg1 val:(id)arg2 nano:(BOOL)arg3 modifiedKeys:(id)arg4 ;
-(void)removePreferenceFor:(id)arg1 ;
-(void)removePreferenceFor:(id)arg1 notify:(BOOL)arg2 ;
-(void)_syncNanoForRead:(id)arg1 ;
-(void)_clearCurrentVolumeLimit;
-(id)getNanoPreferenceFor:(id)arg1 ;
-(id)_getCurrentVolumeLimit;
-(BOOL)_featureFlagEnabled;
-(BOOL)nanoSettingsAvailable;
-(id)getNanoPreferencesFor:(id)arg1 ;
-(id)getPreferenceFor:(id)arg1 ;
-(void)removeNanoPreferenceFor:(id)arg1 notify:(BOOL)arg2 ;
-(void)removeNanoPreferenceFor:(id)arg1 ;
-(id)_setDeviceSpecificDefaultsFor:(id)arg1 value:(id)arg2 ;
-(BOOL)_softwareVersionEnabled;
-(id)setPreferenceFor:(id)arg1 value:(id)arg2 notify:(BOOL)arg3 ;
-(id)_error:(long long)arg1 ;
-(void)_notify:(id)arg1 ;
-(id)_getDeviceSpecificDefaultsFor:(id)arg1 ;
-(id)_migrateVolumeLimitThreshold:(BOOL)arg1 ;
-(id)_setDefaultValueIfNeeded:(id)arg1 nano:(BOOL)arg2 sync:(BOOL)arg3 ;
-(BOOL)shouldSufaceHAENotificationMigrationAlert;
-(id)_getDefaultsKey:(id)arg1 ;
-(id)setNanoPreferenceFor:(id)arg1 value:(id)arg2 notify:(BOOL)arg3 ;
-(void)_syncDeviceSpecificDomain;
-(BOOL)_isDeviceMandatoryForHAENotification:(BOOL)arg1 ;
-(id)getPreferencesFor:(id)arg1 ;
-(void)migrateKeyEnableHAEHKMeasurement:(BOOL)arg1 ;
-(BOOL)_isAlertSupported;
-(void)didSurfaceMigrationAlert;
-(id)setNanoPreferenceFor:(id)arg1 value:(id)arg2 ;
-(id)_getDefaultsFor:(id)arg1 ;
-(void)_sync;
-(id)setPreferenceFor:(id)arg1 value:(id)arg2 ;
-(void)_syncNanoDeviceSpecificForRead:(id)arg1 ;
@end

