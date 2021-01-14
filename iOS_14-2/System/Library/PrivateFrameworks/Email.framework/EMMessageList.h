/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <Email/EMCollection.h>
#import <libobjc.A.dylib/EFContentProtectionObserver.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EMCollectionChangeObserver.h>
#import <libobjc.A.dylib/EMCollectionItemIDStateCapturerDelegate.h>
#import <libobjc.A.dylib/EMMessageListQueryResultsObserver.h>

@protocol EFScheduler, OS_dispatch_queue;
@class NSMutableDictionary, NSMapTable, EMMailboxScope, EMThreadScope, EFLazyCache, NSObject, NSSet, EMCollectionItemIDStateCapturer, EMMessageRepository, NSString, EMObjectID;

@interface EMMessageList : EMCollection <EFContentProtectionObserver, EFLoggable, EMCollectionChangeObserver, EMCollectionItemIDStateCapturerDelegate, EMMessageListQueryResultsObserver> {

	NSMutableDictionary* _expandedThreads;
	NSMapTable* _messageListItemsForRetry;
	os_unfair_lock_s _expandedThreadsLock;
	EMMailboxScope* _mailboxScope;
	EMThreadScope* _threadScope;
	EFLazyCache* _cache;
	id<EFScheduler> _observerScheduler;
	NSObject*<OS_dispatch_queue> _contentProtectionQueue;
	EMMessageList* _unfilteredMessageList;
	NSSet* _recentlyCollapsedItemIDs;
	EMCollectionItemIDStateCapturer* _stateCapturer;

}

@property (nonatomic,readonly) EMMessageRepository * repository; 
@property (nonatomic,readonly) EMMailboxScope * mailboxScope;                                    //@synthesize mailboxScope=_mailboxScope - In the implementation block
@property (nonatomic,readonly) EMThreadScope * threadScope;                                      //@synthesize threadScope=_threadScope - In the implementation block
@property (nonatomic,readonly) EFLazyCache * cache;                                              //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) id<EFScheduler> observerScheduler;                                //@synthesize observerScheduler=_observerScheduler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> contentProtectionQueue;              //@synthesize contentProtectionQueue=_contentProtectionQueue - In the implementation block
@property (nonatomic,retain) EMMessageList * unfilteredMessageList;                              //@synthesize unfilteredMessageList=_unfilteredMessageList - In the implementation block
@property (nonatomic,retain) NSSet * recentlyCollapsedItemIDs;                                   //@synthesize recentlyCollapsedItemIDs=_recentlyCollapsedItemIDs - In the implementation block
@property (nonatomic,readonly) EMCollectionItemIDStateCapturer * stateCapturer;                  //@synthesize stateCapturer=_stateCapturer - In the implementation block
@property (nonatomic,readonly) BOOL isThreaded; 
@property (copy,readonly) NSSet * expandedThreadItemIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) EMObjectID * objectID; 
+(id)threadedMessageListForMailboxes:(id)arg1 withRepository:(id)arg2 shouldTrackOldestItems:(BOOL)arg3 ;
+(id)simpleMessageListForMailboxes:(id)arg1 withRepository:(id)arg2 shouldTrackOldestItems:(BOOL)arg3 ;
+(id)log;
-(EMMailboxScope *)mailboxScope;
-(void)stopObserving:(id)arg1 ;
-(id)itemIDOfMessageListItemWithDisplayMessage:(id)arg1 ;
-(void)queryMatchedOldestItemsUpdatedForMailboxesObjectIDs:(id)arg1 ;
-(id)initWithObjectID:(id)arg1 query:(id)arg2 repository:(id)arg3 ;
-(id)filteredMessageListWithPredicate:(id)arg1 ;
-(EMMessageList *)unfilteredMessageList;
-(EFLazyCache *)cache;
-(void)expandThreadsFromThreadItemIDs:(id)arg1 ;
-(BOOL)anyExpandedThreadContainsItemID:(id)arg1 ;
-(BOOL)recentlyCollapsedThreadContainsItemID:(id)arg1 ;
-(void)clearRecentlyCollapsedThread;
-(void)invalidateCacheForItemIDs:(id)arg1 ;
-(void)collection:(id)arg1 changedItemIDs:(id)arg2 itemIDsWithCountChanges:(id)arg3 ;
-(id)itemIDOfFirstMessageListItemMatchingPredicate:(id)arg1 ;
-(EMCollectionItemIDStateCapturer *)stateCapturer;
-(id<EFScheduler>)observerScheduler;
-(id)ef_publicDescription;
-(id)removeItemIDs:(id)arg1 ;
-(NSString *)debugDescription;
-(void)notifyChangeObserversAboutAddedItemIDs:(id)arg1 before:(id)arg2 extraInfo:(id)arg3 ;
-(void)notifyChangeObserversAboutAddedItemIDs:(id)arg1 after:(id)arg2 extraInfo:(id)arg3 ;
-(id)itemIDForObjectID:(id)arg1 ;
-(void)notifyChangeObserversAboutChangesByItemIDs:(id)arg1 ;
-(void)finishRecovery;
-(BOOL)objectIDBelongsToCollection:(id)arg1 ;
-(void)notifyChangeObserver:(id)arg1 stockedItemIDs:(id)arg2 ;
-(id)objectIDForItemID:(id)arg1 ;
-(void)queryMatchedMovedObjectIDs:(id)arg1 before:(id)arg2 ;
-(void)queryMatchedMovedObjectIDs:(id)arg1 after:(id)arg2 ;
-(id)initWithQuery:(id)arg1 repository:(id)arg2 ;
-(void)queryMatchedChangesByObjectIDs:(id)arg1 ;
-(id)labelForStateCapture;
-(id)itemIDsForStateCaptureWithErrorString:(id*)arg1 ;
-(id)messageListItemForItemID:(id)arg1 ;
-(void)collection:(id)arg1 addedItemIDs:(id)arg2 before:(id)arg3 ;
-(void)collection:(id)arg1 addedItemIDs:(id)arg2 after:(id)arg3 ;
-(void)collection:(id)arg1 movedItemIDs:(id)arg2 before:(id)arg3 ;
-(void)collection:(id)arg1 movedItemIDs:(id)arg2 after:(id)arg3 ;
-(void)collection:(id)arg1 changedItemIDs:(id)arg2 ;
-(void)collection:(id)arg1 deletedItemIDs:(id)arg2 ;
-(void)collection:(id)arg1 replacedExistingItemID:(id)arg2 withNewItemID:(id)arg3 ;
-(void)collectionDidFinishInitialLoad:(id)arg1 ;
-(EMThreadScope *)threadScope;
-(void)setRepository:(EMMessageRepository *)arg1 ;
-(id)initWithMailboxes:(id)arg1 repository:(id)arg2 targetClass:(Class)arg3 shouldTrackOldestItems:(BOOL)arg4 labelPrefix:(id)arg5 ;
-(void)_commonInitWithRepository:(id)arg1 ;
-(BOOL)isThreaded;
-(void)expandThread:(id)arg1 ;
-(id)_unreadItemIDsFromExtraInfo:(id)arg1 ;
-(void)setUnfilteredMessageList:(EMMessageList *)arg1 ;
-(id)messageListItemsForItemIDs:(id)arg1 ;
-(void)setRecentlyCollapsedItemIDs:(NSSet *)arg1 ;
-(NSSet *)recentlyCollapsedItemIDs;
-(id)messageListItemForItemID:(id)arg1 ifAvailable:(BOOL)arg2 ;
-(id)messageListItemsForItemIDs:(id)arg1 ifAvailable:(BOOL)arg2 ;
-(id)_availableMessageListItemsForItemIDs:(id)arg1 ;
-(void)_attemptToFinishRetryingPromisesByItemID:(id)arg1 ;
-(BOOL)_threadIsExpanded:(id)arg1 ;
-(id)_nextThreadItemIDAfterThreadItemID:(id)arg1 ;
-(id)_expandedObjectIDsForObjectIDs:(id)arg1 ;
-(void)collapseThread:(id)arg1 ;
-(BOOL)_threadIsExpandedForItemID:(id)arg1 ;
-(NSSet *)expandedThreadItemIDs;
-(EMMessageRepository *)repository;
-(NSObject*<OS_dispatch_queue>)contentProtectionQueue;
-(void)dealloc;
-(void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2 ;
@end

