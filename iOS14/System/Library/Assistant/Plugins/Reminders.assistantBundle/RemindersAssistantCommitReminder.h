/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/Reminders.assistantBundle/Reminders
*/

#import <SAObjects/SADomainObjectCommit.h>
#import <libobjc.A.dylib/AFServiceCommand.h>

@class NSString;

@interface RemindersAssistantCommitReminder : SADomainObjectCommit <AFServiceCommand>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(id)commitReminder:(id)arg1 ;
-(id)commitList:(id)arg1 ;
-(id)_validateReminder:(id)arg1 ;
-(id)updateReminderFromSAReminder:(id)arg1 withSaveRequest:(id)arg2 fromStore:(id)arg3 failure:(id*)arg4 ;
-(id)createReminderFromSAReminder:(id)arg1 withSaveRequest:(id)arg2 fromStore:(id)arg3 failure:(id*)arg4 ;
-(id)_validateList:(id)arg1 ;
-(void)setUserActivityFromFromSAPayload:(id)arg1 onChangeItem:(id)arg2 failure:(id*)arg3 ;
-(void)setActionFromFromSAPayload:(id)arg1 onChangeItem:(id)arg2 ;
-(void)setAlarmsForSAReminder:(id)arg1 onChangeItem:(id)arg2 failure:(id*)arg3 ;
-(void)setRecurrenceRuleForSAReminder:(id)arg1 onChangeItem:(id)arg2 failure:(id*)arg3 ;
-(id)listForSAReminder:(id)arg1 fromStore:(id)arg2 ;
-(void)setDueDateComponentForSAReminder:(id)arg1 onChangeItem:(id)arg2 ;
-(void)setDateTimeAlarmForSAReminderDateTimeTrigger:(id)arg1 onChangeItem:(id)arg2 ;
-(void)setLocationAlarmForSAReminderLocationTrigger:(id)arg1 onChangeItem:(id)arg2 failure:(id*)arg3 ;
-(id)locationAlarmForSAReminderLocationTrigger:(id)arg1 forAccountCapabilities:(id)arg2 failure:(id*)arg3 ;
@end

