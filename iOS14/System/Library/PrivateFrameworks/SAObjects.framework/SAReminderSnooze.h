/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAReminderDateTimeTriggerOffset, NSArray;

@interface SAReminderSnooze : SABaseClientBoundCommand

@property (nonatomic,retain) SAReminderDateTimeTriggerOffset * offset; 
@property (nonatomic,copy) NSArray * reminderIdentifierList; 
+(id)snooze;
+(id)snoozeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAReminderDateTimeTriggerOffset *)offset;
-(NSArray *)reminderIdentifierList;
-(void)setReminderIdentifierList:(NSArray *)arg1 ;
-(void)setOffset:(SAReminderDateTimeTriggerOffset *)arg1 ;
@end

