/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMModeAndDeviceConfigurationTestHarness.h>

@class CAMViewfinderViewController;

@interface CAMModeSwitchTestHarness : CAMModeAndDeviceConfigurationTestHarness {

	BOOL _testingAnimation;
	CAMViewfinderViewController* _viewfinderViewController;
	long long _desiredMode;

}

@property (nonatomic,readonly) CAMViewfinderViewController * viewfinderViewController;              //@synthesize viewfinderViewController=_viewfinderViewController - In the implementation block
@property (nonatomic,readonly) long long desiredMode;                                               //@synthesize desiredMode=_desiredMode - In the implementation block
@property (getter=isTestingAnimation,nonatomic,readonly) BOOL testingAnimation;                     //@synthesize testingAnimation=_testingAnimation - In the implementation block
-(long long)desiredMode;
-(void)startTesting;
-(void)handleDidOpenViewfinderForReason:(long long)arg1 ;
-(CAMViewfinderViewController *)viewfinderViewController;
-(id)initWithTestName:(id)arg1 viewfinderViewController:(id)arg2 mode:(long long)arg3 testingAnimation:(BOOL)arg4 ;
-(BOOL)isTestingAnimation;
-(void)_ensureCaptureMode:(long long)arg1 thenPerform:(/*^block*/id)arg2 ;
@end

