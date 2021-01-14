/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMReminder;

@interface REMReminderFlaggedContext : NSObject {

	REMReminder* _reminder;

}

@property (nonatomic,retain) REMReminder * reminder;              //@synthesize reminder=_reminder - In the implementation block
@property (nonatomic,readonly) long long flagged; 
-(id)initWithReminder:(id)arg1 ;
-(void)setReminder:(REMReminder *)arg1 ;
-(long long)flagged;
-(REMReminder *)reminder;
@end

