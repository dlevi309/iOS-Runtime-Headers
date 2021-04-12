/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
*/


@class CalPreferences;

@interface CDBPreferences : NSObject {

	CalPreferences* _preferences;

}

@property (assign,setter=set_enableTravelAdvisoriesForAutomaticBehavior:,getter=get_enableTravelAdvisoriesForAutomaticBehavior,nonatomic) BOOL enableTravelAdvisoriesForAutomaticBehavior; 
@property (readonly) BOOL has_enableTravelAdvisoriesForAutomaticBehavior; 
@property (assign,setter=set_suggestEventLocations:,getter=get_suggestEventLocations,nonatomic) BOOL suggestEventLocations; 
@property (readonly) BOOL has_suggestEventLocations; 
@property (assign,setter=set_sqlProfileLoggingEnabled:,getter=get_sqlProfileLoggingEnabled,nonatomic) BOOL sqlProfileLoggingEnabled; 
@property (readonly) BOOL has_sqlProfileLoggingEnabled; 
@property (assign,setter=set_suggestedLocationsTestMode:,getter=get_suggestedLocationsTestMode,nonatomic) BOOL suggestedLocationsTestMode; 
@property (readonly) BOOL has_suggestedLocationsTestMode; 
@property (assign,setter=set_kCalPreferredDaysToSyncKey:,getter=get_kCalPreferredDaysToSyncKey,nonatomic) long long kCalPreferredDaysToSyncKey; 
@property (readonly) BOOL has_kCalPreferredDaysToSyncKey; 
@property (assign,setter=set_kCalRemindersPreferredDaysToSyncKey:,getter=get_kCalRemindersPreferredDaysToSyncKey,nonatomic) long long kCalRemindersPreferredDaysToSyncKey; 
@property (readonly) BOOL has_kCalRemindersPreferredDaysToSyncKey; 
@property (assign,setter=set_LastConfirmedSplashScreenVersionViewed:,getter=get_LastConfirmedSplashScreenVersionViewed,nonatomic) long long LastConfirmedSplashScreenVersionViewed; 
@property (readonly) BOOL has_LastConfirmedSplashScreenVersionViewed; 
@property (assign,setter=set_privacyPaneHasBeenAcknowledgedVersion:,getter=get_privacyPaneHasBeenAcknowledgedVersion,nonatomic) long long privacyPaneHasBeenAcknowledgedVersion; 
@property (readonly) BOOL has_privacyPaneHasBeenAcknowledgedVersion; 
+(id)shared;
-(id)init;
-(BOOL)has_suggestedLocationsTestMode;
-(void)set_suggestedLocationsTestMode:(BOOL)arg1 ;
-(long long)get_kCalPreferredDaysToSyncKey;
-(void)set_enableTravelAdvisoriesForAutomaticBehavior:(BOOL)arg1 ;
-(unsigned long long)_version;
-(void)set_suggestEventLocations:(BOOL)arg1 ;
-(BOOL)has_suggestEventLocations;
-(void)set_sqlProfileLoggingEnabled:(BOOL)arg1 ;
-(BOOL)get_suggestEventLocations;
-(void)set_kCalPreferredDaysToSyncKey:(long long)arg1 ;
-(BOOL)has_LastConfirmedSplashScreenVersionViewed;
-(BOOL)needsMigration;
-(BOOL)has_kCalPreferredDaysToSyncKey;
-(BOOL)has_privacyPaneHasBeenAcknowledgedVersion;
-(BOOL)has_kCalRemindersPreferredDaysToSyncKey;
-(long long)get_privacyPaneHasBeenAcknowledgedVersion;
-(BOOL)get_enableTravelAdvisoriesForAutomaticBehavior;
-(void)set_privacyPaneHasBeenAcknowledgedVersion:(long long)arg1 ;
-(BOOL)has_enableTravelAdvisoriesForAutomaticBehavior;
-(BOOL)has_sqlProfileLoggingEnabled;
-(void)set_LastConfirmedSplashScreenVersionViewed:(long long)arg1 ;
-(long long)get_kCalRemindersPreferredDaysToSyncKey;
-(void)_setVersion:(unsigned long long)arg1 ;
-(void)set_kCalRemindersPreferredDaysToSyncKey:(long long)arg1 ;
-(BOOL)get_suggestedLocationsTestMode;
-(void)migrateIfNeededWithOptions:(unsigned long long)arg1 ;
-(BOOL)get_sqlProfileLoggingEnabled;
-(long long)get_LastConfirmedSplashScreenVersionViewed;
@end

