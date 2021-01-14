/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
*/


@class NSMutableArray, FMReadWriteLock;

@interface FMConcurrentMutableArray : NSObject {

	NSMutableArray* _underlyingArray;
	FMReadWriteLock* _lock;

}

@property (nonatomic,retain) NSMutableArray * underlyingArray;              //@synthesize underlyingArray=_underlyingArray - In the implementation block
@property (nonatomic,retain) FMReadWriteLock * lock;                        //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(FMReadWriteLock *)lock;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)nativeArray;
-(void)addObject:(id)arg1 ;
-(NSMutableArray *)underlyingArray;
-(void)setUnderlyingArray:(NSMutableArray *)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)setLock:(FMReadWriteLock *)arg1 ;
-(id)initWithArray:(id)arg1 ;
@end

