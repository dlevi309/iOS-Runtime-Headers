/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	unsigned long long _devicePartition;

}

@property (assign) BOOL isOpenGLQueue;              //@synthesize openGLQueue=_openGLQueue - In the implementation block
-(BOOL)disableCrossQueueHazardTracking;
-(void)setCompletionQueue:(id)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(BOOL)isOpenGLQueue;
-(void)setDisableCrossQueueHazardTracking:(BOOL)arg1 ;
-(id)commitQueue;
-(unsigned long long)qosLevel;
-(id)completionQueue;
-(BOOL)commitSynchronously;
-(unsigned long long)maxCommandBufferCount;
-(id)init;
-(void)setCommitQueue:(id)arg1 ;
-(void)setIsOpenGLQueue:(BOOL)arg1 ;
-(void)setQosLevel:(unsigned long long)arg1 ;
-(unsigned long long)devicePartition;
-(id)description;
-(void)setCommitSynchronously:(BOOL)arg1 ;
-(void)setMaxCommandBufferCount:(unsigned long long)arg1 ;
-(void)setDevicePartition:(unsigned long long)arg1 ;
@end

