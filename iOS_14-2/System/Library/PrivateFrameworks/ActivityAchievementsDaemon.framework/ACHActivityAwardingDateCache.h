/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/


@class NSNumber, NSDateComponents, NSCalendar, NSDate;

@interface ACHActivityAwardingDateCache : NSObject {

	NSNumber* _dayOfWeekForToday;
	NSNumber* _dayOfWeekForLastDayOfFitnessWeek;
	NSNumber* _numberOfDaysInThisMonth;
	NSNumber* _dayOfMonthForToday;
	NSDateComponents* _currentDateComponents;
	NSCalendar* _calendar;
	NSDate* _currentDate;

}

@property (nonatomic,retain) NSCalendar * calendar;                                      //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) NSDate * currentDate;                                       //@synthesize currentDate=_currentDate - In the implementation block
@property (nonatomic,retain) NSDateComponents * currentDateComponents;                   //@synthesize currentDateComponents=_currentDateComponents - In the implementation block
@property (nonatomic,readonly) NSNumber * dayOfWeekForToday;                             //@synthesize dayOfWeekForToday=_dayOfWeekForToday - In the implementation block
@property (nonatomic,readonly) NSNumber * dayOfWeekForLastDayOfFitnessWeek;              //@synthesize dayOfWeekForLastDayOfFitnessWeek=_dayOfWeekForLastDayOfFitnessWeek - In the implementation block
@property (nonatomic,readonly) NSNumber * numberOfDaysInThisMonth;                       //@synthesize numberOfDaysInThisMonth=_numberOfDaysInThisMonth - In the implementation block
@property (nonatomic,readonly) NSNumber * dayOfMonthForToday;                            //@synthesize dayOfMonthForToday=_dayOfMonthForToday - In the implementation block
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSDate *)currentDate;
-(NSCalendar *)calendar;
-(void)setCurrentDate:(NSDate *)arg1 ;
-(id)initWithCalendar:(id)arg1 ;
-(void)_clearDateVariables;
-(void)setCurrentDateComponents:(NSDateComponents *)arg1 ;
-(NSNumber *)dayOfWeekForToday;
-(NSNumber *)dayOfWeekForLastDayOfFitnessWeek;
-(NSNumber *)numberOfDaysInThisMonth;
-(NSNumber *)dayOfMonthForToday;
-(NSDateComponents *)currentDateComponents;
@end

