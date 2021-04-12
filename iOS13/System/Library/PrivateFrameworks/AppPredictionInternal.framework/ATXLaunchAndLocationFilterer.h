/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@interface ATXLaunchAndLocationFilterer : NSObject
+(BOOL)locationIsStaleOrNotAccurateEnough:(id)arg1 now:(id)arg2 ;
+(BOOL)appBundleIdIsBlacklisted:(id)arg1 blacklist:(id)arg2 ;
+(BOOL)genreIdIsBlacklistedGivenAppBundleId:(id)arg1 blacklist:(id)arg2 ;
+(BOOL)shouldSampleWithDomain:(id)arg1 date:(id)arg2 samplingRate:(double)arg3 maxSamples:(unsigned long long)arg4 ;
+(void)incrementOnDeviceDailySamplesWithDomain:(id)arg1 date:(id)arg2 ;
+(id)_formattedStringForDate:(id)arg1 ;
@end

