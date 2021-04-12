/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <Email/EMRepositoryObject.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EFSignpostable.h>

@protocol EFCancelable, EMCollectionChangeObserver, EFScheduler;
@class NSMutableOrderedSet, NSMutableSet, NSOrderedSet, EFPromise, EFQuery, EFFuture, NSString;

@interface EMCollection : EMRepositoryObject <EFLoggable, EFSignpostable> {

	NSMutableOrderedSet* _itemIDs;
	NSMutableSet* _itemIDsAnticipatingDelete;
	NSOrderedSet* _recoveringItemIDs;
	EFPromise* _allItemIDsPromise;
	os_unfair_lock_s _itemIDsLock;
	BOOL _foundAllItemIDs;
	EFQuery* _query;
	id<EFCancelable> _cancelationToken;
	id<EMCollectionChangeObserver> _changeObserver;
	id<EFScheduler> _observerScheduler;

}

@property (nonatomic,retain) id<EFCancelable> cancelationToken;                                 //@synthesize cancelationToken=_cancelationToken - In the implementation block
@property (assign,nonatomic,__weak) id<EMCollectionChangeObserver> changeObserver;              //@synthesize changeObserver=_changeObserver - In the implementation block
@property (nonatomic,readonly) id<EFScheduler> queryScheduler; 
@property (nonatomic,readonly) id<EFScheduler> observerScheduler;                               //@synthesize observerScheduler=_observerScheduler - In the implementation block
@property (nonatomic,readonly) EFQuery * query;                                                 //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) EFFuture * allItemIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long signpostID; 
+(BOOL)supportsSecureCoding;
+(id)log;
+(id)signpostLog;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(EFQuery *)query;
-(unsigned long long)signpostID;
-(void)setChangeObserver:(id<EMCollectionChangeObserver>)arg1 ;
-(id<EMCollectionChangeObserver>)changeObserver;
-(id<EFCancelable>)cancelationToken;
-(id<EFScheduler>)observerScheduler;
-(void)stopObserving:(id)arg1 ;
-(id)initWithQuery:(id)arg1 repository:(id)arg2 ;
-(void)beginObserving:(id)arg1 ;
-(id)initWithObjectID:(id)arg1 query:(id)arg2 ;
-(void)_commonInitWithQuery:(id)arg1 ;
-(id)_firstExistingItemIDForItemID:(id)arg1 inReverse:(BOOL)arg2 ;
-(id)_iterateItemIDsStartingAtItemID:(id)arg1 inReverse:(BOOL)arg2 includeStartingItem:(BOOL)arg3 withBlock:(/*^block*/id)arg4 ;
-(id)firstExistingItemIDAfterItemID:(id)arg1 ;
-(id)firstExistingItemIDBeforeItemID:(id)arg1 ;
-(void)_performQueryIfNeeded;
-(id<EFScheduler>)queryScheduler;
-(void)_cancelQuery;
-(void)_performQuery;
-(void)setCancelationToken:(id<EFCancelable>)arg1 ;
-(BOOL)isRecovering;
-(void)insertItemIDs:(id)arg1 before:(id)arg2 ;
-(void)notifyChangeObserverAboutAddedItemIDs:(id)arg1 before:(id)arg2 extraInfo:(id)arg3 ;
-(void)_filterAndTransformObjectIDs:(id)arg1 before:(BOOL)arg2 existingObjectID:(id)arg3 batchBlock:(/*^block*/id)arg4 ;
-(void)insertItemIDs:(id)arg1 after:(id)arg2 ;
-(void)notifyChangeObserverAboutAddedItemIDs:(id)arg1 after:(id)arg2 extraInfo:(id)arg3 ;
-(id)_itemIDsForObjectIDs:(id)arg1 ;
-(id)itemIDForObjectID:(id)arg1 ;
-(void)notifyChangeObserverAboutChangesByItemIDs:(id)arg1 ;
-(id)removeItemIDs:(id)arg1 ;
-(void)finishRecovery;
-(void)_cancelQueryIfNeeded;
-(BOOL)objectIDBelongsToCollection:(id)arg1 ;
-(BOOL)containsItemID:(id)arg1 includeRecovery:(BOOL)arg2 ;
-(id)objectIDForItemID:(id)arg1 ;
-(id)iterateItemIDsStartingAtItemID:(id)arg1 inReverse:(BOOL)arg2 withBlock:(/*^block*/id)arg3 ;
-(EFFuture *)allItemIDs;
-(void)queryDidStartRecovery;
-(void)queryMatchedAddedObjectIDs:(id)arg1 before:(id)arg2 extraInfo:(id)arg3 ;
-(void)queryMatchedAddedObjectIDs:(id)arg1 after:(id)arg2 extraInfo:(id)arg3 ;
-(void)queryMatchedMovedObjectIDs:(id)arg1 before:(id)arg2 ;
-(void)queryMatchedMovedObjectIDs:(id)arg1 after:(id)arg2 ;
-(void)queryMatchedChangesByObjectIDs:(id)arg1 ;
-(void)queryAnticipatesDeletedObjectIDs:(id)arg1 ;
-(void)queryMatchedDeletedObjectIDs:(id)arg1 ;
-(void)queryDidFinishInitialLoad;
-(void)queryDidFinishRemoteSearch;
-(BOOL)observerContainsObjectID:(id)arg1 ;
-(void)queryReplacedObjectID:(id)arg1 withNewObjectID:(id)arg2 ;
@end

