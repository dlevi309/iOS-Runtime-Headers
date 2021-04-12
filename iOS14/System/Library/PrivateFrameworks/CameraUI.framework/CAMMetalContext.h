/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol MTLDevice, MTLCommandQueue;
@interface CAMMetalContext : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;

}

@property (nonatomic,readonly) id<MTLDevice> device;                          //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue;              //@synthesize commandQueue=_commandQueue - In the implementation block
-(id<MTLCommandQueue>)commandQueue;
-(id)init;
-(id<MTLDevice>)device;
@end

