/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)isNotFoundError:(id)arg1 ;
+(id)log;
+(id)uniqueIdentifierForREMObject:(id)arg1 ;
+(Class)frozenClassForReminderClass:(Class)arg1 ;
-(BOOL)commit:(id*)arg1 ;
-(EKEventStore *)eventStore;
-(id)backingCalendarWithIdentifier:(id)arg1 ;
-(id)reminderWithIdentifier:(id)arg1 ;
-(id)createNewReminderCalendar;
-(id)cachedConstraintsForSource:(id)arg1 ;
-(id)fetchRemindersMatchingPredicate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)createNewReminder;
-(BOOL)saveCalendar:(id)arg1 error:(id*)arg2 ;
-(void)_reminderCopiedToNewList:(id)arg1 ;
-(id)calendarWithIdentifier:(id)arg1 ;
-(BOOL)isSourceManaged:(id)arg1 ;
-(void)remindersChanged;
-(NSArray *)sources;
-(id)_allLists;
-(id)frozenCalendarFromCalendar:(id)arg1 error:(id*)arg2 ;
-(id)backingReminderWithIdentifier:(id)arg1 ;
-(BOOL)_commit:(id*)arg1 error:(id*)arg2 ;
-(id)frozenObjectForReminderObject:(id)arg1 ;
-(BOOL)saveObject:(id)arg1 withFrozenObject:(id)arg2 error:(id*)arg3 ;
-(id)predicateForCompletedRemindersWithCompletionDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3 ;
-(id)predicateForIncompleteRemindersWithDueDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3 ;
-(id)initWithEventStore:(id)arg1 token:(id)arg2 ;
-(void)_checkPredicate:(id)arg1 ;
-(void)_loadLists;
-(void)_loadAccounts;
-(REMStore *)remStore;
-(id)sourceWithIdentifier:(id)arg1 ;
-(id)_fetchAndCacheConstraintsForFrozenSource:(id)arg1 ;
-(/*^block*/id)completionBlockForFetchRequestToken:(id)arg1 remove:(BOOL)arg2 ;
-(id)newFrozenObjectForReminderObject:(id)arg1 withChanges:(id)arg2 ;
-(void)_loadListsIfNeeded;
-(id)frozenAlarmForREMAlarms:(id)arg1 ;
-(id)remindersWithExternalIdentifier:(id)arg1 ;
-(id)resetBackingAlarmWithBackingAlarm:(id)arg1 ;
-(void)reset;
-(BOOL)removeReminder:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveReminder:(id)arg1 error:(id*)arg2 ;
-(id)_moveRemindersToNewLists:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeCalendar:(id)arg1 error:(id*)arg2 ;
-(id)predicateForRemindersInCalendars:(id)arg1 ;
-(id)existingUpdatedObject:(id)arg1 ;
-(void)fillInPath:(id)arg1 usingParents:(id)arg2 ;
-(void)_loadAccountsIfNeeded;
-(id)remindersMatchingPredicate:(id)arg1 ;
-(NSArray *)calendars;
-(id)defaultCalendarForNewReminders;
-(id)resetBackingLocationWithBackingLocation:(id)arg1 ;
@end

