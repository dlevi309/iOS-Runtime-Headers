/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
*/


@protocol FMQueueingStrategy;
@class NSMutableArray, NSArray;

@interface FMQueue : NSObject {

	NSMutableArray* _buffer;
	id<FMQueueingStrategy> _strategy;

}

@property (readonly) unsigned long long count; 
@property (readonly) NSArray * allObjects; 
+(id)priorityQueueWithComparator:(/*^block*/id)arg1 ;
+(id)boundedQueueWithCapacity:(unsigned long long)arg1 ;
+(id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(/*^block*/id)arg2 ;
-(id)init;
-(unsigned long long)count;
-(NSArray *)allObjects;
-(id)drain;
-(id)peek;
-(id)dequeue;
-(id)initWithStrategy:(id)arg1 ;
-(void)enqueue:(id)arg1 ;
-(void)dequeueObject:(id)arg1 ;
@end

