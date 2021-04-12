/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(FMReadWriteLock *)lock;
-(void)setLock:(FMReadWriteLock *)arg1 ;
-(NSMutableArray *)underlyingArray;
-(id)nativeArray;
-(void)setUnderlyingArray:(NSMutableArray *)arg1 ;
@end

