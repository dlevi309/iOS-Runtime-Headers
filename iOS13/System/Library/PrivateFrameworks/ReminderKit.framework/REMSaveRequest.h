/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@protocol REMReplicaManagerProviding;
@class REMStore, NSString, NSMutableDictionary;

@interface REMSaveRequest : NSObject {

	BOOL _saved;
	BOOL _updateLastModifiedDates;
	BOOL _cloneCompletedRecurrentRemindersAtSave;
	BOOL _applyCRDTsWithoutMerging;
	REMStore* _store;
	NSString* _author;
	NSMutableDictionary* _trackedAccountChangeItems;
	NSMutableDictionary* _trackedListChangeItems;
	NSMutableDictionary* _trackedReminderChangeItems;
	NSMutableDictionary* _trackedAccountCapabilities;
	id<REMReplicaManagerProviding> _replicaManagerProvider;

}

@property (nonatomic,copy) NSString * author;                                                    //@synthesize author=_author - In the implementation block
@property (assign,getter=isSaved,nonatomic) BOOL saved;                                          //@synthesize saved=_saved - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * trackedAccountChangeItems;                  //@synthesize trackedAccountChangeItems=_trackedAccountChangeItems - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * trackedListChangeItems;                     //@synthesize trackedListChangeItems=_trackedListChangeItems - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * trackedReminderChangeItems;                 //@synthesize trackedReminderChangeItems=_trackedReminderChangeItems - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * trackedAccountCapabilities;                 //@synthesize trackedAccountCapabilities=_trackedAccountCapabilities - In the implementation block
@property (assign,nonatomic) BOOL updateLastModifiedDates;                                       //@synthesize updateLastModifiedDates=_updateLastModifiedDates - In the implementation block
@property (assign,nonatomic) BOOL cloneCompletedRecurrentRemindersAtSave;                        //@synthesize cloneCompletedRecurrentRemindersAtSave=_cloneCompletedRecurrentRemindersAtSave - In the implementation block
@property (assign,nonatomic) BOOL applyCRDTsWithoutMerging;                                      //@synthesize applyCRDTsWithoutMerging=_applyCRDTsWithoutMerging - In the implementation block
@property (nonatomic,retain) id<REMReplicaManagerProviding> replicaManagerProvider;              //@synthesize replicaManagerProvider=_replicaManagerProvider - In the implementation block
@property (nonatomic,readonly) REMStore * store;                                                 //@synthesize store=_store - In the implementation block
-(id)description;
-(id)initWithStore:(id)arg1 ;
-(REMStore *)store;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(id)updateAccount:(id)arg1 ;
-(BOOL)isSaved;
-(BOOL)updateLastModifiedDates;
-(void)setUpdateLastModifiedDates:(BOOL)arg1 ;
-(BOOL)cloneCompletedRecurrentRemindersAtSave;
-(void)setCloneCompletedRecurrentRemindersAtSave:(BOOL)arg1 ;
-(id)addReminderWithTitle:(id)arg1 toListChangeItem:(id)arg2 ;
-(void)_populateReminderChangeItem:(id)arg1 withICSTodoItem:(id)arg2 icsCalendar:(id)arg3 isNew:(BOOL)arg4 withOptions:(id)arg5 ;
-(id)_iCalendarDataFromICSTodoItem:(id)arg1 icsCalendar:(id)arg2 ;
-(void)updateReminderChangeItem:(id)arg1 fromICSTodo:(id)arg2 icsCalendar:(id)arg3 isNew:(BOOL)arg4 withOptions:(id)arg5 ;
-(id)icsDueOrEndDateWithICSCalendarItem:(id)arg1 options:(id)arg2 ;
-(void)updateUIDInReminderChangeItem:(id)arg1 fromICSComponent:(id)arg2 icsCalendar:(id)arg3 ;
-(void)_populateAlarmsInReminderChangeItem:(id)arg1 withICSAlarms:(id)arg2 icsCalendar:(id)arg3 ;
-(void)_populateRecurrencesInReminderChangeItem:(id)arg1 withICSComponent:(id)arg2 icsCalendar:(id)arg3 ;
-(void)_addAlarmsToReminderChangeItem:(id)arg1 withICSAlarm:(id)arg2 icsCalendar:(id)arg3 ;
-(id)importRemindersFromICSData:(id)arg1 insertIntoListChangeItem:(id)arg2 error:(id*)arg3 ;
-(BOOL)updateReminderChangeItem:(id)arg1 fromICSData:(id)arg2 isNew:(BOOL)arg3 withOptions:(id)arg4 error:(id*)arg5 ;
-(void)_trackAccountCapabilities:(id)arg1 forObjectID:(id)arg2 ;
-(id)_updateListWithReminderChangeItem:(id)arg1 ;
-(id)_trackedAccountCapabilitiesForObjectID:(id)arg1 ;
-(id)_trackedReminderChangeItemForObjectID:(id)arg1 ;
-(id)addReminderWithTitle:(id)arg1 toReminderSubtaskContextChangeItem:(id)arg2 reminderObjectID:(id)arg3 ;
-(id)addReminderWithTitle:(id)arg1 toListChangeItem:(id)arg2 reminderObjectID:(id)arg3 ;
-(id)_trackedListChangeItemForObjectID:(id)arg1 ;
-(id<REMReplicaManagerProviding>)replicaManagerProvider;
-(void)setReplicaManagerProvider:(id<REMReplicaManagerProviding>)arg1 ;
-(id)_trackedAccountChangeItemForObjectID:(id)arg1 ;
-(id)updateList:(id)arg1 ;
-(BOOL)saveSynchronouslyWithError:(id*)arg1 ;
-(id)_addAccountWithType:(long long)arg1 name:(id)arg2 accountObjectID:(id)arg3 ;
-(NSMutableDictionary *)trackedAccountChangeItems;
-(NSMutableDictionary *)trackedListChangeItems;
-(NSMutableDictionary *)trackedReminderChangeItems;
-(void)_trackAccountChangeItem:(id)arg1 ;
-(void)_trackListChangeItem:(id)arg1 ;
-(id)addGroupWithName:(id)arg1 toAccountGroupContextChangeItem:(id)arg2 groupObjectID:(id)arg3 ;
-(id)addListWithName:(id)arg1 toAccountChangeItem:(id)arg2 listObjectID:(id)arg3 ;
-(id)addListWithName:(id)arg1 toListSublistContextChangeItem:(id)arg2 listObjectID:(id)arg3 ;
-(id)_updateListStorage:(id)arg1 accountCapabilities:(id)arg2 ;
-(void)_trackReminderChangeItem:(id)arg1 ;
-(void)_updateResolutionTokenMapForChangeItem:(id)arg1 ;
-(BOOL)_changeItemsAreAllEmpty;
-(void)setSaved:(BOOL)arg1 ;
-(void)_prepareSave:(/*^block*/id)arg1 ;
-(void)performPreSaveActions;
-(void)_willSaveAccountChangeItems:(id)arg1 listChangeItems:(id)arg2 reminderChangeItems:(id)arg3 ;
-(id)performRecurrenceClone;
-(id)updateReminder:(id)arg1 ;
-(NSMutableDictionary *)trackedAccountCapabilities;
-(id)_addAccountWithType:(long long)arg1 name:(id)arg2 ;
-(id)_updateAccountWithListChangeItem:(id)arg1 ;
-(id)addGroupWithName:(id)arg1 toAccountGroupContextChangeItem:(id)arg2 ;
-(id)addListWithName:(id)arg1 toAccountChangeItem:(id)arg2 ;
-(id)addListWithName:(id)arg1 toListSublistContextChangeItem:(id)arg2 ;
-(id)addReminderWithTitle:(id)arg1 toReminderSubtaskContextChangeItem:(id)arg2 ;
-(void)saveWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateTrackedAccountChangeItem:(id)arg1 withObjectID:(id)arg2 ;
-(void)_updateTrackedListChangeItem:(id)arg1 withObjectID:(id)arg2 ;
-(void)_updateTrackedReminderChangeItem:(id)arg1 withObjectID:(id)arg2 ;
-(id)_copyReminder:(id)arg1 toListChangeItem:(id)arg2 ;
-(id)_copyReminder:(id)arg1 toReminderSubtaskContextChangeItem:(id)arg2 ;
-(id)_copyReminderChangeItem:(id)arg1 toListChangeItem:(id)arg2 ;
-(id)_copyReminderChangeItem:(id)arg1 toReminderSubtaskContextChangeItem:(id)arg2 ;
-(BOOL)applyCRDTsWithoutMerging;
-(void)setApplyCRDTsWithoutMerging:(BOOL)arg1 ;
@end

