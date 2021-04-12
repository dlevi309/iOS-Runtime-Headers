/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)shared;
-(id)init;
-(unsigned long long)_version;
-(void)_setVersion:(unsigned long long)arg1 ;
-(BOOL)get_enableTravelAdvisoriesForAutomaticBehavior;
-(BOOL)get_suggestedLocationsTestMode;
-(BOOL)get_suggestEventLocations;
-(long long)get_LastConfirmedSplashScreenVersionViewed;
-(BOOL)get_sqlProfileLoggingEnabled;
-(BOOL)needsMigration;
-(BOOL)has_kCalPreferredDaysToSyncKey;
-(void)set_kCalPreferredDaysToSyncKey:(long long)arg1 ;
-(void)migrateIfNeededWithOptions:(unsigned long long)arg1 ;
-(void)set_enableTravelAdvisoriesForAutomaticBehavior:(BOOL)arg1 ;
-(BOOL)has_enableTravelAdvisoriesForAutomaticBehavior;
-(void)set_suggestEventLocations:(BOOL)arg1 ;
-(BOOL)has_suggestEventLocations;
-(void)set_sqlProfileLoggingEnabled:(BOOL)arg1 ;
-(BOOL)has_sqlProfileLoggingEnabled;
-(void)set_suggestedLocationsTestMode:(BOOL)arg1 ;
-(BOOL)has_suggestedLocationsTestMode;
-(long long)get_kCalPreferredDaysToSyncKey;
-(long long)get_kCalRemindersPreferredDaysToSyncKey;
-(void)set_kCalRemindersPreferredDaysToSyncKey:(long long)arg1 ;
-(BOOL)has_kCalRemindersPreferredDaysToSyncKey;
-(void)set_LastConfirmedSplashScreenVersionViewed:(long long)arg1 ;
-(BOOL)has_LastConfirmedSplashScreenVersionViewed;
@end

