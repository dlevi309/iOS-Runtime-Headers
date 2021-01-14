/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAReminderDateTimeTriggerOffset *)relativeTimeOffset;
-(void)setRelativeTimeOffset:(SAReminderDateTimeTriggerOffset *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(SAReminderDateTimeTriggerOffset *)offset;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(void)setOffset:(SAReminderDateTimeTriggerOffset *)arg1 ;
-(NSString *)timeZoneId;
-(NSDate *)date;
@end

