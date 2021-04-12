/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableOrderedSet, NSObject;

@interface JFXLRUCache : NSObject {

	unsigned long long _capacity;
	NSMutableDictionary* _dictionary;
	NSMutableOrderedSet* _keys;
	NSObject*<OS_dispatch_queue> _cacheQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * dictionary;                     //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * keys;                             //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> cacheQueue;              //@synthesize cacheQueue=_cacheQueue - In the implementation block
@property (assign,nonatomic) unsigned long long capacity;                            //@synthesize capacity=_capacity - In the implementation block
@property (readonly) unsigned long long count; 
-(void)setCapacity:(unsigned long long)arg1 ;
-(id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
-(NSMutableOrderedSet *)keys;
-(unsigned long long)capacity;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setKeys:(NSMutableOrderedSet *)arg1 ;
-(NSMutableDictionary *)dictionary;
-(NSObject*<OS_dispatch_queue>)cacheQueue;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)highMemoryWarning;
-(BOOL)JT_removeLeastRecentlyUsedIfAtCapacity;
-(void)JT_markRecentlyUsed:(id)arg1 ;
@end

