/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAReminderRecurrence : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * daysOfTheMonth; 
@property (nonatomic,copy) NSArray * daysOfTheWeek; 
@property (nonatomic,copy) NSArray * daysOfTheYear; 
@property (nonatomic,copy) NSString * frequencyTimeUnit; 
@property (assign,nonatomic) long long interval; 
@property (nonatomic,copy) NSArray * monthsOfTheYear; 
@property (nonatomic,copy) NSArray * weeksOfTheYear; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recurrence;
+(id)recurrenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)interval;
-(void)setInterval:(long long)arg1 ;
-(id)groupIdentifier;
-(NSArray *)daysOfTheWeek;
-(id)encodedClassName;
-(NSArray *)daysOfTheMonth;
-(void)setDaysOfTheMonth:(NSArray *)arg1 ;
-(NSArray *)monthsOfTheYear;
-(void)setMonthsOfTheYear:(NSArray *)arg1 ;
-(void)setDaysOfTheWeek:(NSArray *)arg1 ;
-(NSArray *)daysOfTheYear;
-(NSArray *)weeksOfTheYear;
-(void)setDaysOfTheYear:(NSArray *)arg1 ;
-(void)setWeeksOfTheYear:(NSArray *)arg1 ;
-(NSString *)frequencyTimeUnit;
-(void)setFrequencyTimeUnit:(NSString *)arg1 ;
@end

