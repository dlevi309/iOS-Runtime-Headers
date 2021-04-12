/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
*/


@class NSMutableDictionary, FMReadWriteLock;

@interface FMConcurrentMutableDictionary : NSObject {

	NSMutableDictionary* _underlyingDictionary;
	FMReadWriteLock* _lock;

}

@property (nonatomic,retain) NSMutableDictionary * underlyingDictionary;              //@synthesize underlyingDictionary=_underlyingDictionary - In the implementation block
@property (nonatomic,retain) FMReadWriteLock * lock;                                  //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(id)replaceObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(FMReadWriteLock *)lock;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setLock:(FMReadWriteLock *)arg1 ;
-(NSMutableDictionary *)underlyingDictionary;
-(id)nativeDictionary;
-(id)objectForKey:(id)arg1 withConstructor:(/*^block*/id)arg2 ;
-(id)popObjectforKey:(id)arg1 ;
-(void)setUnderlyingDictionary:(NSMutableDictionary *)arg1 ;
@end

