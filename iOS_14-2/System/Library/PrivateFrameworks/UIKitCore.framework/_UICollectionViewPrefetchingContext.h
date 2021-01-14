/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol OS_dispatch_queue;
@class NSArray, NSMutableOrderedSet, NSMutableDictionary, NSObject;

@interface _UICollectionViewPrefetchingContext : NSObject {

	NSArray* _remainingIndexPaths;
	NSMutableOrderedSet* _items;
	NSMutableDictionary* _itemsDict;
	NSObject*<OS_dispatch_queue> _dataAccessQueue;

}

@property (nonatomic,retain) NSArray * remainingIndexPaths;                             //@synthesize remainingIndexPaths=_remainingIndexPaths - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * items;                               //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * itemsDict;                           //@synthesize itemsDict=_itemsDict - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dataAccessQueue;              //@synthesize dataAccessQueue=_dataAccessQueue - In the implementation block
+(id)prefetchingContextWithItems:(id)arg1 ;
-(void)setDataAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setItems:(NSMutableOrderedSet *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dataAccessQueue;
-(NSArray *)remainingIndexPaths;
-(id)_items;
-(void)setRemainingIndexPaths:(NSArray *)arg1 ;
-(id)peekNextItem;
-(void)setItemsDict:(NSMutableDictionary *)arg1 ;
-(void)_invalidateRemainingIndexPaths;
-(NSMutableOrderedSet *)items;
-(id)initWithPrefetchItems:(id)arg1 ;
-(BOOL)hasRemainingItems;
-(void)prefetchCompleteForItemAtIndexPath:(id)arg1 ;
-(id)popNextItem;
-(NSMutableDictionary *)itemsDict;
@end

