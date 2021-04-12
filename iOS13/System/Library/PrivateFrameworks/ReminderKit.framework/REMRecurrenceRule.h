/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/REMObjectIDProviding.h>

@class REMRecurrenceEnd, NSArray, REMObjectID;

@interface REMRecurrenceRule : NSObject <NSSecureCoding, NSCopying, REMObjectIDProviding> {

	REMRecurrenceEnd* _recurrenceEnd;
	long long _frequency;
	long long _interval;
	long long _firstDayOfTheWeek;
	NSArray* _daysOfTheWeek;
	NSArray* _daysOfTheMonth;
	NSArray* _daysOfTheYear;
	NSArray* _weeksOfTheYear;
	NSArray* _monthsOfTheYear;
	NSArray* _setPositions;
	REMObjectID* _objectID;
	REMObjectID* _accountID;
	REMObjectID* _reminderID;

}

@property (nonatomic,readonly) REMObjectID * objectID;                             //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) REMObjectID * accountID;                            //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) REMObjectID * reminderID;                           //@synthesize reminderID=_reminderID - In the implementation block
@property (nonatomic,copy,readonly) REMRecurrenceEnd * recurrenceEnd;              //@synthesize recurrenceEnd=_recurrenceEnd - In the implementation block
@property (nonatomic,readonly) long long frequency;                                //@synthesize frequency=_frequency - In the implementation block
@property (nonatomic,readonly) long long interval;                                 //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) long long firstDayOfTheWeek;                        //@synthesize firstDayOfTheWeek=_firstDayOfTheWeek - In the implementation block
@property (nonatomic,readonly) NSArray * daysOfTheWeek;                            //@synthesize daysOfTheWeek=_daysOfTheWeek - In the implementation block
@property (nonatomic,readonly) NSArray * daysOfTheMonth;                           //@synthesize daysOfTheMonth=_daysOfTheMonth - In the implementation block
@property (nonatomic,readonly) NSArray * daysOfTheYear;                            //@synthesize daysOfTheYear=_daysOfTheYear - In the implementation block
@property (nonatomic,readonly) NSArray * weeksOfTheYear;                           //@synthesize weeksOfTheYear=_weeksOfTheYear - In the implementation block
@property (nonatomic,readonly) NSArray * monthsOfTheYear;                          //@synthesize monthsOfTheYear=_monthsOfTheYear - In the implementation block
@property (nonatomic,readonly) NSArray * setPositions;                             //@synthesize setPositions=_setPositions - In the implementation block
@property (nonatomic,readonly) REMObjectID * remObjectID; 
+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
+(id)newObjectID;
+(id)nextRecurrentDueDateAfter:(id)arg1 dueDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 recurrenceRules:(id)arg5 ;
+(id)objectIDWithUUID:(id)arg1 ;
+(id)iCalendarValueFromRecurrenceType:(long long)arg1 ;
+(id)iCalendarValueFromDate:(id)arg1 isDateOnly:(BOOL)arg2 isFloating:(BOOL)arg3 ;
+(id)iCalendarValueFromWeekday:(long long)arg1 ;
+(int)_convertREMRecurrenceFrequencyToCalRecurrenceFrequency:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)interval;
-(REMObjectID *)objectID;
-(long long)frequency;
-(REMObjectID *)accountID;
-(NSArray *)daysOfTheWeek;
-(NSArray *)daysOfTheMonth;
-(NSArray *)monthsOfTheYear;
-(NSArray *)setPositions;
-(REMRecurrenceEnd *)recurrenceEnd;
-(NSArray *)daysOfTheYear;
-(NSArray *)weeksOfTheYear;
-(long long)firstDayOfTheWeek;
-(id)iCalendarDescription;
-(id)initRecurrenceRuleWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 frequency:(long long)arg4 interval:(long long)arg5 firstDayOfTheWeek:(long long)arg6 daysOfTheWeek:(id)arg7 daysOfTheMonth:(id)arg8 monthsOfTheYear:(id)arg9 weeksOfTheYear:(id)arg10 daysOfTheYear:(id)arg11 setPositions:(id)arg12 end:(id)arg13 ;
-(id)initWithRecurrenceRule:(id)arg1 objectID:(id)arg2 accountID:(id)arg3 reminderID:(id)arg4 ;
-(id)initRecurrenceRuleWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 frequency:(long long)arg4 interval:(long long)arg5 end:(id)arg6 ;
-(REMObjectID *)remObjectID;
-(REMObjectID *)reminderID;
-(BOOL)isEqualToRecurrenceRule:(id)arg1 ;
-(id)stringValueAsDateOnly:(BOOL)arg1 isFloating:(BOOL)arg2 ;
-(id)initWithRecurrenceRule:(id)arg1 objectID:(id)arg2 end:(id)arg3 ;
@end

