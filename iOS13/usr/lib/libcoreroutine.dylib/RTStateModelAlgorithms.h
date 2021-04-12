/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@interface RTStateModelAlgorithms : NSObject
+(id)adjustedDate:(id)arg1 betweenMinDate:(id)arg2 maxDate:(id)arg3 strideDays:(unsigned long long)arg4 outDeltaDays:(long long*)arg5 ;
+(id)bucketizeDates:(id)arg1 bucketInterval:(double)arg2 latestDate:(id)arg3 ;
+(id)adjustedDate:(id)arg1 betweenMinDate:(id)arg2 maxDate:(id)arg3 strideDays:(unsigned long long)arg4 ;
+(id)adjustedDateInterval:(id)arg1 betweenMinDate:(id)arg2 maxDate:(id)arg3 strideDays:(unsigned long long)arg4 ;
+(double)timeByAddingUnit:(unsigned long long)arg1 value:(long long)arg2 toTime:(double)arg3 ;
@end

