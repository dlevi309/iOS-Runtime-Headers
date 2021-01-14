/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/


@protocol NAQueueingStrategy;
@class NSMutableArray, NSArray;

@interface NAQueue : NSObject {

	NSMutableArray* _buffer;
	id<NAQueueingStrategy> _strategy;

}

@property (readonly) unsigned long long count; 
@property (readonly) NSArray * allObjects; 
+(id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(/*^block*/id)arg2 ;
+(id)priorityQueueWithComparator:(/*^block*/id)arg1 ;
+(id)boundedQueueWithCapacity:(unsigned long long)arg1 ;
-(id)drain;
-(id)init;
-(id)initWithStrategy:(id)arg1 ;
-(id)dequeue;
-(unsigned long long)count;
-(id)peek;
-(void)dequeueObject:(id)arg1 ;
-(NSArray *)allObjects;
-(void)enqueue:(id)arg1 ;
@end

