/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMSharedNotebookRecipientSettings : FATObject {

	NSNumber* _reminderNotifyEmail;
	NSNumber* _reminderNotifyInApp;

}

@property (nonatomic,retain) NSNumber * reminderNotifyEmail;              //@synthesize reminderNotifyEmail=_reminderNotifyEmail - In the implementation block
@property (nonatomic,retain) NSNumber * reminderNotifyInApp;              //@synthesize reminderNotifyInApp=_reminderNotifyInApp - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)reminderNotifyEmail;
-(void)setReminderNotifyEmail:(NSNumber *)arg1 ;
-(NSNumber *)reminderNotifyInApp;
-(void)setReminderNotifyInApp:(NSNumber *)arg1 ;
@end

