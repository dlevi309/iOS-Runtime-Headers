/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMReminder;

@interface REMReminderSubtaskContext : NSObject {

	REMReminder* _reminder;

}

@property (nonatomic,retain) REMReminder * reminder;                      //@synthesize reminder=_reminder - In the implementation block
@property (nonatomic,readonly) REMReminder * parentReminder; 
-(REMReminder *)reminder;
-(id)fetchRemindersWithError:(id*)arg1 ;
-(REMReminder *)parentReminder;
-(id)initWithReminder:(id)arg1 ;
-(void)setReminder:(REMReminder *)arg1 ;
@end

