/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
*/


@protocol OS_dispatch_queue;
@class NSString, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSObject;

@interface IMMemoryCache : NSObject {

	BOOL _evictsItemsWithDiscardedContent;
	NSString* _name;
	id _delegate;
	unsigned long long _totalCostLimit;
	unsigned long long _countLimit;
	NSMutableArray* _itemsArray;
	NSMutableDictionary* _items;
	unsigned long long _totalCost;
	unsigned long long _count;
	NSOperationQueue* _queue;
	double _lastCheckTime;
	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (nonatomic,retain) NSMutableArray * itemsArray;                           //@synthesize itemsArray=_itemsArray - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * items;                           //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) unsigned long long totalCost;                          //@synthesize totalCost=_totalCost - In the implementation block
@property (assign,nonatomic) unsigned long long count;                              //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;                              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) double lastCheckTime;                                  //@synthesize lastCheckTime=_lastCheckTime - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) id delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL evictsItemsWithDiscardedContent;                  //@synthesize evictsItemsWithDiscardedContent=_evictsItemsWithDiscardedContent - In the implementation block
@property (assign,nonatomic) unsigned long long totalCostLimit;                     //@synthesize totalCostLimit=_totalCostLimit - In the implementation block
@property (assign,nonatomic) unsigned long long countLimit;                         //@synthesize countLimit=_countLimit - In the implementation block
-(unsigned long long)countLimit;
-(void)setCount:(unsigned long long)arg1 ;
-(unsigned long long)totalCostLimit;
-(void)setCountLimit:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 ;
-(void)setTotalCostLimit:(unsigned long long)arg1 ;
-(void)setItems:(NSMutableDictionary *)arg1 ;
-(id)init;
-(id)delegate;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(NSMutableDictionary *)items;
-(NSString *)name;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(void)_removeObjectForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(NSOperationQueue *)queue;
-(void)setName:(NSString *)arg1 ;
-(id)allKeys;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSMutableArray *)itemsArray;
-(void)_addItem:(id)arg1 forKey:(id)arg2 ;
-(void)setTotalCost:(unsigned long long)arg1 ;
-(void)_checkLimitsAndEvictObjects;
-(BOOL)_shouldRemoveIndex:(unsigned long long)arg1 ;
-(unsigned long long)totalCost;
-(void)_checkLimits;
-(void)removeObjectsForKeyWithPrefix:(id)arg1 ;
-(void)checkLimitsAndEvictObjects;
-(unsigned long long)costForObjectWithKey:(id)arg1 ;
-(long long)numberOfCachedItems;
-(BOOL)evictsItemsWithDiscardedContent;
-(void)setEvictsItemsWithDiscardedContent:(BOOL)arg1 ;
-(void)setItemsArray:(NSMutableArray *)arg1 ;
-(double)lastCheckTime;
-(void)setLastCheckTime:(double)arg1 ;
@end

