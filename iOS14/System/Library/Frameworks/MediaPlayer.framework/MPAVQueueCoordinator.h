/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPAVQueueCoordinating.h>

@protocol MPAVQueueCoordinatingDataSource;
@class MPAVItem, NSArray, NSOperationQueue, NSHashTable, NSMutableSet, MPQueuePlayer, NSString;

@interface MPAVQueueCoordinator : NSObject <MPAVQueueCoordinating> {

	NSOperationQueue* _assetQueue;
	unsigned long long _backgroundTaskIdentifier;
	unsigned long long _backgroundTasks;
	BOOL _holdingPlaybackTransactionForFirstItem;
	BOOL _isPendingPlayerItemSync;
	BOOL _isSyncingPlayerItems;
	NSHashTable* _itemsPendingAssetLoading;
	MPAVItem* _lastItemAnchor;
	unsigned long long _lastPreferredQueueDepth;
	BOOL _needsCurrentItemUpdateAfterPlayerItemSync;
	BOOL _preventLoadingItems;
	NSMutableSet* _reusableItems;
	BOOL _shouldExpectEmptyQueue;
	BOOL _shouldDeferItemLoading;
	MPAVItem* _currentItem;
	NSArray* _items;
	MPQueuePlayer* _player;
	id<MPAVQueueCoordinatingDataSource> _dataSource;
	/*^block*/id _equilibriumAchievedHandler;

}

@property (nonatomic,readonly) MPQueuePlayer * player;                                             //@synthesize player=_player - In the implementation block
@property (nonatomic,__weak,readonly) id<MPAVQueueCoordinatingDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) id equilibriumAchievedHandler;                                          //@synthesize equilibriumAchievedHandler=_equilibriumAchievedHandler - In the implementation block
@property (nonatomic,readonly) MPAVItem * currentItem;                                             //@synthesize currentItem=_currentItem - In the implementation block
@property (assign,nonatomic) BOOL shouldExpectEmptyQueue;                                          //@synthesize shouldExpectEmptyQueue=_shouldExpectEmptyQueue - In the implementation block
@property (assign,nonatomic) BOOL shouldDeferItemLoading;                                          //@synthesize shouldDeferItemLoading=_shouldDeferItemLoading - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                                    //@synthesize items=_items - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPQueuePlayer *)player;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)shouldExpectEmptyQueue;
-(void)_dequeueFailedItem:(id)arg1 ;
-(void)_updateCurrentItem;
-(id)initWithPlayer:(id)arg1 dataSource:(id)arg2 ;
-(void)_beginBackgroundTaskAssertion;
-(void)setShouldExpectEmptyQueue:(BOOL)arg1 ;
-(void)_updateQueueDepthIfNeeded;
-(id<MPAVQueueCoordinatingDataSource>)dataSource;
-(void)_sendItemsDidChange;
-(NSArray *)items;
-(void)_loadAssetForItem:(id)arg1 ;
-(void)setShouldDeferItemLoading:(BOOL)arg1 ;
-(BOOL)shouldDeferItemLoading;
-(MPAVItem *)currentItem;
-(void)_endBackgroundTaskAssertion;
-(id)_playerItems;
-(void)_syncPlayerItems;
-(void)_syncItemsWithPreviousItems:(id)arg1 ;
-(void)reset;
-(void)reloadItemsKeepingCurrentItem:(BOOL)arg1 ;
-(unsigned long long)_preferredQueueDepthWithFirstItem:(id)arg1 ;
-(void)_currentItemHasFinishedDownloadingDidChangeNotification:(id)arg1 ;
-(id)equilibriumAchievedHandler;
-(void)setEquilibriumAchievedHandler:(id)arg1 ;
-(void)_reloadItemsKeepingCurrentItem:(BOOL)arg1 ;
-(BOOL)_hasAchievedEquilibrium;
-(void)_removeItemFromPlayer:(id)arg1 ;
-(void)dealloc;
@end

