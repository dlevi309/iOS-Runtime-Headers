/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(/*^block*/id)arg2 ;
+(id)priorityQueueWithComparator:(/*^block*/id)arg1 ;
+(id)boundedQueueWithCapacity:(unsigned long long)arg1 ;
-(id)drain;
-(id<CNQueueingStrategy>)strategy;
-(id)init;
-(id)initWithStrategy:(id)arg1 ;
-(id)dequeue;
-(unsigned long long)count;
-(id)peek;
-(void)dequeueObject:(id)arg1 ;
-(NSArray *)allObjects;
-(NSMutableArray *)buffer;
-(void)enqueue:(id)arg1 ;
-(void)enqueueObjectsFromArray:(id)arg1 ;
@end

