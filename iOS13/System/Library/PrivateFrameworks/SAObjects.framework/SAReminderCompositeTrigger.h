/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAReminderTrigger.h>

@class SAReminderDateTimeTrigger, SAReminderLocationTrigger;

@interface SAReminderCompositeTrigger : SAReminderTrigger

@property (nonatomic,retain) SAReminderDateTimeTrigger * dateTimeTrigger; 
@property (nonatomic,retain) SAReminderLocationTrigger * locationTrigger; 
+(id)compositeTrigger;
+(id)compositeTriggerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAReminderDateTimeTrigger *)dateTimeTrigger;
-(SAReminderLocationTrigger *)locationTrigger;
-(void)setDateTimeTrigger:(SAReminderDateTimeTrigger *)arg1 ;
-(void)setLocationTrigger:(SAReminderLocationTrigger *)arg1 ;
@end

