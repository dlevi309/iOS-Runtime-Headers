/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

