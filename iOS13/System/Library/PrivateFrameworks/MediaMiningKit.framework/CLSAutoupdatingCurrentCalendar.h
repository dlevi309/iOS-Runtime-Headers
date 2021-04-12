/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@interface CLSAutoupdatingCurrentCalendar : NSObject
+(void)initialize;
+(id)calendar;
+(id)timezone;
+(BOOL)isWeekendDate:(id)arg1 ;
+(BOOL)dateIntervalIntersectsWeekend:(id)arg1 ;
+(BOOL)closestWeekendLocalStartDate:(out id*)arg1 interval:(out double*)arg2 afterDate:(id)arg3 ;
+(BOOL)rangeOfWeekendLocalStartDate:(out id*)arg1 interval:(out double*)arg2 containingDate:(id)arg3 ;
+(BOOL)nextWeekendLocalStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4 ;
@end

