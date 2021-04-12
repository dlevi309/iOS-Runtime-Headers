/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@protocol CNQueueingStrategy;
@class NSMutableArray, NSArray;

@interface CNQueue : NSObject {

	NSMutableArray* _buffer;
	id<CNQueueingStrategy> _strategy;

}

@property (nonatomic,readonly) NSMutableArray * buffer;                      //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) id<CNQueueingStrategy> strategy;              //@synthesize strategy=_strategy - In the implementation block
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
-(NSMutableArray *)buffer;
-(id<CNQueueingStrategy>)strategy;
-(id)dequeue;
-(id)initWithStrategy:(id)arg1 ;
-(void)enqueueObjectsFromArray:(id)arg1 ;
-(void)enqueue:(id)arg1 ;
-(void)dequeueObject:(id)arg1 ;
@end

