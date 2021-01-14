/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)replaceObject:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(FMReadWriteLock *)lock;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)nativeDictionary;
-(id)objectForKey:(id)arg1 withConstructor:(/*^block*/id)arg2 ;
-(id)popObjectforKey:(id)arg1 ;
-(void)setUnderlyingDictionary:(NSMutableDictionary *)arg1 ;
-(void)setLock:(FMReadWriteLock *)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)underlyingDictionary;
@end

