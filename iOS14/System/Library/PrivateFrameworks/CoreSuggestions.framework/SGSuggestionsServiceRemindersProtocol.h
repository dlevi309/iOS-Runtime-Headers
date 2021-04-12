/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@protocol SGSuggestionsServiceRemindersProtocol <_SGSuggestionsServiceBaseProtocol,_SGSuggestionsServiceFoundInAppsProtocol>
@required
-(void)reminderTitleForContent:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)rejectReminderByRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)allRemindersLimitedTo:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2;
-(void)confirmRealtimeReminder:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)confirmReminderByRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)rejectRealtimeReminder:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)reminderAlarmTriggeredForRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

