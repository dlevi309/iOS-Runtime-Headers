/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMModeAndDeviceConfigurationTestHarness.h>

@class CAMViewfinderViewController;

@interface CAMDeviceSwitchAnimationTestHarness : CAMModeAndDeviceConfigurationTestHarness {

	CAMViewfinderViewController* _viewfinder;
	long long _desiredDevicePosition;

}
+(id)harnessWithTestName:(id)arg1 viewfinder:(id)arg2 devicePosition:(long long)arg3 ;
-(void)ensureCaptureDevicePosition:(long long)arg1 mode:(long long)arg2 thenPerform:(/*^block*/id)arg3 ;
-(void)startTesting;
-(id)initWithTestName:(id)arg1 viewfinder:(id)arg2 devicePosition:(long long)arg3 ;
@end

