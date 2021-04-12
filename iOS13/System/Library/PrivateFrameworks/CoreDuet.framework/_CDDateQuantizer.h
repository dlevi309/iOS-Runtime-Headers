/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSCalendar, NSDate, NSDateComponents;

@interface _CDDateQuantizer : NSObject {

	NSCalendar* _calendar;
	long long _dayStartHour;
	NSDate* _currentDay;
	NSDateComponents* _currentQuantizationOffsetComponents;

}

@property (nonatomic,readonly) NSCalendar * calendar;                                           //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) long long dayStartHour;                                          //@synthesize dayStartHour=_dayStartHour - In the implementation block
@property (nonatomic,copy) NSDate * currentDay;                                                 //@synthesize currentDay=_currentDay - In the implementation block
@property (nonatomic,copy) NSDateComponents * currentQuantizationOffsetComponents;              //@synthesize currentQuantizationOffsetComponents=_currentQuantizationOffsetComponents - In the implementation block
-(NSCalendar *)calendar;
-(long long)dayStartHour;
-(NSDate *)currentDay;
-(void)setCurrentDay:(NSDate *)arg1 ;
-(void)setCurrentQuantizationOffsetComponents:(NSDateComponents *)arg1 ;
-(NSDateComponents *)currentQuantizationOffsetComponents;
-(id)initWithCalendar:(id)arg1 dayStartHour:(long long)arg2 ;
-(id)quantizeDate:(id)arg1 ;
@end

