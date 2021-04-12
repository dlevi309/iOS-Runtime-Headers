/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMModeAndDeviceConfigurationTestHarness.h>

@class CAMViewfinderViewController;

@interface CAMDeviceSwitchTestHarness : CAMModeAndDeviceConfigurationTestHarness {

	BOOL _testingAnimation;
	CAMViewfinderViewController* _viewfinderViewController;
	long long _desiredDevicePosition;
	long long _startingCaptureMode;

}

@property (nonatomic,readonly) CAMViewfinderViewController * viewfinderViewController;              //@synthesize viewfinderViewController=_viewfinderViewController - In the implementation block
@property (nonatomic,readonly) long long desiredDevicePosition;                                     //@synthesize desiredDevicePosition=_desiredDevicePosition - In the implementation block
@property (nonatomic,readonly) long long startingCaptureMode;                                       //@synthesize startingCaptureMode=_startingCaptureMode - In the implementation block
@property (getter=isTestingAnimation,nonatomic,readonly) BOOL testingAnimation;                     //@synthesize testingAnimation=_testingAnimation - In the implementation block
-(void)startTesting;
-(void)handleDidOpenViewfinderForReason:(long long)arg1 ;
-(CAMViewfinderViewController *)viewfinderViewController;
-(id)initWithTestName:(id)arg1 viewfinderViewController:(id)arg2 devicePosition:(long long)arg3 testingAnimation:(BOOL)arg4 startingCaptureMode:(long long)arg5 ;
-(void)ensureCaptureDevicePosition:(long long)arg1 mode:(long long)arg2 thenPerform:(/*^block*/id)arg3 ;
-(BOOL)isTestingAnimation;
-(long long)desiredDevicePosition;
-(long long)startingCaptureMode;
@end

