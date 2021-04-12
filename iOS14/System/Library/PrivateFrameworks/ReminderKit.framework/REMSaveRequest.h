/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@protocol REMReplicaManagerProviding;
@class REMStore, NSString, NSMutableDictionary;

@interface REMSaveRequest : NSObject {

	BOOL _saved;
	BOOL _updateLastModifiedDates;
	BOOL _saveIsNoopIfNoChangedKeys;
	BOOL _cloneCompletedRecurrentRemindersAtSave;
	BOOL _applyCRDTsWithoutMerging;
	BOOL _syncToCloudKit;
	REMStore* _store;
	NSString* _author;
	NSMutableDictionary* _trackedAccountChangeItems;
	NSMutableDictionary* _trackedListChangeItems;
	NSMutableDictionary* _trackedSmartListChangeItems;
	NSMutableDictionary* _trackedReminderChangeItems;
	NSMutableDictionary* _trackedAccountCapabilities;
	id<REMReplicaManagerProviding> _replicaManagerProvider;

}

@property (nonatomic,copy) NSString * author;                                                    //@synthesize author=_author - In the implementation block
@property (assign,getter=isSaved,nonatomic) BOOL saved;                                          //@synthesize saved=_saved - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * trackedAccountChangeItems;                  //@synthesize trackedAccountChangeItems=_trackedAccountChangeItems - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * trackedListChangeItems;                     //@synthesize trackedListChangeItems=_trackedListChangeItems - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * trackedSmartListChangeItems;                //@synthesize trackedSmartListChangeItems=_trackedSmartListChangeItems - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * trackedReminderChangeItems;                 //@synthesize trackedReminderChangeItems=_trackedReminderChangeItems - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * trackedAccountCapabilities;                 //@synthesize trackedAccountCapabilities=_trackedAccountCapabilities - In the implementation block
@property (assign,nonatomic) BOOL updateLastModifiedDates;                                       //@synthesize updateLastModifiedDates=_updateLastModifiedDates - In the implementation block
@property (assign,nonatomic) BOOL saveIsNoopIfNoChangedKeys;                                     //@synthesize saveIsNoopIfNoChangedKeys=_saveIsNoopIfNoChangedKeys - In the implementation block
@property (assign,nonatomic) BOOL cloneCompletedRecurrentRemindersAtSave;                        //@synthesize cloneCompletedRecurrentRemindersAtSave=_cloneCompletedRecurrentRemindersAtSave - In the implementation block
@property (assign,nonatomic) BOOL applyCRDTsWithoutMerging;                                      //@synthesize applyCRDTsWithoutMerging=_applyCRDTsWithoutMerging - In the implementation block
@property (assign,nonatomic) BOOL syncToCloudKit;                                                //@synthesize syncToCloudKit=_syncToCloudKit - In the implementation block
@property (nonatomic,retain) id<REMReplicaManagerProviding> replicaManagerProvider;              //@synthesize replicaManagerProvider=_replicaManagerProvider - In the implementation block
@property (nonatomic,readonly) REMStore * store;                                                 //@synthesize store=_store - In the implementation block
-(id)updateSmartList:(id)arg1 ;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(NSMutableDictionary *)trackedSmartListChangeItems;
-(id)_updateListWithReminderChangeItem:(id)arg1 ;
-(id)addReminderWithTitle:(id)arg1 toListChangeItem:(id)arg2 ;
-(void)_trackAccountCapabilities:(id)arg1 forObjectID:(id)arg2 ;
-(void)setUpdateLastModifiedDates:(BOOL)arg1 ;
-(BOOL)saveSynchronouslyWithError:(id*)arg1 ;
-(id)_updateListStorage:(id)arg1 accountCapabilities:(id)arg2 ;
-(id)performRecurrenceClone;
-(void)setCloneCompletedRecurrentRemindersAtSave:(BOOL)arg1 ;
-(REMStore *)store;
-(id)addListWithName:(id)arg1 toListSublistContextChangeItem:(id)arg2 ;
-(void)setReplicaManagerProvider:(id<REMReplicaManagerProviding>)arg1 ;
-(NSMutableDictionary *)trackedAccountChangeItems;
-(id)_copyReminderChangeItem:(id)arg1 toListChangeItem:(id)arg2 ;
-(id)initWithStore:(id)arg1 ;
-(void)performPreSaveActions;
-(id)icsDueOrEndDateWithICSCalendarItem:(id)arg1 options:(id)arg2 ;
-(void)updateUIDInReminderChangeItem:(id)arg1 fromICSComponent:(id)arg2 icsCalendar:(id)arg3 ;
-(id)addReminderWithTitle:(id)arg1 toListChangeItem:(id)arg2 reminderObjectID:(id)arg3 ;
-(void)saveWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_populateRecurrencesInReminderChangeItem:(id)arg1 withICSComponent:(id)arg2 icsCalendar:(id)arg3 ;
-(id)addGroupWithName:(id)arg1 toAccountGroupContextChangeItem:(id)arg2 ;
-(void)_populateReminderChangeItem:(id)arg1 withICSTodoItem:(id)arg2 icsCalendar:(id)arg3 isNew:(BOOL)arg4 withOptions:(id)arg5 ;
-(id)addListWithName:(id)arg1 toAccountChangeItem:(id)arg2 listObjectID:(id)arg3 ;
-(BOOL)_changeItemsAreAllEmpty;
-(void)_prepareSave:(/*^block*/id)arg1 ;
-(void)_trackSmartListChangeItem:(id)arg1 ;
-(id)_updateAccountWithListChangeItem:(id)arg1 ;
-(BOOL)saveIsNoopIfNoChangedKeys;
-(id)importRemindersFromICSData:(id)arg1 insertIntoListChangeItem:(id)arg2 error:(id*)arg3 ;
-(NSMutableDictionary *)trackedListChangeItems;
-(BOOL)updateLastModifiedDates;
-(void)setApplyCRDTsWithoutMerging:(BOOL)arg1 ;
-(id)description;
-(id)updateAccount:(id)arg1 ;
-(id)_copyReminder:(id)arg1 toListChangeItem:(id)arg2 ;
-(id)_iCalendarDataFromICSTodoItem:(id)arg1 icsCalendar:(id)arg2 ;
-(id)_trackedSmartListChangeItemForObjectID:(id)arg1 ;
-(id)addReminderWithTitle:(id)arg1 toReminderSubtaskContextChangeItem:(id)arg2 ;
-(void)_trackReminderChangeItem:(id)arg1 ;
-(BOOL)syncToCloudKit;
-(id)_trackedAccountCapabilitiesForObjectID:(id)arg1 ;
-(id)_addAccountWithType:(long long)arg1 name:(id)arg2 accountObjectID:(id)arg3 ;
-(void)_addAlarmsToReminderChangeItem:(id)arg1 withICSAlarm:(id)arg2 icsCalendar:(id)arg3 ;
-(id)addListWithName:(id)arg1 toAccountChangeItem:(id)arg2 ;
-(void)_updateTrackedAccountChangeItem:(id)arg1 withObjectID:(id)arg2 ;
-(void)setSyncToCloudKit:(BOOL)arg1 ;
-(id)addReminderWithTitle:(id)arg1 toReminderSubtaskContextChangeItem:(id)arg2 reminderObjectID:(id)arg3 ;
-(NSMutableDictionary *)trackedAccountCapabilities;
-(id)_trackedReminderChangeItemForObjectID:(id)arg1 ;
-(void)_willSaveAccountChangeItems:(id)arg1 listChangeItems:(id)arg2 smartListChangeItems:(id)arg3 reminderChangeItems:(id)arg4 ;
-(id)_trackedAccountChangeItemForObjectID:(id)arg1 ;
-(id)_trackedListChangeItemForObjectID:(id)arg1 ;
-(void)setSaved:(BOOL)arg1 ;
-(void)_updateTrackedListChangeItem:(id)arg1 withObjectID:(id)arg2 ;
-(id)_copyReminderChangeItem:(id)arg1 toReminderSubtaskContextChangeItem:(id)arg2 ;
-(void)_trackListChangeItem:(id)arg1 ;
-(id)addListWithName:(id)arg1 toListSublistContextChangeItem:(id)arg2 listObjectID:(id)arg3 ;
-(BOOL)applyCRDTsWithoutMerging;
-(BOOL)isSaved;
-(void)setSaveIsNoopIfNoChangedKeys:(BOOL)arg1 ;
-(id)updateReminder:(id)arg1 ;
-(void)updateReminderChangeItem:(id)arg1 fromICSTodo:(id)arg2 icsCalendar:(id)arg3 isNew:(BOOL)arg4 withOptions:(id)arg5 ;
-(id)_addAccountWithType:(long long)arg1 name:(id)arg2 ;
-(void)_updateTrackedSmartListChangeItem:(id)arg1 withObjectID:(id)arg2 ;
-(NSMutableDictionary *)trackedReminderChangeItems;
-(id)_copyReminder:(id)arg1 toReminderSubtaskContextChangeItem:(id)arg2 ;
-(id)updateList:(id)arg1 ;
-(id)addGroupWithName:(id)arg1 toAccountGroupContextChangeItem:(id)arg2 groupObjectID:(id)arg3 ;
-(id<REMReplicaManagerProviding>)replicaManagerProvider;
-(BOOL)cloneCompletedRecurrentRemindersAtSave;
-(void)_populateAlarmsInReminderChangeItem:(id)arg1 withICSAlarms:(id)arg2 icsCalendar:(id)arg3 ;
-(void)_trackAccountChangeItem:(id)arg1 ;
-(void)_updateResolutionTokenMapForChangeItem:(id)arg1 ;
-(void)_updateTrackedReminderChangeItem:(id)arg1 withObjectID:(id)arg2 ;
-(BOOL)updateReminderChangeItem:(id)arg1 fromICSData:(id)arg2 isNew:(BOOL)arg3 withOptions:(id)arg4 error:(id*)arg5 ;
@end

