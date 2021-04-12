/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableOrderedSet, NSObject;

@interface JTCacheDictionary : NSObject {

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
-(void)dealloc;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)dictionary;
-(id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(NSMutableOrderedSet *)keys;
-(void)setKeys:(NSMutableOrderedSet *)arg1 ;
-(unsigned long long)capacity;
-(void)setCapacity:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)cacheQueue;
-(void)highMemoryWarning;
-(BOOL)JT_removeLeastRecentlyUsedIfAtCapacity;
-(void)JT_markRecentlyUsed:(id)arg1 ;
@end

