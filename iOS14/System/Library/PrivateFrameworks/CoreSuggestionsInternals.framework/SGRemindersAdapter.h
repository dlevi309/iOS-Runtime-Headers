/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/SGJournalRemindersObserver.h>

@class REMStore, SGSqlEntityStore, NSString;

@interface SGRemindersAdapter : NSObject <SGJournalRemindersObserver> {

	REMStore* _reminderStore;
	SGSqlEntityStore* _store;

}

@property (assign,nonatomic,__weak) SGSqlEntityStore * store;              //@synthesize store=_store - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_remindersFoundInAppsListInREMStore:(id)arg1 ;
+(id)constructNotesForReminder:(id)arg1 ;
+(BOOL)reminderHasDuplicate:(id)arg1 usingStore:(id)arg2 ;
+(id)reminderPredicateForReminder:(id)arg1 ;
+(unsigned long long)remindersCreatedBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)setStore:(SGSqlEntityStore *)arg1 ;
-(SGSqlEntityStore *)store;
-(void)rejectReminder:(id)arg1 ;
-(void)addReminder:(id)arg1 ;
-(void)confirmReminderFromThisDevice:(id)arg1 ;
-(void)rejectReminderFromThisDevice:(id)arg1 ;
-(void)reminderAlarmTriggeredFromThisDevice:(id)arg1 ;
-(void)confirmReminderFromOtherDevice:(id)arg1 ;
-(void)rejectReminderFromOtherDevice:(id)arg1 ;
-(void)orphanReminder:(id)arg1 ;
-(id)initWithSGSqlEntityStore:(id)arg1 ;
-(id)initWithSGSqlEntityStore:(id)arg1 andREMStore:(id)arg2 ;
-(id)sourceUniqueIdentifierForStorageReminder:(id)arg1 ;
-(BOOL)_saveReminder:(id)arg1 usingReminderStore:(id)arg2 ;
-(BOOL)_deleteReminder:(id)arg1 usingReminderStore:(id)arg2 ;
-(id)_remRemindersAssociatedWithStorageReminder:(id)arg1 remStore:(id)arg2 ;
-(id)_remRemindersAssociatedWithTitle:(id)arg1 sourceUniqueIdentifier:(id)arg2 usingStore:(id)arg3 ;
@end

