/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/


@protocol DADataclassLockWatcher;
@class NSMutableArray, NSMutableSet, NSString;

@interface DALocalDBGateKeeper : NSObject {

	BOOL _claimedOwnershipOfContacts;
	BOOL _claimedOwnershipOfEvents;
	BOOL _claimedOwnershipOfNotes;
	id<DADataclassLockWatcher> _contactsLockHolder;
	NSMutableArray* _contactsWaiters;
	NSMutableSet* _waiterIDsExpectingContactsLock;
	id<DADataclassLockWatcher> _eventsLockHolder;
	NSMutableArray* _eventsWaiters;
	NSMutableSet* _waiterIDsExpectingEventsLock;
	id<DADataclassLockWatcher> _notesLockHolder;
	NSMutableArray* _notesWaiters;
	NSMutableSet* _waiterIDsExpectingNotesLock;
	NSString* _unitTestHackRunLoopMode;

}

@property (assign,nonatomic) BOOL claimedOwnershipOfContacts;                            //@synthesize claimedOwnershipOfContacts=_claimedOwnershipOfContacts - In the implementation block
@property (nonatomic,retain) id<DADataclassLockWatcher> contactsLockHolder;              //@synthesize contactsLockHolder=_contactsLockHolder - In the implementation block
@property (nonatomic,retain) NSMutableArray * contactsWaiters;                           //@synthesize contactsWaiters=_contactsWaiters - In the implementation block
@property (nonatomic,retain) NSMutableSet * waiterIDsExpectingContactsLock;              //@synthesize waiterIDsExpectingContactsLock=_waiterIDsExpectingContactsLock - In the implementation block
@property (assign,nonatomic) BOOL claimedOwnershipOfEvents;                              //@synthesize claimedOwnershipOfEvents=_claimedOwnershipOfEvents - In the implementation block
@property (nonatomic,retain) id<DADataclassLockWatcher> eventsLockHolder;                //@synthesize eventsLockHolder=_eventsLockHolder - In the implementation block
@property (nonatomic,retain) NSMutableArray * eventsWaiters;                             //@synthesize eventsWaiters=_eventsWaiters - In the implementation block
@property (nonatomic,retain) NSMutableSet * waiterIDsExpectingEventsLock;                //@synthesize waiterIDsExpectingEventsLock=_waiterIDsExpectingEventsLock - In the implementation block
@property (assign,nonatomic) BOOL claimedOwnershipOfNotes;                               //@synthesize claimedOwnershipOfNotes=_claimedOwnershipOfNotes - In the implementation block
@property (nonatomic,retain) id<DADataclassLockWatcher> notesLockHolder;                 //@synthesize notesLockHolder=_notesLockHolder - In the implementation block
@property (nonatomic,retain) NSMutableArray * notesWaiters;                              //@synthesize notesWaiters=_notesWaiters - In the implementation block
@property (nonatomic,retain) NSMutableSet * waiterIDsExpectingNotesLock;                 //@synthesize waiterIDsExpectingNotesLock=_waiterIDsExpectingNotesLock - In the implementation block
@property (nonatomic,retain) NSString * unitTestHackRunLoopMode;                         //@synthesize unitTestHackRunLoopMode=_unitTestHackRunLoopMode - In the implementation block
+(id)sharedGateKeeper;
-(id)init;
-(void)dealloc;
-(id)stateString;
-(void)claimedOwnershipOfDataclasses:(long long)arg1 ;
-(void)setContactsWaiters:(NSMutableArray *)arg1 ;
-(void)setEventsWaiters:(NSMutableArray *)arg1 ;
-(void)setNotesWaiters:(NSMutableArray *)arg1 ;
-(void)setWaiterIDsExpectingContactsLock:(NSMutableSet *)arg1 ;
-(void)setWaiterIDsExpectingEventsLock:(NSMutableSet *)arg1 ;
-(void)setWaiterIDsExpectingNotesLock:(NSMutableSet *)arg1 ;
-(void)setContactsLockHolder:(id<DADataclassLockWatcher>)arg1 ;
-(void)setEventsLockHolder:(id<DADataclassLockWatcher>)arg1 ;
-(void)setNotesLockHolder:(id<DADataclassLockWatcher>)arg1 ;
-(BOOL)_canWakenWaiter:(id)arg1 ;
-(void)_abortWaiterForWrappers:(id)arg1 ;
-(void)_setUnitTestHackRunLoopMode:(id)arg1 ;
-(void)_notifyWaitersForDataclasses:(id)arg1 ;
-(void)_registerWaiter:(id)arg1 forDataclassLocks:(long long)arg2 preempt:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)relinquishLocksForWaiter:(id)arg1 dataclasses:(long long)arg2 moreComing:(BOOL)arg3 ;
-(void)_sendAllClearNotifications;
-(void)registerPreemptiveWaiter:(id)arg1 forDataclassLocks:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)registerWaiter:(id)arg1 forDataclassLocks:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)unregisterWaiterForDataclassLocks:(id)arg1 ;
-(BOOL)claimedOwnershipOfContacts;
-(void)setClaimedOwnershipOfContacts:(BOOL)arg1 ;
-(id<DADataclassLockWatcher>)contactsLockHolder;
-(NSMutableArray *)contactsWaiters;
-(NSMutableSet *)waiterIDsExpectingContactsLock;
-(BOOL)claimedOwnershipOfEvents;
-(void)setClaimedOwnershipOfEvents:(BOOL)arg1 ;
-(id<DADataclassLockWatcher>)eventsLockHolder;
-(NSMutableArray *)eventsWaiters;
-(NSMutableSet *)waiterIDsExpectingEventsLock;
-(BOOL)claimedOwnershipOfNotes;
-(void)setClaimedOwnershipOfNotes:(BOOL)arg1 ;
-(id<DADataclassLockWatcher>)notesLockHolder;
-(NSMutableArray *)notesWaiters;
-(NSMutableSet *)waiterIDsExpectingNotesLock;
-(NSString *)unitTestHackRunLoopMode;
-(void)setUnitTestHackRunLoopMode:(NSString *)arg1 ;
@end

