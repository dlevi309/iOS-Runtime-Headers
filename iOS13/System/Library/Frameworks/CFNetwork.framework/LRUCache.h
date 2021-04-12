/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@class NSMutableDictionary, NSMutableArray;

@interface LRUCache : NSObject {

	unsigned long long _maxCapacity;
	NSMutableDictionary* _items;
	NSMutableArray* _lru;

}

@property (assign,nonatomic) unsigned long long maxCapacity;              //@synthesize maxCapacity=_maxCapacity - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * items;                 //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSMutableArray * lru;                        //@synthesize lru=_lru - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)removeAllItems;
-(NSMutableDictionary *)items;
-(void)setItems:(NSMutableDictionary *)arg1 ;
-(id)itemForKey:(id)arg1 ;
-(void)removeItemForKey:(id)arg1 ;
-(void)addItem:(id)arg1 forKey:(id)arg2 ;
-(void)_insert:(id)arg1 ;
-(unsigned long long)maxCapacity;
-(void)setMaxCapacity:(unsigned long long)arg1 ;
-(NSMutableArray *)lru;
-(void)setLru:(NSMutableArray *)arg1 ;
@end

