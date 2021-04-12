/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EKRecurrenceHelper, NSString, NSDate, EKRecurrenceEnd, NSArray;

@interface EKRecurrenceRule : EKObject <NSCopying> {

	EKRecurrenceHelper* _recurrenceHelper;
	BOOL _shouldPinMonthDays;
	BOOL _usesEndDate;

}

@property (nonatomic,readonly) BOOL shouldPinMonthDays;                             //@synthesize shouldPinMonthDays=_shouldPinMonthDays - In the implementation block
@property (nonatomic,readonly) SCD_Struct_EK1 gregorianUnits; 
@property (readonly) BOOL usesEndDate;                                              //@synthesize usesEndDate=_usesEndDate - In the implementation block
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSDate * cachedEndDate; 
@property (nonatomic,readonly) BOOL dirtyStateMayAffectExceptionDates; 
@property (nonatomic,readonly) NSString * calendarIdentifier; 
@property (nonatomic,copy) EKRecurrenceEnd * recurrenceEnd; 
@property (nonatomic,readonly) long long frequency; 
@property (nonatomic,readonly) long long interval; 
@property (nonatomic,readonly) long long firstDayOfTheWeek; 
@property (nonatomic,readonly) NSArray * daysOfTheWeek; 
@property (nonatomic,readonly) NSArray * daysOfTheMonth; 
@property (nonatomic,readonly) NSArray * daysOfTheYear; 
@property (nonatomic,readonly) NSArray * weeksOfTheYear; 
@property (nonatomic,readonly) NSArray * monthsOfTheYear; 
@property (nonatomic,readonly) NSArray * setPositions; 
+(id)recurrenceRuleWithType:(long long)arg1 interval:(unsigned long long)arg2 end:(id)arg3 ;
+(id)iCalendarValueFromDayOfTheWeek:(unsigned long long)arg1 ;
+(id)iCalendarValueFromRecurrenceType:(long long)arg1 ;
+(id)iCalendarValueFromDate:(id)arg1 isDateOnly:(BOOL)arg2 isFloating:(BOOL)arg3 ;
+(long long)_ekWeekdayFromCalDayOfWeek:(int)arg1 ;
+(int)_calDayOfWeekFromEKWeekday:(long long)arg1 ;
+(Class)frozenClass;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(NSString *)calendarIdentifier;
-(void)setCount:(unsigned long long)arg1 ;
-(id)specifier;
-(long long)interval;
-(void)setInterval:(long long)arg1 ;
-(id)endDate;
-(NSString *)UUID;
-(void)setUUID:(NSString *)arg1 ;
-(void)reset;
-(void)rollback;
-(void)setEndDate:(id)arg1 ;
-(long long)frequency;
-(void)setFrequency:(long long)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(id)initRecurrenceWithFrequency:(long long)arg1 interval:(long long)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 weeksOfTheYear:(id)arg6 daysOfTheYear:(id)arg7 setPositions:(id)arg8 end:(id)arg9 ;
-(NSArray *)daysOfTheWeek;
-(id)initRecurrenceWithFrequency:(long long)arg1 interval:(long long)arg2 end:(id)arg3 ;
-(void)pinToEndsOfMonthsWithCalendarItem:(id)arg1 ;
-(NSArray *)daysOfTheMonth;
-(void)setDaysOfTheMonth:(NSArray *)arg1 ;
-(NSArray *)monthsOfTheYear;
-(void)setMonthsOfTheYear:(NSArray *)arg1 ;
-(void)setRecurrenceEnd:(EKRecurrenceEnd *)arg1 ;
-(void)setDaysOfTheWeek:(NSArray *)arg1 ;
-(NSArray *)setPositions;
-(void)setSetPositions:(NSArray *)arg1 ;
-(EKRecurrenceEnd *)recurrenceEnd;
-(NSArray *)daysOfTheYear;
-(NSArray *)weeksOfTheYear;
-(BOOL)isWeekendRule;
-(BOOL)isWeekdayRule;
-(BOOL)isAnyDayRule;
-(void)setDaysOfTheYear:(NSArray *)arg1 ;
-(void)setWeeksOfTheYear:(NSArray *)arg1 ;
-(long long)firstDayOfTheWeek;
-(void)setFirstDayOfTheWeek:(long long)arg1 ;
-(BOOL)usesEndDate;
-(BOOL)isEqualToRecurrenceRule:(id)arg1 ;
-(id)stringValueAsDateOnly:(BOOL)arg1 isFloating:(BOOL)arg2 ;
-(BOOL)shouldPinMonthDays;
-(int)firstDayOfTheWeekRaw;
-(void)setFirstDayOfTheWeekRaw:(int)arg1 ;
-(id)_recurrenceHelper;
-(void)_updateSpecifierIfNeeded;
-(NSDate *)cachedEndDate;
-(SCD_Struct_EK1)gregorianUnits;
-(BOOL)dirtyStateMayAffectExceptionDates;
-(BOOL)mayOccurAfterDate:(id)arg1 ;
-(BOOL)isSimpleRule;
@end

