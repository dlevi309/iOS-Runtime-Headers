/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <Email/EMRepository.h>
#import <libobjc.A.dylib/EFFutureDelegate.h>
#import <libobjc.A.dylib/EFLoggable.h>

@protocol EMVIPManager;
@class NSMapTable, NSHashTable, EMRemoteConnection, EMBlockedSenderManager, NSCache, EMMailboxRepository, NSArray, NSString;

@interface EMMessageRepository : EMRepository <EFFutureDelegate, EFLoggable> {

	NSMapTable* _observedMessageListItemCache;
	NSMapTable* _unobservedMessageListItemCache;
	NSHashTable* _actualObservers;
	NSHashTable* _recoverableObservers;
	os_unfair_lock_s _messageListItemCacheLock;
	os_unfair_lock_s _observersLock;
	EMRemoteConnection* _connection;
	id<EMVIPManager> _vipManager;
	EMBlockedSenderManager* _blockedSenderManager;
	NSCache* _queryCountCache;
	EMMailboxRepository* _mailboxRepository;

}

@property (retain) EMRemoteConnection * connection;                                        //@synthesize connection=_connection - In the implementation block
@property (copy,readonly) NSArray * currentObservers; 
@property (nonatomic,readonly) id<EMVIPManager> vipManager;                                //@synthesize vipManager=_vipManager - In the implementation block
@property (nonatomic,readonly) EMBlockedSenderManager * blockedSenderManager;              //@synthesize blockedSenderManager=_blockedSenderManager - In the implementation block
@property (nonatomic,retain) NSCache * queryCountCache;                                    //@synthesize queryCountCache=_queryCountCache - In the implementation block
@property (nonatomic,readonly) EMMailboxRepository * mailboxRepository;                    //@synthesize mailboxRepository=_mailboxRepository - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)remoteInterface;
+(id)signpostLog;
-(EMRemoteConnection *)connection;
-(void)setConnection:(EMRemoteConnection *)arg1 ;
-(unsigned long long)signpostID;
-(id)initInternal;
-(id<EMVIPManager>)vipManager;
-(id)cachedMetadataJSONForKey:(id)arg1 messageID:(id)arg2 ;
-(void)setCachedMetadataJSON:(id)arg1 forKey:(id)arg2 messageID:(id)arg3 ;
-(EMBlockedSenderManager *)blockedSenderManager;
-(id)performMessageChangeActionReturningUndoAction:(id)arg1 ;
-(void)performMessageChangeAction:(id)arg1 ;
-(void)didStartBlockingMainThreadForFuture:(id)arg1 ;
-(void)didFinishBlockingMainThreadForFuture:(id)arg1 ;
-(id)performQuery:(id)arg1 withObserver:(id)arg2 ;
-(void)performQuery:(id)arg1 limit:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performCountQuery:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)requestRepresentationForMessageWithID:(id)arg1 requestID:(unsigned long long)arg2 options:(id)arg3 delegate:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)loadOlderMessagesForMailboxes:(id)arg1 ;
-(id)initWithRemoteConnection:(id)arg1 mailboxRepository:(id)arg2 vipManager:(id)arg3 blockedSenderManager:(id)arg4 ;
-(EMMailboxRepository *)mailboxRepository;
-(id)requestRepresentationForMessageWithID:(id)arg1 options:(id)arg2 delegate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)messageListItemsForObjectIDs:(id)arg1 observationIdentifier:(id)arg2 ;
-(void)_blockedSendersDidChange:(id)arg1 ;
-(void)_vipsDidChange:(id)arg1 ;
-(void)_notifyRecoverableObservers;
-(id)_existingObservedItemForObjectID:(id)arg1 ;
-(NSArray *)currentObservers;
-(id)_cachedItemForItem:(id)arg1 observers:(id)arg2 validationBlock:(/*^block*/id)arg3 ;
-(BOOL)_anyObserver:(id)arg1 containsObjectID:(id)arg2 ;
-(NSCache *)queryCountCache;
-(void)_updateObserversForAction:(id)arg1 ;
-(id)_undoActionForConversationAction:(id)arg1 ;
-(void)_updateObserversForFlagChangeAction:(id)arg1 ;
-(void)_updateObserversForDeletedObjectIDs:(id)arg1 ;
-(id)_predictMailboxForMovingMessagesWithIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_broadcastMessageListItemChangesToObservers:(/*^block*/id)arg1 ;
-(void)_applyChangesToCachedObjects:(id)arg1 ;
-(id)messageListItemsForObjectIDs:(id)arg1 ;
-(id)messageForObjectID:(id)arg1 ;
-(id)startCountingQuery:(id)arg1 includingServerCountsForMailboxScope:(id)arg2 withObserver:(id)arg3 ;
-(void)setQueryCount:(id)arg1 forQueryIdentifier:(id)arg2 ;
-(void)resetPrecomputedThreadScopesForMailboxType:(long long)arg1 ;
-(void)resetPrecomputedThreadScopesForMailboxObjectID:(id)arg1 ;
-(void)resetAllPrecomputedThreadScopes;
-(id)predictMailboxForMovingMessages:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_detectChangesForMatchedAddedObjectIDs:(id)arg1 observerationIdentifier:(id)arg2 matchedChangesHandler:(/*^block*/id)arg3 ;
-(void)setQueryCountCache:(NSCache *)arg1 ;
@end

