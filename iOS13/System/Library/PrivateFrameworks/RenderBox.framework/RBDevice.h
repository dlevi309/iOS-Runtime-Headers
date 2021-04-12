/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)isSupported;
+(id)sharedDefaultDevice;
+(id)sharedDevice:(id)arg1 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<MTLDevice>)device;
-(id)initWithDevice:(id)arg1 ;
-(void)collectResources;
-(id<MTLCaptureScope>)captureScope;
-(Device*)rb_device;
@end

