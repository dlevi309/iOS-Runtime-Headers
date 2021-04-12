/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/MTLCommandQueueDescriptor.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface MTLCommandQueueDescriptorInternal : MTLCommandQueueDescriptor {

	unsigned long long _maxCommandBufferCount;
	unsigned long long _qosLevel;
	NSObject*<OS_dispatch_queue> _commitQueue;
	BOOL _commitSynchronously;
	NSObject*<OS_dispatch_queue> _completionQueue;
	BOOL _disableCrossQueueHazardTracking;
	BOOL _openGLQueue;

}

@property (assign) BOOL isOpenGLQueue;              //@synthesize openGLQueue=_openGLQueue - In the implementation block
-(id)init;
-(id)description;
-(void)setCompletionQueue:(id)arg1 ;
-(id)completionQueue;
-(unsigned long long)maxCommandBufferCount;
-(unsigned long long)qosLevel;
-(id)commitQueue;
-(BOOL)commitSynchronously;
-(BOOL)disableCrossQueueHazardTracking;
-(BOOL)isOpenGLQueue;
-(void)setIsOpenGLQueue:(BOOL)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setMaxCommandBufferCount:(unsigned long long)arg1 ;
-(void)setQosLevel:(unsigned long long)arg1 ;
-(void)setCommitQueue:(id)arg1 ;
-(void)setCommitSynchronously:(BOOL)arg1 ;
-(void)setDisableCrossQueueHazardTracking:(BOOL)arg1 ;
@end

