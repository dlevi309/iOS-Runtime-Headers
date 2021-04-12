/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/EDAccountChangeHookResponder.h>
#import <libobjc.A.dylib/EDThreadQueryHandlerDelegate.h>
#import <libobjc.A.dylib/EMMessageRepositoryInterface.h>
#import <libobjc.A.dylib/EFLoggable.h>

@protocol OS_dispatch_queue, EMUserProfileProvider, EDRemoteSearchProvider, EDResumable;
@class EDMailboxPredictionController, NSMutableDictionary, NSHashTable, EDPersistenceHookRegistry, EDMessagePersistence, EDConversationPersistence, EDThreadPersistence, EDMessageChangeManager, NSConditionLock, NSObject, EDMailboxPersistence, EDVIPManager, EDFetchController, NSString;

@interface EDMessageRepository : NSObject <EDAccountChangeHookResponder, EDThreadQueryHandlerDelegate, EMMessageRepositoryInterface, EFLoggable> {

	EDMailboxPredictionController* _mailboxPredictionController;
	os_unfair_lock_s _mailboxPredictionControllerLock;
	os_unfair_lock_s _handlersLock;
	NSMutableDictionary* _queryHandlers;
	NSMutableDictionary* _threadQueryHandlers;
	NSHashTable* _handlerTokens;
	EDPersistenceHookRegistry* _hookRegistry;
	EDMessagePersistence* _messagePersistence;
	EDConversationPersistence* _conversationPersistence;
	EDThreadPersistence* _threadPersistence;
	EDMessageChangeManager* _messageChangeManager;
	NSConditionLock* _performQueryOnSerializationQueue;
	NSObject*<OS_dispatch_queue> _serializationQueue;
	EDMailboxPersistence* _mailboxPersistence;
	id<EMUserProfileProvider> _userProfileProvider;
	EDVIPManager* _vipManager;
	id<EDRemoteSearchProvider> _remoteSearchProvider;
	EDFetchController* _fetchController;
	id<EDResumable> _observerResumer;

}

@property (nonatomic,retain) NSMutableDictionary * queryHandlers;                                //@synthesize queryHandlers=_queryHandlers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * threadQueryHandlers;                          //@synthesize threadQueryHandlers=_threadQueryHandlers - In the implementation block
@property (nonatomic,retain) NSHashTable * handlerTokens;                                        //@synthesize handlerTokens=_handlerTokens - In the implementation block
@property (nonatomic,retain) EDPersistenceHookRegistry * hookRegistry;                           //@synthesize hookRegistry=_hookRegistry - In the implementation block
@property (nonatomic,retain) EDMessagePersistence * messagePersistence;                          //@synthesize messagePersistence=_messagePersistence - In the implementation block
@property (nonatomic,readonly) EDConversationPersistence * conversationPersistence;              //@synthesize conversationPersistence=_conversationPersistence - In the implementation block
@property (nonatomic,retain) EDThreadPersistence * threadPersistence;                            //@synthesize threadPersistence=_threadPersistence - In the implementation block
@property (nonatomic,retain) EDMessageChangeManager * messageChangeManager;                      //@synthesize messageChangeManager=_messageChangeManager - In the implementation block
@property (nonatomic,readonly) NSConditionLock * performQueryOnSerializationQueue;               //@synthesize performQueryOnSerializationQueue=_performQueryOnSerializationQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serializationQueue;                  //@synthesize serializationQueue=_serializationQueue - In the implementation block
@property (nonatomic,readonly) EDMailboxPersistence * mailboxPersistence;                        //@synthesize mailboxPersistence=_mailboxPersistence - In the implementation block
@property (nonatomic,readonly) id<EMUserProfileProvider> userProfileProvider;                    //@synthesize userProfileProvider=_userProfileProvider - In the implementation block
@property (nonatomic,readonly) EDVIPManager * vipManager;                                        //@synthesize vipManager=_vipManager - In the implementation block
@property (nonatomic,readonly) id<EDRemoteSearchProvider> remoteSearchProvider;                  //@synthesize remoteSearchProvider=_remoteSearchProvider - In the implementation block
@property (nonatomic,readonly) EDFetchController * fetchController;                              //@synthesize fetchController=_fetchController - In the implementation block
@property (nonatomic,readonly) id<EDResumable> observerResumer;                                  //@synthesize observerResumer=_observerResumer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)signpostLog;
-(void)dealloc;
-(unsigned long long)signpostID;
-(NSObject*<OS_dispatch_queue>)serializationQueue;
-(EDMessageChangeManager *)messageChangeManager;
-(EDPersistenceHookRegistry *)hookRegistry;
-(void)accountBecameActive:(id)arg1 ;
-(void)accountBecameInactive:(id)arg1 ;
-(EDVIPManager *)vipManager;
-(EDMessagePersistence *)messagePersistence;
-(EDMailboxPersistence *)mailboxPersistence;
-(void)setMessageChangeManager:(EDMessageChangeManager *)arg1 ;
-(void)setCachedMetadataJSON:(id)arg1 forKey:(id)arg2 messageID:(id)arg3 ;
-(void)setMessagePersistence:(EDMessagePersistence *)arg1 ;
-(id<EMUserProfileProvider>)userProfileProvider;
-(EDConversationPersistence *)conversationPersistence;
-(id<EDRemoteSearchProvider>)remoteSearchProvider;
-(EDThreadPersistence *)threadPersistence;
-(void)test_tearDown;
-(void)performQuery:(id)arg1 limit:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performCountQuery:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performQuery:(id)arg1 withObserver:(id)arg2 observationIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)startCountingQuery:(id)arg1 includingServerCountsForMailboxScope:(id)arg2 withObserver:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)messageListItemsForObjectIDs:(id)arg1 requestID:(unsigned long long)arg2 observationIdentifier:(id)arg3 loadSummaryForAdditionalObjectIDs:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)performMessageChangeAction:(id)arg1 requestID:(unsigned long long)arg2 returnUndoAction:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)requestRepresentationForMessageWithID:(id)arg1 requestID:(unsigned long long)arg2 options:(id)arg3 delegate:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)resetPrecomputedThreadScopesForMailboxScope:(id)arg1 ;
-(void)getCachedMetadataJSONForKey:(id)arg1 messageID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)predictMailboxForMovingMessages:(id)arg1 withObserver:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)loadOlderMessagesForMailboxes:(id)arg1 ;
-(EDFetchController *)fetchController;
-(void)setHookRegistry:(EDPersistenceHookRegistry *)arg1 ;
-(id)initWithMessagePersistence:(id)arg1 conversationPersistence:(id)arg2 threadPersistence:(id)arg3 messageChangeManager:(id)arg4 hookRegistry:(id)arg5 mailboxPersistence:(id)arg6 remoteSearchProvider:(id)arg7 userProfileProvider:(id)arg8 vipManager:(id)arg9 fetchController:(id)arg10 observerResumer:(id)arg11 ;
-(void)cancelAllHandlers;
-(NSMutableDictionary *)queryHandlers;
-(void)_resetUpdateThrottlersWithLogMessage:(id)arg1 ;
-(NSConditionLock *)performQueryOnSerializationQueue;
-(void)_performQuery:(id)arg1 withObserver:(id)arg2 observationIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id<EDResumable>)observerResumer;
-(NSMutableDictionary *)threadQueryHandlers;
-(void)_triggerMigrationWithThreadScopesMatcher:(/*^block*/id)arg1 ;
-(void)_triggerMigrationForThreadScopes:(id)arg1 ;
-(id)_partitionObjectIDs:(id)arg1 ;
-(void)_enumerateThreadsByThreadObjectIDsByScope:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_performMessageFlagChangeAllAction:(id)arg1 ;
-(id)_performMessageFlagChangeAction:(id)arg1 returnUndoAction:(BOOL)arg2 ;
-(void)_performMessageTransferAllAction:(id)arg1 ;
-(void)_performMessageTransferAllActionToSpecialMailbox:(id)arg1 ;
-(id)_performMessageTransferAction:(id)arg1 returnUndoAction:(BOOL)arg2 ;
-(id)_performMessageTransferActionToSpecialMailbox:(id)arg1 returnUndoAction:(BOOL)arg2 ;
-(void)_performMessageDeleteAction:(id)arg1 ;
-(void)_performMessageDeleteAllAction:(id)arg1 ;
-(void)_performMessageConversationFlagChangeAction:(id)arg1 ;
-(id)_performUndoAction:(id)arg1 ;
-(id)_persistedMessagesForMessageChangeAction:(id)arg1 ;
-(id)_changeFlagsForPersistedMessages:(id)arg1 flagChange:(id)arg2 returnUndoAction:(BOOL)arg3 ;
-(id)_undoActionsForMovedMessages:(id)arg1 ;
-(id)_persistedMessagesForObjectIDs:(id)arg1 ;
-(id)mailboxPredictionController;
-(void)threadQueryHandlerStateDidChange:(id)arg1 ;
-(void)setQueryHandlers:(NSMutableDictionary *)arg1 ;
-(void)setThreadQueryHandlers:(NSMutableDictionary *)arg1 ;
-(NSHashTable *)handlerTokens;
-(void)setHandlerTokens:(NSHashTable *)arg1 ;
-(void)setThreadPersistence:(EDThreadPersistence *)arg1 ;
@end

