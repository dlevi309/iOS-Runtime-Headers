/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_ensureCaptureMode:(long long)arg1 thenPerform:(/*^block*/id)arg2 ;
-(CAMViewfinderViewController *)viewfinderViewController;
-(void)startTesting;
-(void)handleDidOpenViewfinderForReason:(long long)arg1 ;
-(id)initWithTestName:(id)arg1 viewfinderViewController:(id)arg2 mode:(long long)arg3 testingAnimation:(BOOL)arg4 ;
-(BOOL)isTestingAnimation;
@end

