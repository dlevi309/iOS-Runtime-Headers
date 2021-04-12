/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@protocol SGSuggestionsServiceRemindersProtocol <_SGSuggestionsServiceBaseProtocol,_SGSuggestionsServiceFoundInAppsProtocol>
@required
-(void)rejectRealtimeReminder:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)confirmRealtimeReminder:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)allRemindersLimitedTo:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2;
-(void)reminderTitleForContent:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)confirmReminderByRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)rejectReminderByRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)reminderAlarmTriggeredForRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

