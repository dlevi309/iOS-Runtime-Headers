/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)desiredDevicePosition;
-(void)ensureCaptureDevicePosition:(long long)arg1 mode:(long long)arg2 thenPerform:(/*^block*/id)arg3 ;
-(id)initWithTestName:(id)arg1 viewfinderViewController:(id)arg2 devicePosition:(long long)arg3 testingAnimation:(BOOL)arg4 startingCaptureMode:(long long)arg5 ;
-(CAMViewfinderViewController *)viewfinderViewController;
-(void)startTesting;
-(void)handleDidOpenViewfinderForReason:(long long)arg1 ;
-(long long)startingCaptureMode;
-(BOOL)isTestingAnimation;
@end

