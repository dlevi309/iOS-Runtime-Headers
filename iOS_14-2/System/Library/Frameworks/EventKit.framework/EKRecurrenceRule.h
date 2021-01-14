/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EKRecurrenceHelper, NSDateComponents, NSString, NSDate, EKRecurrenceEnd, NSArray;

@interface EKRecurrenceRule : EKObject <NSCopying> {

	EKRecurrenceHelper* _recurrenceHelper;
	BOOL _shouldPinMonthDays;
	BOOL _usesEndDate;

}

@property (nonatomic,readonly) BOOL shouldPinMonthDays;                             //@synthesize shouldPinMonthDays=_shouldPinMonthDays - In the implementation block
@property (nonatomic,readonly) NSDateComponents * dateComponents; 
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
+(id)knownIdentityKeysForComparison;
+(long long)_ekWeekdayFromCalDayOfWeek:(int)arg1 ;
+(id)iCalendarValueFromRecurrenceType:(long long)arg1 ;
+(id)recurrenceRuleWithType:(long long)arg1 interval:(unsigned long long)arg2 end:(id)arg3 ;
+(int)_calDayOfWeekFromEKWeekday:(long long)arg1 ;
+(id)iCalendarValueFromDate:(id)arg1 isDateOnly:(BOOL)arg2 isFloating:(BOOL)arg3 ;
+(id)knownSingleValueKeysForComparison;
+(long long)daysTypeForDayArray:(id)arg1 ;
+(Class)frozenClass;
+(id)iCalendarValueFromDayOfTheWeek:(unsigned long long)arg1 ;
-(void)setFrequency:(long long)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(long long)frequency;
-(id)endDate;
-(void)setSpecifier:(id)arg1 ;
-(id)specifier;
-(void)setInterval:(long long)arg1 ;
-(NSString *)UUID;
-(void)setRecurrenceEnd:(EKRecurrenceEnd *)arg1 ;
-(void)setMonthsOfTheYear:(NSArray *)arg1 ;
-(id)init;
-(BOOL)isWeekdayRule;
-(long long)interval;
-(void)setDaysOfTheWeek:(NSArray *)arg1 ;
-(NSString *)calendarIdentifier;
-(BOOL)isWeekendRule;
-(NSArray *)weeksOfTheYear;
-(id)humanReadableDescriptionWithStartDate:(id)arg1 isConcise:(BOOL)arg2 ;
-(NSArray *)daysOfTheYear;
-(void)setEndDate:(id)arg1 ;
-(BOOL)isEqualToRecurrenceRule:(id)arg1 ;
-(unsigned long long)count;
-(id)_recurrenceHelper;
-(id)initRecurrenceWithFrequency:(long long)arg1 interval:(long long)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 weeksOfTheYear:(id)arg6 daysOfTheYear:(id)arg7 setPositions:(id)arg8 end:(id)arg9 ;
-(void)_updateSpecifierIfNeeded;
-(BOOL)isSimpleRule;
-(id)description;
-(void)setSetPositions:(NSArray *)arg1 ;
-(int)firstDayOfTheWeekRaw;
-(BOOL)shouldPinMonthDays;
-(id)initRecurrenceWithFrequency:(long long)arg1 interval:(long long)arg2 end:(id)arg3 ;
-(void)setDaysOfTheMonth:(NSArray *)arg1 ;
-(void)setDaysOfTheYear:(NSArray *)arg1 ;
-(NSDateComponents *)dateComponents;
-(long long)firstDayOfTheWeek;
-(BOOL)mayOccurAfterDate:(id)arg1 ;
-(void)reset;
-(BOOL)isAnyDayRule;
-(EKRecurrenceEnd *)recurrenceEnd;
-(NSArray *)daysOfTheMonth;
-(void)setUUID:(NSString *)arg1 ;
-(BOOL)dirtyStateMayAffectExceptionDates;
-(void)setFirstDayOfTheWeek:(long long)arg1 ;
-(id)humanReadableDescriptionWithStartDate:(id)arg1 ;
-(NSArray *)monthsOfTheYear;
-(void)setWeeksOfTheYear:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringValueAsDateOnly:(BOOL)arg1 isFloating:(BOOL)arg2 ;
-(void)setFirstDayOfTheWeekRaw:(int)arg1 ;
-(void)rollback;
-(NSArray *)daysOfTheWeek;
-(NSArray *)setPositions;
-(void)pinToEndsOfMonthsWithCalendarItem:(id)arg1 ;
-(NSDate *)cachedEndDate;
-(BOOL)usesEndDate;
@end

