/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface JFXThreadSafeArray : NSObject {

	NSMutableArray* _array;
	NSObject*<OS_dispatch_queue> _concurrentQueue;

}

@property (nonatomic,retain) NSMutableArray * array;                                    //@synthesize array=_array - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> concurrentQueue;              //@synthesize concurrentQueue=_concurrentQueue - In the implementation block
@property (readonly) unsigned long long count; 
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)concurrentQueue;
-(void)sortUsingSelector:(SEL)arg1 ;
-(id)init;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(NSMutableArray *)array;
-(unsigned long long)count;
-(void)setConcurrentQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(void)addObject:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg1 ;
-(id)sortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(void)setArray:(NSMutableArray *)arg1 ;
-(id)copyOfArray;
@end

