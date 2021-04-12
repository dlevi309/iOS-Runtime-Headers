/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAReminderTrigger.h>

@class NSDate, SAReminderDateTimeTriggerOffset, NSString;

@interface SAReminderDateTimeTrigger : SAReminderTrigger

@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,retain) SAReminderDateTimeTriggerOffset * offset; 
@property (nonatomic,retain) SAReminderDateTimeTriggerOffset * relativeTimeOffset; 
@property (nonatomic,copy) NSString * timeZoneId; 
+(id)dateTimeTrigger;
+(id)dateTimeTriggerWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDate *)date;
-(id)groupIdentifier;
-(void)setOffset:(SAReminderDateTimeTriggerOffset *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(SAReminderDateTimeTriggerOffset *)offset;
-(id)encodedClassName;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(NSString *)timeZoneId;
-(SAReminderDateTimeTriggerOffset *)relativeTimeOffset;
-(void)setRelativeTimeOffset:(SAReminderDateTimeTriggerOffset *)arg1 ;
@end

