/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PFPriorityQueueExtension.h>
#import <libobjc.A.dylib/PFQOSPriorityEnqueuing.h>

@interface PFQOSPriorityQueueExtension : PFPriorityQueueExtension <PFQOSPriorityEnqueuing>
-(void)enqueueWithCurrentQOSPriority:(/*^block*/id)arg1 ;
-(void)enqueueWithQOSPriority:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithConcurrentScheduling:(BOOL)arg1 ;
@end

