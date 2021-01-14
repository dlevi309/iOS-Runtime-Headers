/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInterval:(long long)arg1 ;
-(id)groupIdentifier;
-(void)setMonthsOfTheYear:(NSArray *)arg1 ;
-(long long)interval;
-(void)setDaysOfTheWeek:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSArray *)weeksOfTheYear;
-(NSArray *)daysOfTheYear;
-(NSString *)frequencyTimeUnit;
-(void)setFrequencyTimeUnit:(NSString *)arg1 ;
-(void)setDaysOfTheMonth:(NSArray *)arg1 ;
-(void)setDaysOfTheYear:(NSArray *)arg1 ;
-(NSArray *)daysOfTheMonth;
-(NSArray *)monthsOfTheYear;
-(void)setWeeksOfTheYear:(NSArray *)arg1 ;
-(NSArray *)daysOfTheWeek;
@end

