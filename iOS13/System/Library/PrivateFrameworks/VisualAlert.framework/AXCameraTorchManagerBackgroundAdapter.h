/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
*/


@protocol OS_dispatch_queue, AXCameraTorchManager;
@class NSObject;

@interface AXCameraTorchManagerBackgroundAdapter : NSObject {

	NSObject*<OS_dispatch_queue> _q;
	id<AXCameraTorchManager> _synchronousManager;

}

@property (nonatomic,readonly) id<AXCameraTorchManager> synchronousTorchManager;              //@synthesize synchronousManager=_synchronousManager - In the implementation block
-(id)initWithCameraTorchManager:(id)arg1 ;
-(void)openTorchDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)closeTorchDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)turnTorchOnWithCompletion:(/*^block*/id)arg1 ;
-(void)turnTorchOffWithCompletion:(/*^block*/id)arg1 ;
-(id<AXCameraTorchManager>)synchronousTorchManager;
@end

