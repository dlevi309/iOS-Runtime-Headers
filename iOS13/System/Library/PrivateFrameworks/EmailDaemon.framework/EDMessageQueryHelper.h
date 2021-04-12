/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/EDMessageChangeHookResponder.h>
#import <libobjc.A.dylib/EDRemoteSearchDelegate.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EDMessageQueryHelperMessageSource.h>
#import <libobjc.A.dylib/EFCancelable.h>

@protocol EDRemoteSearchProvider, EFScheduler, EDMessageQueryHelperDelegate;
@class EFQuery, NSMutableSet, EDMessagePersistence, EDPersistenceHookRegistry, EDMessageQueryEvaluator, EFCancelationToken, NSString;

@interface EDMessageQueryHelper : NSObject <EDMessageChangeHookResponder, EDRemoteSearchDelegate, EFLoggable, EDMessageQueryHelperMessageSource, EFCancelable> {

	atomic_flag _didStart;
	NSMutableSet* _noLongerMatchingMessages;
	os_unfair_lock_s _noLongerMatchingMessagesLock;
	BOOL _shouldReconcileJournal;
	BOOL _addMessagesSynchronously;
	EFQuery* _query;
	EDMessagePersistence* _messagePersistence;
	EDPersistenceHookRegistry* _hookRegistry;
	id<EDRemoteSearchProvider> _remoteSearchProvider;
	id<EFScheduler> _scheduler;
	id<EDMessageQueryHelperDelegate> _delegate;
	EDMessageQueryEvaluator* _queryEvaluator;
	EFCancelationToken* _cancelationToken;
	NSString* _pendingFlagChangesKey;
	NSString* _pendingConversationIDChangesKey;
	NSString* _pendingJournaledMessageAddsKey;

}

@property (nonatomic,readonly) EDMessagePersistence * messagePersistence;                     //@synthesize messagePersistence=_messagePersistence - In the implementation block
@property (nonatomic,readonly) EDPersistenceHookRegistry * hookRegistry;                      //@synthesize hookRegistry=_hookRegistry - In the implementation block
@property (nonatomic,readonly) id<EDRemoteSearchProvider> remoteSearchProvider;               //@synthesize remoteSearchProvider=_remoteSearchProvider - In the implementation block
@property (nonatomic,readonly) id<EFScheduler> scheduler;                                     //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,__weak,readonly) id<EDMessageQueryHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) EDMessageQueryEvaluator * queryEvaluator;                        //@synthesize queryEvaluator=_queryEvaluator - In the implementation block
@property (nonatomic,retain) EFCancelationToken * cancelationToken;                           //@synthesize cancelationToken=_cancelationToken - In the implementation block
@property (assign,nonatomic) BOOL shouldReconcileJournal;                                     //@synthesize shouldReconcileJournal=_shouldReconcileJournal - In the implementation block
@property (assign,nonatomic) BOOL addMessagesSynchronously;                                   //@synthesize addMessagesSynchronously=_addMessagesSynchronously - In the implementation block
@property (readonly) NSString * pendingFlagChangesKey;                                        //@synthesize pendingFlagChangesKey=_pendingFlagChangesKey - In the implementation block
@property (readonly) NSString * pendingConversationIDChangesKey;                              //@synthesize pendingConversationIDChangesKey=_pendingConversationIDChangesKey - In the implementation block
@property (readonly) NSString * pendingJournaledMessageAddsKey;                               //@synthesize pendingJournaledMessageAddsKey=_pendingJournaledMessageAddsKey - In the implementation block
@property (nonatomic,readonly) EFQuery * query;                                               //@synthesize query=_query - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(void)dealloc;
-(id<EDMessageQueryHelperDelegate>)delegate;
-(EFQuery *)query;
-(void)cancel;
-(void)start;
-(id<EFScheduler>)scheduler;
-(EFCancelationToken *)cancelationToken;
-(EDPersistenceHookRegistry *)hookRegistry;
-(void)persistenceDidUpdateProperties:(id)arg1 message:(id)arg2 generationWindow:(id)arg3 ;
-(void)persistenceWillChangeConversationID:(long long)arg1 messages:(id)arg2 ;
-(void)persistenceIsChangingConversationID:(long long)arg1 messages:(id)arg2 generationWindow:(id)arg3 ;
-(void)persistenceIsAddingMessages:(id)arg1 journaled:(BOOL)arg2 generationWindow:(id)arg3 ;
-(void)persistenceDidChangeMessageIDHeaderHash:(id)arg1 oldConversationID:(long long)arg2 message:(id)arg3 generationWindow:(id)arg4 ;
-(void)persistenceDidDeleteAllMessagesInMailboxesWithURLs:(id)arg1 generationWindow:(id)arg2 ;
-(EDMessagePersistence *)messagePersistence;
-(void)persistenceDidReconcileJournaledMessages:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceDidDeleteMessages:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceWillChangeFlags:(id)arg1 messages:(id)arg2 ;
-(void)persistenceDidChangeFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3 ;
-(void)persistenceDidChangeConversationNotificationLevel:(long long)arg1 conversationID:(long long)arg2 generationWindow:(id)arg3 ;
-(id<EDRemoteSearchProvider>)remoteSearchProvider;
-(void)setCancelationToken:(EFCancelationToken *)arg1 ;
-(id)initWithQuery:(id)arg1 messagePersistence:(id)arg2 hookRegistry:(id)arg3 remoteSearchProvider:(id)arg4 scheduler:(id)arg5 delegate:(id)arg6 shouldReconcileJournal:(BOOL)arg7 shouldAddMessagesSynchronously:(BOOL)arg8 ;
-(EDMessageQueryEvaluator *)queryEvaluator;
-(NSString *)pendingFlagChangesKey;
-(void)setQueryEvaluator:(EDMessageQueryEvaluator *)arg1 ;
-(id)messagesWithAdditionalPredicates:(id)arg1 limit:(long long)arg2 ;
-(void)_getInitialResults;
-(BOOL)shouldReconcileJournal;
-(NSString *)pendingJournaledMessageAddsKey;
-(id)_transformAndFilterMessages:(id)arg1 includeDeleted:(BOOL)arg2 ;
-(BOOL)addMessagesSynchronously;
-(void)_foundMessages:(id)arg1 ;
-(void)_persistenceDidDeleteMessages:(id)arg1 includeMessagesWithDeletedFlag:(BOOL)arg2 ;
-(NSString *)pendingConversationIDChangesKey;
-(void)remoteSearchDidFindMessages:(id)arg1 ;
-(void)remoteSearchDidFinish;
-(void)setShouldReconcileJournal:(BOOL)arg1 ;
-(void)setAddMessagesSynchronously:(BOOL)arg1 ;
@end

