/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/

#import <libobjc.A.dylib/NAQueueingStrategy.h>

@class NSString;

@interface _NAPriorityQueueingStrategy : NSObject <NAQueueingStrategy> {

	/*^block*/id _priorityComparator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)enqueueObject:(id)arg1 buffer:(id)arg2 ;
-(id)initWithComparator:(/*^block*/id)arg1 ;
-(unsigned long long)_insertionIndexForObject:(id)arg1 buffer:(id)arg2 ;
@end

