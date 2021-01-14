/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

