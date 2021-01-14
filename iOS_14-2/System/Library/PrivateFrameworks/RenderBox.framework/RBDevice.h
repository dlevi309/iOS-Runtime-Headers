/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
*/


#import <RenderBox/RenderBox-Structs.h>
@interface RBDevice : NSObject {

	refcounted_ptr<RB::Device>* _device;
	objc_ptr<NSObject<OS_dispatch_queue> *> _queue;
	atomic<unsigned int> _pending_collect;

}

@property (nonatomic,readonly) Device* rb_device; 
@property (nonatomic,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,readonly) id<MTLCaptureScope> captureScope; 
+(id)allDevices;
+(BOOL)isSupported;
+(id)sharedDefaultDevice;
+(id)sharedDevice:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id<MTLDevice>)device;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
-(id<MTLCaptureScope>)captureScope;
-(Device*)rb_device;
-(void)collectResources;
-(id)pipelineDescriptions:(id)arg1 extraColorFormats:(id)arg2 ;
@end

