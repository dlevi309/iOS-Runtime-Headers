/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@interface RTStateModelAlgorithms : NSObject
+(id)adjustedDate:(id)arg1 betweenMinDate:(id)arg2 maxDate:(id)arg3 strideDays:(unsigned long long)arg4 outDeltaDays:(long long*)arg5 ;
+(id)bucketizeDates:(id)arg1 bucketInterval:(double)arg2 latestDate:(id)arg3 ;
+(id)adjustedDate:(id)arg1 betweenMinDate:(id)arg2 maxDate:(id)arg3 strideDays:(unsigned long long)arg4 ;
+(id)adjustedDateInterval:(id)arg1 betweenMinDate:(id)arg2 maxDate:(id)arg3 strideDays:(unsigned long long)arg4 ;
+(double)timeByAddingUnit:(unsigned long long)arg1 value:(long long)arg2 toTime:(double)arg3 ;
@end

