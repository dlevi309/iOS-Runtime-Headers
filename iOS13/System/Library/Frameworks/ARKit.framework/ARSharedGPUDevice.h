/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
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

