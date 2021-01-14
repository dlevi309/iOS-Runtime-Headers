/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@protocol EFQueueingStrategy;
@class NSMutableArray, NSArray;

@interface EFQueue : NSObject {

	NSMutableArray* _buffer;
	id<EFQueueingStrategy> _strategy;

}

@property (nonatomic,readonly) NSMutableArray * buffer;                      //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) id<EFQueueingStrategy> strategy;              //@synthesize strategy=_strategy - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * allObjects; 
+(id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(/*^block*/id)arg2 ;
+(id)bufferedQueueWithCapacity:(unsigned long long)arg1 batchHandler:(/*^block*/id)arg2 ;
+(id)priorityQueueWithComparator:(/*^block*/id)arg1 ;
+(id)boundedQueueWithCapacity:(unsigned long long)arg1 ;
-(id)drain;
-(id<EFQueueingStrategy>)strategy;
-(id)init;
-(id)initWithStrategy:(id)arg1 ;
-(id)dequeue;
-(id)debugDescription;
-(unsigned long long)count;
-(id)peek;
-(void)dequeueObject:(id)arg1 ;
-(NSArray *)allObjects;
-(id)description;
-(NSMutableArray *)buffer;
-(void)enqueue:(id)arg1 ;
-(void)enqueue:(id)arg1 replaceIfExists:(BOOL)arg2 ;
@end

