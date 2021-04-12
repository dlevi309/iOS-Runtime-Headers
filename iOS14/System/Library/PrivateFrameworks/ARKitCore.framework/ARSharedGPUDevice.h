/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@protocol MTLDevice;
@interface ARSharedGPUDevice : NSObject {

	id<MTLDevice> _device;

}

@property (nonatomic,retain) id<MTLDevice> device;              //@synthesize device=_device - In the implementation block
+(id)sharedInstance;
-(id<MTLDevice>)device;
-(void)setDevice:(id<MTLDevice>)arg1 ;
@end

