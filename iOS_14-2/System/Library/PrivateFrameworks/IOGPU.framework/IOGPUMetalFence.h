/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
*/

#import <Metal/_MTLFence.h>
#import <libobjc.A.dylib/MTLFenceSPI.h>

@protocol MTLDevice;
@class IOGPUMetalDevice, IOGPUMTLFence, NSString;

@interface IOGPUMetalFence : _MTLFence <MTLFenceSPI> {

	IOGPUMetalDevice*<MTLDevice> _device;
	IOGPUMTLFence* _fence;
	unsigned _fenceIndex;

}

@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDevice:(id)arg1 ;
-(id<MTLDevice>)device;
-(void)dealloc;
@end

