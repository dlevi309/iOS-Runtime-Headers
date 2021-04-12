/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
*/


#import <HealthHearingDaemon/HealthHearingDaemon-Structs.h>
@class HDProfile, HDKeyValueDomain, HDProfileIdentifier;

@interface HDHeadphoneDoseMetadataStore : NSObject {

	HDProfile* _profile;
	HDKeyValueDomain* _domain;
	os_unfair_lock_s _lock;
	double _doseLimit;
	BOOL _shouldLoadDoseLimitOverride;

}

@property (nonatomic,readonly) HDProfileIdentifier * _profileIdentifier; 
+(id)_earliestFireDateAllowedWithNow:(id)arg1 ;
-(void)_lock_loadDoseLimitOverrideIfNeeded;
-(BOOL)_clearPreviousSevenDayNotificationFireDateWithError:(id*)arg1 ;
-(long long)_updatePreviousSevenDayNotificationFireDateWithSamplesInserted:(id)arg1 now:(id)arg2 error:(id*)arg3 ;
-(BOOL)_setShouldRebuildSevenDayStatistics:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)_overrideDoseLimit:(id)arg1 error:(id*)arg2 ;
-(id)_lock_fetchDoseLimitInfoWithError:(id*)arg1 ;
-(long long)updatePreviousSevenDayNotificationFireDateWithSamplesInserted:(id)arg1 error:(id*)arg2 ;
-(BOOL)rebuildPreviousSevenDayNotificationFireDateWithError:(id*)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)shouldNotifyUserForAccumulatedDose:(double)arg1 ;
-(id)_infoForAccumulatedDoseAtFireDate:(id)arg1 ;
-(BOOL)_shouldRebuildPreviousSevenDayNotificationWithError:(id*)arg1 ;
-(void)_lock_loadDoseLimitOverride;
-(id)_fetchPreviousSevenDayNotificationFireDateWithNow:(id)arg1 error:(id*)arg2 ;
-(id)collectionIntervalForDoseAccumulated:(double)arg1 ;
-(BOOL)_shouldRebuildSevenDayStatisticsWithError:(id*)arg1 ;
-(id)_fetchPreviousSevenDayNotificationFireDateWithError:(id*)arg1 ;
-(id)_fetchDoseLimitInfoWithError:(id*)arg1 ;
-(BOOL)didNotifyWithFireDate:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setShouldRebuildPreviousSevenDayNotification:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)_rebuildPreviousSevenDayNotificationFireDateWithNow:(id)arg1 error:(id*)arg2 ;
-(HDProfileIdentifier *)_profileIdentifier;
-(BOOL)_didNotifyWithFireDate:(id)arg1 changed:(BOOL*)arg2 error:(id*)arg3 ;
-(BOOL)_setPreviousSevenDayNotificationFireDate:(id)arg1 error:(id*)arg2 ;
-(id)_infoForSevenDayDoseAtFireDate:(id)arg1 ;
-(id)_mostRecentSevenDayNotificationFowNow:(id)arg1 error:(id*)arg2 ;
-(BOOL)rebuildPreviousSevenDayNotificationFireDateIfNeededWithError:(id*)arg1 ;
-(id)_info;
@end

