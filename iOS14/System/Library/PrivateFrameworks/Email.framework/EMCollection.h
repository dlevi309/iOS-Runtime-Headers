/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <Email/EMRepositoryObject.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EFSignpostable.h>

@protocol EFCancelable, EFScheduler;
@class NSMutableOrderedSet, NSMutableSet, NSOrderedSet, EFPromise, EFQuery, NSHashTable, EFFuture, NSString;

@interface EMCollection : EMRepositoryObject <EFLoggable, EFSignpostable> {

	NSMutableOrderedSet* _itemIDs;
	NSMutableSet* _itemIDsAnticipatingDelete;
	NSOrderedSet* _recoveringItemIDs;
	EFPromise* _allItemIDsPromise;
	os_unfair_lock_s _itemIDsLock;
	BOOL _foundAllItemIDs;
	BOOL _foundFirstBatch;
	os_unfair_lock_s _changeObserversLock;
	EFQuery* _query;
	id<EFCancelable> _cancelationToken;
	NSHashTable* _changeObservers;
	id<EFScheduler> _observerScheduler;

}

@property (nonatomic,retain) id<EFCancelable> cancelationToken;                //@synthesize cancelationToken=_cancelationToken - In the implementation block
@property (nonatomic,retain) NSHashTable * changeObservers;                    //@synthesize changeObservers=_changeObservers - In the implementation block
@property (nonatomic,readonly) id<EFScheduler> queryScheduler; 
@property (nonatomic,readonly) id<EFScheduler> observerScheduler;              //@synthesize observerScheduler=_observerScheduler - In the implementation block
@property (nonatomic,readonly) EFQuery * query;                                //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) EFFuture * allItemIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long signpostID; 
+(BOOL)supportsSecureCoding;
+(id)log;
+(id)signpostLog;
-(EFQuery *)query;
-(void)stopObserving:(id)arg1 ;
-(unsigned long long)signpostID;
-(id<EFScheduler>)observerScheduler;
-(void)enumerateObserversWithBlock:(/*^block*/id)arg1 ;
-(EFFuture *)allItemIDs;
-(void)_commonInitWithQuery:(id)arg1 ;
-(id)_firstExistingItemIDForItemID:(id)arg1 inReverse:(BOOL)arg2 ;
-(id)_iterateItemIDsStartingAtItemID:(id)arg1 inReverse:(BOOL)arg2 includeStartingItem:(BOOL)arg3 withBlock:(/*^block*/id)arg4 ;
-(id)firstExistingItemIDAfterItemID:(id)arg1 ;
-(id)firstExistingItemIDBeforeItemID:(id)arg1 ;
-(void)_performQueryIfNeeded;
-(id<EFScheduler>)queryScheduler;
-(void)_cancelQuery;
-(void)_performQuery;
-(BOOL)isRecovering;
-(id)removeItemIDs:(id)arg1 ;
-(id)initWithObjectID:(id)arg1 query:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)notifyChangeObserverAboutStockedItemIDs:(id)arg1 ;
-(void)insertItemIDs:(id)arg1 before:(id)arg2 ;
-(void)notifyChangeObserversAboutAddedItemIDs:(id)arg1 before:(id)arg2 extraInfo:(id)arg3 ;
-(void)_filterAndTransformObjectIDs:(id)arg1 before:(BOOL)arg2 existingObjectID:(id)arg3 batchBlock:(/*^block*/id)arg4 ;
-(void)insertItemIDs:(id)arg1 after:(id)arg2 ;
-(void)notifyChangeObserversAboutAddedItemIDs:(id)arg1 after:(id)arg2 extraInfo:(id)arg3 ;
-(id)_itemIDsForObjectIDs:(id)arg1 ;
-(id)itemIDForObjectID:(id)arg1 ;
-(void)notifyChangeObserversAboutChangesByItemIDs:(id)arg1 ;
-(void)finishRecovery;
-(void)_cancelQueryIfNeeded;
-(BOOL)objectIDBelongsToCollection:(id)arg1 ;
-(BOOL)containsItemID:(id)arg1 includeRecovery:(BOOL)arg2 ;
-(void)notifyChangeObserver:(id)arg1 stockedItemIDs:(id)arg2 ;
-(id)objectIDForItemID:(id)arg1 ;
-(id)iterateItemIDsStartingAtItemID:(id)arg1 inReverse:(BOOL)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)queryDidStartRecovery;
-(void)queryMatchedAddedObjectIDs:(id)arg1 before:(id)arg2 extraInfo:(id)arg3 ;
-(void)queryMatchedAddedObjectIDs:(id)arg1 after:(id)arg2 extraInfo:(id)arg3 ;
-(void)queryMatchedMovedObjectIDs:(id)arg1 before:(id)arg2 ;
-(void)queryMatchedMovedObjectIDs:(id)arg1 after:(id)arg2 ;
-(id)initWithQuery:(id)arg1 repository:(id)arg2 ;
-(void)beginObserving:(id)arg1 ;
-(void)queryMatchedChangesByObjectIDs:(id)arg1 ;
-(void)queryAnticipatesDeletedObjectIDs:(id)arg1 ;
-(void)queryMatchedDeletedObjectIDs:(id)arg1 ;
-(void)queryDidFinishInitialLoad;
-(void)queryDidFinishRemoteSearch;
-(BOOL)observerContainsObjectID:(id)arg1 ;
-(void)queryReplacedObjectID:(id)arg1 withNewObjectID:(id)arg2 ;
-(void)setCancelationToken:(id<EFCancelable>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setChangeObservers:(NSHashTable *)arg1 ;
-(id<EFCancelable>)cancelationToken;
-(NSHashTable *)changeObservers;
-(void)dealloc;
@end

