/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <libobjc.A.dylib/EKUpdatedReminderBackingObjectProvider.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSMutableDictionary, NSMutableSet, NSMutableArray, REMStore, EKEventStore, NSString;

@interface EKReminderStore : NSObject <EKUpdatedReminderBackingObjectProvider> {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _sources;
	NSMutableDictionary* _cachedConstraints;
	NSArray* _lists;
	NSMutableSet* _newObjectsIDs;
	NSMutableDictionary* _updatedObjects;
	NSMutableSet* _objectIDsToCommit;
	NSMutableDictionary* _deletedObjects;
	NSMutableArray* _objectsToReset;
	NSMutableArray* _remindersNeedingMove;
	NSMutableDictionary* _movedRemindersIDMap;
	NSObject*<OS_dispatch_queue> _queryQueue;
	NSMutableDictionary* queryCompletionHandlers;
	REMStore* _remStore;
	EKEventStore* _eventStore;

}

@property (nonatomic,readonly) REMStore * remStore;                 //@synthesize remStore=_remStore - In the implementation block
@property (__weak,readonly) EKEventStore * eventStore;              //@synthesize eventStore=_eventStore - In the implementation block
@property (readonly) NSArray * sources; 
@property (readonly) NSArray * calendars; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(BOOL)isNotFoundError:(id)arg1 ;
+(id)uniqueIdentifierForREMObject:(id)arg1 ;
+(Class)frozenClassForReminderClass:(Class)arg1 ;
-(id)calendarWithIdentifier:(id)arg1 ;
-(void)reset;
-(NSArray *)sources;
-(EKEventStore *)eventStore;
-(id)defaultCalendarForNewReminders;
-(REMStore *)remStore;
-(/*^block*/id)completionBlockForFetchRequestToken:(id)arg1 remove:(BOOL)arg2 ;
-(void)remindersChanged;
-(void)_loadAccounts;
-(void)_loadAccountsIfNeeded;
-(id)frozenObjectForReminderObject:(id)arg1 ;
-(id)_fetchAndCacheConstraintsForFrozenSource:(id)arg1 ;
-(void)_loadLists;
-(void)_loadListsIfNeeded;
-(id)backingCalendarWithIdentifier:(id)arg1 ;
-(id)frozenCalendarFromCalendar:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveObject:(id)arg1 withFrozenObject:(id)arg2 error:(id*)arg3 ;
-(id)backingReminderWithIdentifier:(id)arg1 ;
-(BOOL)saveCalendar:(id)arg1 error:(id*)arg2 ;
-(void)fillInPath:(id)arg1 usingParents:(id)arg2 ;
-(BOOL)_commit:(id*)arg1 error:(id*)arg2 ;
-(id)_moveRemindersToNewLists:(id)arg1 error:(id*)arg2 ;
-(void)_checkPredicate:(id)arg1 ;
-(id)remindersMatchingPredicate:(id)arg1 ;
-(id)_allLists;
-(id)newFrozenObjectForReminderObject:(id)arg1 withChanges:(id)arg2 ;
-(id)existingUpdatedObject:(id)arg1 ;
-(id)initWithEventStore:(id)arg1 token:(id)arg2 ;
-(id)sourceWithIdentifier:(id)arg1 ;
-(id)cachedConstraintsForSource:(id)arg1 ;
-(NSArray *)calendars;
-(id)createNewReminderCalendar;
-(BOOL)removeCalendar:(id)arg1 error:(id*)arg2 ;
-(id)reminderWithIdentifier:(id)arg1 ;
-(id)remindersWithExternalIdentifier:(id)arg1 ;
-(id)createNewReminder;
-(BOOL)saveReminder:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeReminder:(id)arg1 error:(id*)arg2 ;
-(id)resetBackingAlarmWithBackingAlarm:(id)arg1 ;
-(id)resetBackingLocationWithBackingLocation:(id)arg1 ;
-(BOOL)commit:(id*)arg1 ;
-(id)predicateForRemindersInCalendars:(id)arg1 ;
-(id)predicateForIncompleteRemindersWithDueDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3 ;
-(id)predicateForCompletedRemindersWithCompletionDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3 ;
-(id)fetchRemindersMatchingPredicate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)frozenAlarmForREMAlarms:(id)arg1 ;
-(void)_reminderCopiedToNewList:(id)arg1 ;
@end

