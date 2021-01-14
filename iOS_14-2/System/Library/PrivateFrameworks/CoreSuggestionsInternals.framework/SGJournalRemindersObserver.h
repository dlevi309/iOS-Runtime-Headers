/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@protocol SGJournalRemindersObserver <SGJournalBaseObserver>
@required
-(void)addReminder:(id)arg1;
-(void)confirmReminderFromThisDevice:(id)arg1;
-(void)rejectReminderFromThisDevice:(id)arg1;
-(void)reminderAlarmTriggeredFromThisDevice:(id)arg1;
-(void)confirmReminderFromOtherDevice:(id)arg1;
-(void)rejectReminderFromOtherDevice:(id)arg1;
-(void)orphanReminder:(id)arg1;

@end

