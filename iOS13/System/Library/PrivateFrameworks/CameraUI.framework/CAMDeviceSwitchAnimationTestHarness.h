/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMModeAndDeviceConfigurationTestHarness.h>

@class CAMViewfinderViewController;

@interface CAMDeviceSwitchAnimationTestHarness : CAMModeAndDeviceConfigurationTestHarness {

	CAMViewfinderViewController* _viewfinder;
	long long _desiredDevicePosition;

}
+(id)harnessWithTestName:(id)arg1 viewfinder:(id)arg2 devicePosition:(long long)arg3 ;
-(void)startTesting;
-(void)ensureCaptureDevicePosition:(long long)arg1 mode:(long long)arg2 thenPerform:(/*^block*/id)arg3 ;
-(id)initWithTestName:(id)arg1 viewfinder:(id)arg2 devicePosition:(long long)arg3 ;
@end

