/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PFPriorityQueueExtension.h>
#import <libobjc.A.dylib/PFQOSPriorityEnqueuing.h>

@interface PFQOSPriorityQueueExtension : PFPriorityQueueExtension <PFQOSPriorityEnqueuing>
-(void)enqueueWithCurrentQOSPriority:(/*^block*/id)arg1 ;
-(void)enqueueWithQOSPriority:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithConcurrentScheduling:(BOOL)arg1 ;
@end

