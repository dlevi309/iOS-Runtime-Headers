/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthHearing.framework/HealthHearing
*/


#import <HealthHearing/HealthHearing-Structs.h>
@interface HKHearingFeatures : NSObject
+(BOOL)isHeadphoneExposureNotificationsSupportedOnActiveWatch;
+(id)sharedInstance;
+(id)_numbersForPhonePreferenceKeys:(id)arg1 ;
+(BOOL)_setBoolForWatchPreferenceKey:(id)arg1 newValue:(BOOL)arg2 error:(id*)arg3 ;
+(BOOL)unitTesting_forceDefaultHeadphoneDataCollectionInterval;
+(id)_numbersForWatchPreferenceKeys:(id)arg1 ;
+(BOOL)_setBoolForPhonePreferenceKey:(id)arg1 newValue:(BOOL)arg2 error:(id*)arg3 ;
+(BOOL)_setBoolForPreferenceKey:(id)arg1 newValue:(BOOL)arg2 error:(id*)arg3 ;
+(BOOL)hasActivePairedDevice;
+(BOOL)areHeadphoneExposureNotificationsMandatory;
+(BOOL)_setHeadphoneExposureMeasureLevelsEnabledOnActiveWatch:(BOOL)arg1 error:(id*)arg2 ;
+(BOOL)_isHeadphoneExposureDataTransient;
+(void)unitTesting_overrideIsHeadphoneExposureNotificationsEnabled:(id)arg1 ;
+(BOOL)areHeadphoneExposureNotificationsMandatoryOnActiveWatchWithError:(id*)arg1 ;
+(BOOL)isHeadphoneExposureNotificationsEnabled;
+(id)_numbersForPreferenceKeys:(id)arg1 error:(id*)arg2 ;
+(id)_sharedAudioDataAnalysisManager;
+(id)activePairedDevice;
+(BOOL)_setHeadphoneExposureNotificationsEnabled:(BOOL)arg1 error:(id*)arg2 ;
+(BOOL)_boolForPreferenceKey:(id)arg1 defaultValue:(BOOL)arg2 fromValues:(id)arg3 ;
+(void)unitTesting_overrideForceDefaultHeadphoneDataCollectionInterval:(id)arg1 ;
+(BOOL)_setHeadphoneExposureNotificationsEnabledOnActiveWatch:(BOOL)arg1 error:(id*)arg2 ;
+(BOOL)isHeadphoneExposureNotificationsEnabledOnActiveWatchWithError:(id*)arg1 ;
+(void)unitTesting_overrideSimulateLocalHeadphonePlayback:(id)arg1 ;
+(BOOL)_setHeadphoneExposureMeasureLevelsEnabled:(BOOL)arg1 error:(id*)arg2 ;
+(BOOL)unitTesting_simulateLocalHeadphonePlayback;
+(BOOL)isHeadphoneExposureMeasureLevelsEnabledOnActiveWatchWithError:(id*)arg1 ;
+(BOOL)isHeadphoneExposureMeasureLevelsEnabled;
+(id)_numbersForPreferenceKeys:(id)arg1 fromActiveWatch:(BOOL)arg2 ;
-(id)init;
-(void)_adasPreferenceDidChange:(id)arg1 ;
-(void)_stopObservingForChanges;
-(void)_startObservingForChanges;
-(BOOL)areHeadphoneExposureNotificationsMandatory;
-(BOOL)_isHeadphoneExposureDataTransient;
-(BOOL)areHeadphoneExposureNotificationsMandatoryOnActiveWatchWithError:(id*)arg1 ;
-(BOOL)isHeadphoneExposureNotificationsEnabled;
-(void)_startObservingForChangesOnActiveWatch;
-(BOOL)isHeadphoneExposureNotificationsEnabledOnActiveWatchWithError:(id*)arg1 ;
-(BOOL)setBoolForPreferenceKey:(id)arg1 newValue:(BOOL)arg2 forPairedWatch:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)isHeadphoneExposureMeasureLevelsEnabledOnActiveWatchWithError:(id*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isHeadphoneExposureMeasureLevelsEnabled;
-(void)dealloc;
@end

