/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLCommandQueue.h>

@protocol MTLDevice;
@class MTLIOAccelDevice;

@interface MTLIOAccelCommandQueue : _MTLCommandQueue {

	IOAccelCommandQueueRef _commandQueue;
	MTLIOAccelDevice*<MTLDevice> _device;
	unsigned long long _priority;
	unsigned long long _backgroundPriority;

}

@property (readonly) id<MTLDevice> device;              //@synthesize device=_device - In the implementation block
-(void)dealloc;
-(id<MTLDevice>)device;
-(void)setLabel:(id)arg1 ;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 ;
-(BOOL)setGPUPriority:(unsigned long long)arg1 ;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 ;
-(void)setCompletionQueue:(id)arg1 ;
-(unsigned long long)getGPUPriority;
-(BOOL)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
-(unsigned long long)getBackgroundGPUPriority;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
-(BOOL)_setGPUPriority:(unsigned long long)arg1 backgroundPriority:(unsigned long long)arg2 ;
-(void)submitCommandBuffers:(id*)arg1 count:(unsigned long long)arg2 ;
@end

