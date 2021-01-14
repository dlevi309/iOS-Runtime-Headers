/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNQueueingStrategy.h>

@class NSString;

@interface _CNPriorityQueueingStrategy : NSObject <CNQueueingStrategy> {

	/*^block*/id _priorityComparator;

}

@property (nonatomic,copy,readonly) id priorityComparator;              //@synthesize priorityComparator=_priorityComparator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)enqueueObject:(id)arg1 buffer:(id)arg2 ;
-(id)initWithComparator:(/*^block*/id)arg1 ;
-(unsigned long long)_insertionIndexForObject:(id)arg1 buffer:(id)arg2 ;
-(id)priorityComparator;
@end

