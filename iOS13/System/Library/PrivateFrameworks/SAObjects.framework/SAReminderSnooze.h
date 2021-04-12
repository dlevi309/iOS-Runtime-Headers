/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setOffset:(SAReminderDateTimeTriggerOffset *)arg1 ;
-(SAReminderDateTimeTriggerOffset *)offset;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)reminderIdentifierList;
-(void)setReminderIdentifierList:(NSArray *)arg1 ;
@end

