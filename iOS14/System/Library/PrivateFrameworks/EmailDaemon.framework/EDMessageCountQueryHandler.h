/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EDMailboxChangeHookResponder.h>
#import <libobjc.A.dylib/EDMessageChangeHookResponder.h>
#import <libobjc.A.dylib/EMMailboxChangeObserver.h>
#import <libobjc.A.dylib/EFCancelable.h>

@protocol EMMessageRepositoryCountQueryObserver_xpc;
@class NSMutableDictionary, NSMutableSet, EMObjectID, EFMutableInt64Set, EFStoppableScheduler, EFQuery, NSPredicate, EMMailboxScope, EDMessageQueryEvaluator, EDMessagePersistence, EDPersistenceHookRegistry, EFCancelationToken, EDUpdateThrottler, NSString;

@interface EDMessageCountQueryHandler : NSObject <EFLoggable, EDMailboxChangeHookResponder, EDMessageChangeHookResponder, EMMailboxChangeObserver, EFCancelable> {

	NSMutableDictionary* _serverCounts;
	NSMutableSet* _mailboxesBeingSynced;
	long long _resyncDatabaseGeneration;
	EMObjectID* _mailboxObserverID;
	EFMutableInt64Set* _seenMessageIDs;
	EFMutableInt64Set* _newMessageIDs;
	os_unfair_lock_s _seenMessageIDsLock;
	AQ _recalculationPending;
	EFAtomicObject _atomicQueryDescription;
	EFAtomicObject _atomicMailboxScopeDescription;
	EFStoppableScheduler* _scheduler;
	EFQuery* _query;
	EFQuery* _expandedQuery;
	NSPredicate* _predicateIgnoringFlags;
	EMMailboxScope* _serverCountMailboxScope;
	EDMessageQueryEvaluator* _queryEvaluator;
	id<EMMessageRepositoryCountQueryObserver_xpc> _resultsObserver;
	EDMessagePersistence* _messagePersistence;
	EDPersistenceHookRegistry* _hookRegistry;
	EFCancelationToken* _cancelationToken;
	EDUpdateThrottler* _updateThrottler;
	NSString* _pendingFlagChangesKey;
	long long _localCount;

}

@property (nonatomic,readonly) EFStoppableScheduler * scheduler;                                         //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,retain) EFQuery * query;                                                            //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) EFQuery * expandedQuery;                                                    //@synthesize expandedQuery=_expandedQuery - In the implementation block
@property (nonatomic,retain) NSPredicate * predicateIgnoringFlags;                                       //@synthesize predicateIgnoringFlags=_predicateIgnoringFlags - In the implementation block
@property (nonatomic,readonly) EMMailboxScope * serverCountMailboxScope;                                 //@synthesize serverCountMailboxScope=_serverCountMailboxScope - In the implementation block
@property (nonatomic,retain) EDMessageQueryEvaluator * queryEvaluator;                                   //@synthesize queryEvaluator=_queryEvaluator - In the implementation block
@property (nonatomic,retain) id<EMMessageRepositoryCountQueryObserver_xpc> resultsObserver;              //@synthesize resultsObserver=_resultsObserver - In the implementation block
@property (nonatomic,retain) EDMessagePersistence * messagePersistence;                                  //@synthesize messagePersistence=_messagePersistence - In the implementation block
@property (nonatomic,retain) EDPersistenceHookRegistry * hookRegistry;                                   //@synthesize hookRegistry=_hookRegistry - In the implementation block
@property (nonatomic,retain) EFCancelationToken * cancelationToken;                                      //@synthesize cancelationToken=_cancelationToken - In the implementation block
@property (nonatomic,retain) EDUpdateThrottler * updateThrottler;                                        //@synthesize updateThrottler=_updateThrottler - In the implementation block
@property (readonly) NSString * pendingFlagChangesKey;                                                   //@synthesize pendingFlagChangesKey=_pendingFlagChangesKey - In the implementation block
@property (assign,nonatomic) long long localCount;                                                       //@synthesize localCount=_localCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(EFQuery *)query;
-(void)test_tearDown;
-(id)initWithQuery:(id)arg1 serverCountMailboxScope:(id)arg2 messagePersistence:(id)arg3 hookRegistry:(id)arg4 observer:(id)arg5 ;
-(void)setResultsObserver:(id<EMMessageRepositoryCountQueryObserver_xpc>)arg1 ;
-(void)setQueryEvaluator:(EDMessageQueryEvaluator *)arg1 ;
-(void)setUpdateThrottler:(EDUpdateThrottler *)arg1 ;
-(void)_fireCountCalculation;
-(void)persistenceDidChangeFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3 ;
-(id)_originalMessagesKeyForKey:(id)arg1 ;
-(void)_decrementLocalCount:(long long)arg1 logMessage:(id)arg2 generationWindow:(id)arg3 ;
-(void)persistenceDidUpdateLastSyncAndMostRecentStatusCount:(long long)arg1 forMailboxWithObjectID:(id)arg2 generationWindow:(id)arg3 ;
-(NSPredicate *)predicateIgnoringFlags;
-(void)persistenceDidUpdateProperties:(id)arg1 message:(id)arg2 generationWindow:(id)arg3 ;
-(void)_incrementLocalCount:(long long)arg1 logMessage:(id)arg2 generationWindow:(id)arg3 ;
-(void)persistenceIsAddingMailboxWithDatabaseID:(long long)arg1 objectID:(id)arg2 generationWindow:(id)arg3 ;
-(void)didSyncMailbox:(id)arg1 ;
-(void)setHookRegistry:(EDPersistenceHookRegistry *)arg1 ;
-(void)willSyncMailbox:(id)arg1 ;
-(NSString *)pendingFlagChangesKey;
-(void)_prepareForChangeWithMessages:(id)arg1 changeKey:(id)arg2 ;
-(void)mailboxListChanged:(id)arg1 ;
-(EDMessagePersistence *)messagePersistence;
-(id)_filterMessages:(id)arg1 potentiallyMatchingMessages:(id*)arg2 ;
-(void)persistenceDidChangeGlobalMessageID:(long long)arg1 orConversationID:(long long)arg2 message:(id)arg3 generationWindow:(id)arg4 ;
-(void)setPredicateIgnoringFlags:(NSPredicate *)arg1 ;
-(void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2 ;
-(void)_notifyObserverWithLogMessage:(id)arg1 ;
-(void)persistenceWillChangeFlags:(id)arg1 messages:(id)arg2 ;
-(EFQuery *)expandedQuery;
-(EMMailboxScope *)serverCountMailboxScope;
-(void)setMessagePersistence:(EDMessagePersistence *)arg1 ;
-(void)setCancelationToken:(EFCancelationToken *)arg1 ;
-(void)_persistenceDidDeleteMessages:(id)arg1 includeMessagesWithDeletedFlag:(BOOL)arg2 generationWindow:(id)arg3 ;
-(BOOL)_moreThan:(long long)arg1 messagesExistWithGlobalMessageID:(long long)arg2 ;
-(EDUpdateThrottler *)updateThrottler;
-(void)_processChangedMessages:(id)arg1 changeKey:(id)arg2 generationWindow:(id)arg3 ;
-(void)persistenceDidDeleteMessages:(id)arg1 generationWindow:(id)arg2 ;
-(EDPersistenceHookRegistry *)hookRegistry;
-(void)setQuery:(EFQuery *)arg1 ;
-(void)persistenceDidUpdateMostRecentStatusCount:(long long)arg1 forMailboxWithObjectID:(id)arg2 generationWindow:(id)arg3 ;
-(void)setLocalCount:(long long)arg1 ;
-(void)_scheduleCountCalculationWithReason:(id)arg1 ;
-(id<EMMessageRepositoryCountQueryObserver_xpc>)resultsObserver;
-(EDMessageQueryEvaluator *)queryEvaluator;
-(long long)localCount;
-(void)cancel;
-(EFCancelationToken *)cancelationToken;
-(void)persistenceDidUpdateServerCount:(long long)arg1 forMailboxWithObjectID:(id)arg2 generationWindow:(id)arg3 ;
-(void)dealloc;
-(void)setExpandedQuery:(EFQuery *)arg1 ;
-(EFStoppableScheduler *)scheduler;
@end

