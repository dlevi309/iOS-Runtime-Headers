/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
*/


@interface HDAudioAnalyticsUtilities : NSObject
+(double)leqFromStatistics:(id)arg1 ;
+(double)durationFromStatistics:(id)arg1 ;
+(id)localGregorianCalendar;
+(id)boundedIntegerForValue:(double)arg1 orderedBuckets:(id)arg2 sentinel:(id)arg3 transformer:(/*^block*/id)arg4 ;
+(double)doseFromStatistics:(id)arg1 days:(long long)arg2 ;
+(long long)exposureAlertCount:(id)arg1 ;
+(id)fullDays:(long long)arg1 beforeDate:(id)arg2 ;
+(id)rollingDays:(long long)arg1 beforeDate:(id)arg2 ;
+(id)boundedIntegerForExposureDuration:(double)arg1 ;
+(id)boundedIntegerForSyncDelayDuration:(double)arg1 ;
+(id)boundedIntegerForEventDuration:(double)arg1 ;
+(id)boundedIntegerForLockedDuration:(double)arg1 ;
+(id)boundedIntegerForTimeSinceLastNotification:(double)arg1 ;
+(id)boundedIntegerForLEQ:(double)arg1 ;
+(id)boundedIntegerForDose:(double)arg1 ;
+(id)audioAverageAndDurationForExposureType:(long long)arg1 profile:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 error:(id*)arg5 ;
+(id)audioExposureEventsForExposureType:(long long)arg1 profile:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 error:(id*)arg5 ;
+(id)latestAudioExposureEventForExposureType:(long long)arg1 profile:(id)arg2 error:(id*)arg3 ;
@end

