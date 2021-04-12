/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKFrozenReminderObject.h>

@interface EKFrozenReminderRecurrenceRule : EKFrozenReminderObject
+(Class)meltedClass;
+(long long)convertToReminderKitFrequency:(int)arg1 ;
+(long long)convertToReminderKitWeekday:(int)arg1 ;
+(int)convertFromReminderKitFrequency:(long long)arg1 ;
+(int)convertFromReminderKitWeekday:(long long)arg1 ;
-(unsigned long long)count;
-(id)specifier;
-(long long)interval;
-(id)endDate;
-(id)uuid;
-(id)uniqueIdentifier;
-(int)frequency;
-(id)_recurrenceRule;
-(int)firstDayOfTheWeek;
-(id)remObjectID;
-(id)initWithREMObject:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3 ;
-(id)initWithREMObject:(id)arg1 inStore:(id)arg2 ;
-(void)loadSpecifierDaysOfTheWeek:(id*)arg1 daysOfTheMonth:(id*)arg2 monthsOfTheYear:(id*)arg3 weeksOfTheYear:(id*)arg4 daysOfTheYear:(id*)arg5 setPositions:(id*)arg6 ;
-(long long)remWeekdayToEKWeekday:(long long)arg1 ;
-(long long)ekWeekdayToREMWeekday:(long long)arg1 ;
-(id)daysOfTheWeekFromREMRecurrenceRule;
-(id)remDaysOfTheWeekFromEKDaysOfTheWeek:(id)arg1 ;
-(id)initWithAlternateUniverseObject:(id)arg1 inEventStore:(id)arg2 withUpdatedChildObjects:(id)arg3 ;
-(id)addUpdatedRecurrenceRule:(id)arg1 ;
@end

