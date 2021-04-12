/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
*/

#import <FMCoreLite/FMQueueingStrategy.h>

@class NSString;

@interface _FMPriorityQueueingStrategy : NSObject <FMQueueingStrategy> {

	/*^block*/id _priorityComparator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithComparator:(/*^block*/id)arg1 ;
-(void)enqueueObject:(id)arg1 buffer:(id)arg2 ;
-(unsigned long long)_insertionIndexForObject:(id)arg1 buffer:(id)arg2 ;
@end

