/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
*/


#import <HealthMenstrualCyclesDaemon/HealthMenstrualCyclesDaemon-Structs.h>
@class HDProfile, HDMultiTypeSortedSampleIterator, HKCalendarCache;

@interface HDMCDaySummaryEnumerator : NSObject {

	HDProfile* _profile;
	SCD_Struct_HD0 _dayIndexRange;
	HDMultiTypeSortedSampleIterator* _iterator;
	BOOL _ascending;
	HKCalendarCache* _calendarCache;

}
+(id)daySummaryAtIndex:(long long)arg1 profile:(id)arg2 calendarCache:(id)arg3 error:(id*)arg4 ;
+(id)daySummariesInIndexRange:(SCD_Struct_HD0)arg1 profile:(id)arg2 calendarCache:(id)arg3 error:(id*)arg4 ;
-(BOOL)enumerateWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithProfile:(id)arg1 calendarCache:(id)arg2 dayIndexRange:(SCD_Struct_HD0)arg3 ascending:(BOOL)arg4 ;
-(void)_closeBuilders:(id)arg1 withIndexes:(id)arg2 handler:(/*^block*/id)arg3 stop:(BOOL*)arg4 ;
-(void)_addSample:(id)arg1 toBuilders:(id)arg2 sampleRange:(SCD_Struct_HD0)arg3 ;
-(void)_addSample:(id)arg1 toBuilders:(id)arg2 inRange:(SCD_Struct_HD0)arg3 ;
-(void)_addSample:(id)arg1 toBuilders:(id)arg2 atDayIndex:(long long)arg3 ;
@end

