/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)totalCostLimit;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 ;
-(void)setTotalCostLimit:(unsigned long long)arg1 ;
-(id)init;
-(void)_removeItem:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(NSArray *)allObjects;
-(void)_addItem:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)dealloc;
-(long long)freeItemCount;
-(void)setFreeItemCount:(long long)arg1 ;
@end

