/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMNotebookRecipientSettings : FATObject {

	NSNumber* _reminderNotifyEmail;
	NSNumber* _reminderNotifyInApp;
	NSNumber* _inMyList;
	NSString* _stack;

}

@property (nonatomic,retain) NSNumber * reminderNotifyEmail;              //@synthesize reminderNotifyEmail=_reminderNotifyEmail - In the implementation block
@property (nonatomic,retain) NSNumber * reminderNotifyInApp;              //@synthesize reminderNotifyInApp=_reminderNotifyInApp - In the implementation block
@property (nonatomic,retain) NSNumber * inMyList;                         //@synthesize inMyList=_inMyList - In the implementation block
@property (nonatomic,retain) NSString * stack;                            //@synthesize stack=_stack - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setStack:(NSString *)arg1 ;
-(NSString *)stack;
-(NSNumber *)reminderNotifyEmail;
-(void)setReminderNotifyEmail:(NSNumber *)arg1 ;
-(NSNumber *)reminderNotifyInApp;
-(void)setReminderNotifyInApp:(NSNumber *)arg1 ;
-(NSNumber *)inMyList;
-(void)setInMyList:(NSNumber *)arg1 ;
@end

