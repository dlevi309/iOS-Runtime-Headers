/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <libobjc.A.dylib/MTLCommandQueueSPI.h>

@protocol MTLCommandQueue;
@class CMMTLDevice, InterceptConfig, NSString;

@interface CMMTLCommandQueue : NSObject <MTLCommandQueueSPI> {

	CMMTLDevice* _cmDevice;
	id<MTLCommandQueue> _commandQueue;
	InterceptConfig* _interceptConfig;

}

@property (assign) int backgroundTrackingPID; 
@property (readonly) unsigned long long maxCommandBufferCount; 
@property (readonly) unsigned long long qosLevel; 
@property (readonly) NSObject*<OS_dispatch_queue> commitQueue; 
@property (readonly) BOOL commitSynchronously; 
@property (readonly) NSObject*<OS_dispatch_queue> completionQueue; 
@property (readonly) BOOL disableCrossQueueHazardTracking; 
@property (assign) BOOL skipRender; 
@property (assign) BOOL executionEnabled; 
@property (readonly) BOOL isOpenGLQueue; 
@property (getter=isProfilingEnabled) BOOL profilingEnabled; 
@property (assign,getter=isStatEnabled,nonatomic) BOOL StatEnabled; 
@property (assign,getter=getStatOptions,nonatomic) unsigned long long StatOptions; 
@property (assign,getter=getStatLocations,nonatomic) unsigned long long StatLocations; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id<MTLDevice>)device;
-(id)commandBuffer;
-(id)initWithCMMTLDevice:(id)arg1 maxCommandBufferCount:(unsigned long long)arg2 ;
-(id)initWithCMMTLDevice:(id)arg1 ;
-(id)initWithCMMTLDevice:(id)arg1 descriptor:(id)arg2 ;
-(id)commandBufferWithUnretainedReferences;
-(void)forwardInvocation:(id)arg1 ;
@end

