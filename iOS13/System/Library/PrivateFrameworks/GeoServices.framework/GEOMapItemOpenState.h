/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@interface GEOMapItemOpenState : NSObject
+(unsigned long long)_geoMapItemOpeningHoursOptionsForNormalizedHours:(id)arg1 compareDate:(id)arg2 timeZone:(id)arg3 ;
+(unsigned long long)_checkForStateWithStartTime:(double)arg1 endtime:(double)arg2 compareTimeInSeconds:(double)arg3 openingSoonThreshold:(double)arg4 closingSoonThreshold:(double)arg5 secondsOverMidnightForTomorrow:(double)arg6 isTodaysNormalizedHours:(BOOL)arg7 tomorrowsHoursBeginAtMidnight:(BOOL)arg8 ;
+(unsigned long long)_geoMapItemOpeningHoursOptionsForBusinessHours:(id)arg1 compareDate:(id)arg2 timeZone:(id)arg3 ;
@end

