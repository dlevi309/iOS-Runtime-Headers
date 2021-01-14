/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol FPSpotlightCollectorDelegate, OS_dispatch_queue;
@class NSMutableDictionary, NSDate, NSMapTable, FPSpotlightQueryDescriptor, NSObject, NSMutableSet, NSMutableArray;

@interface FPSpotlightCollector : NSObject {

	NSMutableDictionary* _itemsByBundleAndCSID;
	BOOL _suspended;
	unsigned long long _numberOfRecoveryAttempts;
	NSDate* _lastStartOfRecovery;
	NSMapTable* _queryToMountPoint;
	BOOL _gathering;
	id<FPSpotlightCollectorDelegate> _delegate;
	FPSpotlightQueryDescriptor* _queryDescriptor;
	unsigned long long _itemsOrigin;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSMutableSet* _observers;
	NSMutableArray* _queries;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;                  //@synthesize processingQueue=_processingQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * observers;                                      //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSMutableArray * queries;                                      //@synthesize queries=_queries - In the implementation block
@property (assign,getter=isGathering,nonatomic) BOOL gathering;                             //@synthesize gathering=_gathering - In the implementation block
@property (assign,nonatomic) unsigned long long itemsOrigin;                                //@synthesize itemsOrigin=_itemsOrigin - In the implementation block
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
@property (assign,nonatomic,__weak) id<FPSpotlightCollectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FPSpotlightQueryDescriptor * queryDescriptor;                //@synthesize queryDescriptor=_queryDescriptor - In the implementation block
+(id)_recursiveDescription;
+(id)processingQueue;
-(void)_clear;
-(void)addObserver:(id)arg1 ;
-(void)_addObserver:(id)arg1 ;
-(void)suspend;
-(BOOL)isSuspended;
-(void)_removeObserver:(id)arg1 ;
-(NSMutableSet *)observers;
-(id)init;
-(id)allItems;
-(id<FPSpotlightCollectorDelegate>)delegate;
-(id)initWithDescriptor:(id)arg1 ;
-(void)queryDidFinishGathering:(id)arg1 ;
-(void)setQueries:(NSMutableArray *)arg1 ;
-(BOOL)isGathering;
-(void)_start;
-(void)_regather;
-(id)allObservers;
-(unsigned long long)itemsOrigin;
-(id)_queryAddresses;
-(void)setItemsOrigin:(unsigned long long)arg1 ;
-(id)allItemsForObserver:(id)arg1 ;
-(id)_mountPointForExistingSearchQuery:(id)arg1 ;
-(void)_removeItemsForQuery:(id)arg1 mountPoint:(id)arg2 ;
-(id)_createQueryForMountPoint:(id)arg1 ;
-(BOOL)_shouldRemoveItemsFromObserver:(id)arg1 ;
-(unsigned long long)_itemsOriginForItems:(id)arg1 ;
-(id)filterItems:(id)arg1 forObserver:(id)arg2 excludedItemIDs:(id*)arg3 ;
-(BOOL)isQueryCancelled:(id)arg1 ;
-(BOOL)_areItemsTransientFromBundleIdentifier:(id)arg1 ;
-(BOOL)_shouldFilterUpdatesForObserver:(id)arg1 ;
-(void)setNeedsItemsOriginUpdate;
-(void)query:(id)arg1 didUpdateItems:(id)arg2 ;
-(void)query:(id)arg1 didRemoveItemsWithCSIdentifiers:(id)arg2 inBundle:(id)arg3 ;
-(void)query:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)_mountPointsForDescriptor;
-(id)_createQueriesForMountPoints:(id)arg1 ;
-(id)_allItemsForMountPoint:(id)arg1 ;
-(void)mountPointsDidChange:(id)arg1 ;
-(void)setGathering:(BOOL)arg1 ;
-(void)setDelegate:(id<FPSpotlightCollectorDelegate>)arg1 ;
-(id)description;
-(void)setObservers:(NSMutableSet *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_stop;
-(FPSpotlightQueryDescriptor *)queryDescriptor;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(NSMutableArray *)queries;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)resume;
@end

