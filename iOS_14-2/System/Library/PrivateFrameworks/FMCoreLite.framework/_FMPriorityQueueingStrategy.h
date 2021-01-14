/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)enqueueObject:(id)arg1 buffer:(id)arg2 ;
-(id)initWithComparator:(/*^block*/id)arg1 ;
-(unsigned long long)_insertionIndexForObject:(id)arg1 buffer:(id)arg2 ;
@end

