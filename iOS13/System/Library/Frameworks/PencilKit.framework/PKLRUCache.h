/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class PKLRUCacheItem, NSMapTable, NSArray;

@interface PKLRUCache : NSObject {

	PKLRUCacheItem* _firstItem;
	PKLRUCacheItem* _lastItem;
	PKLRUCacheItem* _freeItems;
	NSMapTable* _itemTable;
	unsigned long long _currentCost;
	unsigned long long _totalCostLimit;
	long long _freeItemCount;

}

@property (nonatomic,copy,readonly) NSArray * allObjects; 
@property (assign,nonatomic) unsigned long long totalCostLimit;              //@synthesize totalCostLimit=_totalCostLimit - In the implementation block
@property (assign,nonatomic) long long freeItemCount;                        //@synthesize freeItemCount=_freeItemCount - In the implementation block
-(id)init;
-(void)dealloc;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(NSArray *)allObjects;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 ;
-(unsigned long long)totalCostLimit;
-(void)setTotalCostLimit:(unsigned long long)arg1 ;
-(void)_addItem:(id)arg1 ;
-(void)_removeItem:(id)arg1 ;
-(long long)freeItemCount;
-(void)setFreeItemCount:(long long)arg1 ;
@end

