/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
*/

#import <IOGPU/IOGPU-Structs.h>
#import <Metal/_MTLCommandQueue.h>

@protocol MTLDevice;
@class IOGPUMetalDevice;

@interface IOGPUMetalCommandQueue : _MTLCommandQueue {

	IOGPUCommandQueueRef _commandQueue;
	IOGPUMetalDevice*<MTLDevice> _device;
	unsigned long long _priority;
	unsigned long long _backgroundPriority;

}

@property (readonly) id<MTLDevice> device;              //@synthesize device=_device - In the implementation block
-(void)setCompletionQueue:(id)arg1 ;
-(void)submitCommandBuffers:(id*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 ;
-(BOOL)_setGPUPriority:(unsigned long long)arg1 backgroundPriority:(unsigned long long)arg2 ;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
-(id<MTLDevice>)device;
-(void)_submitCommandBuffers:(id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)setGPUPriority:(unsigned long long)arg1 ;
-(unsigned long long)getBackgroundGPUPriority;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 ;
-(unsigned long long)getGPUPriority;
-(void)setLabel:(id)arg1 ;
-(BOOL)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
-(void)dealloc;
@end

