/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
*/

#import <libobjc.A.dylib/FPItemCollectionIndexPathBasedDelegate.h>

@protocol FPItemCollectionIndexPathBasedDelegate;
@class FPItemCollection, NSMutableArray, NSString;

@interface DOCItemCollectionObserver : NSObject <FPItemCollectionIndexPathBasedDelegate> {

	FPItemCollection* _itemCollection;
	NSMutableArray* _subscribers;
	NSMutableArray* _delegates;
	id<FPItemCollectionIndexPathBasedDelegate> _soleUpdatableDelegate;

}

@property (retain) FPItemCollection * itemCollection;                                             //@synthesize itemCollection=_itemCollection - In the implementation block
@property (retain) NSMutableArray * subscribers;                                                  //@synthesize subscribers=_subscribers - In the implementation block
@property (retain) NSMutableArray * delegates;                                                    //@synthesize delegates=_delegates - In the implementation block
@property (retain) id<FPItemCollectionIndexPathBasedDelegate> soleUpdatableDelegate;              //@synthesize soleUpdatableDelegate=_soleUpdatableDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeSubscriber:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)setItemCollection:(FPItemCollection *)arg1 ;
-(FPItemCollection *)itemCollection;
-(NSMutableArray *)subscribers;
-(NSMutableArray *)delegates;
-(void)setDelegates:(NSMutableArray *)arg1 ;
-(id)initWithItemCollection:(id)arg1 ;
-(id)addSubscriber:(/*^block*/id)arg1 ;
-(void)dataForCollectionShouldBeReloaded:(id)arg1 ;
-(void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2 ;
-(void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3 ;
-(void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2 ;
-(void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3 ;
-(void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(/*^block*/id)arg2 ;
-(void)setSubscribers:(NSMutableArray *)arg1 ;
-(void)notifySubscribers;
-(void)_purgeOrphanedContainers;
-(void)_enumerateItemCollectionIndexPathBasedDelegatesWithBlock:(/*^block*/id)arg1 ;
-(void)setSoleUpdatableDelegate:(id<FPItemCollectionIndexPathBasedDelegate>)arg1 ;
-(id<FPItemCollectionIndexPathBasedDelegate>)soleUpdatableDelegate;
-(id)__delegates;
@end

