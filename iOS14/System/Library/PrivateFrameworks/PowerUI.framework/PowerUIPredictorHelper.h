/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/


@interface PowerUIPredictorHelper : NSObject
+(double)getHourBinID:(id)arg1 forHourBin:(unsigned long long)arg2 ;
+(double)meanOf:(id)arg1 ;
+(id)timeBetweenUsesForSortedDescendingByAgeEvents:(id)arg1 forHourBin:(unsigned long long)arg2 atDate:(id)arg3 addAtDate:(BOOL)arg4 ;
+(double)medianOf:(id)arg1 ;
+(double)standardDeviationOf:(id)arg1 ;
+(id)getUsageBucketsForEvents:(id)arg1 forDate:(id)arg2 withLog:(id)arg3 ;
+(double)hoursUntilUseFromBucketedUsage:(id)arg1 withCurrentHour:(int)arg2 withComponentsMinutes:(long long)arg3 ;
+(id)events:(id)arg1 forHourBin:(unsigned long long)arg2 date:(id)arg3 withMaxDuration:(double)arg4 ;
+(id)timeBetweenUsesForSortedDescendingByAgeEvents:(id)arg1 forHourBin:(unsigned long long)arg2 aroundDate:(id)arg3 ;
@end

