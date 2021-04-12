/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <UIKitCore/UIApplication.h>

@class CAMPerformanceTestHarness;

@interface CAMApplication : UIApplication {

	CAMPerformanceTestHarness* _currentTestHarness;

}

@property (nonatomic,retain) CAMPerformanceTestHarness * currentTestHarness;              //@synthesize currentTestHarness=_currentTestHarness - In the implementation block
-(id)_extendLaunchTest;
-(unsigned long long)supportedInterfaceOrientationsForWindow:(id)arg1 ;
-(void)prepareForDefaultImageSnapshotForScreen:(id)arg1 ;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(void)_registerPreviewStartBlock:(/*^block*/id)arg1 ;
-(CAMPerformanceTestHarness *)currentTestHarness;
-(void)setCurrentTestHarness:(CAMPerformanceTestHarness *)arg1 ;
-(BOOL)runTakePictureTestWithTestName:(id)arg1 options:(id)arg2 prototype:(id)arg3 forCaptureMode:(long long)arg4 ;
-(BOOL)runTakePictureFrontPortraitTest:(id)arg1 options:(id)arg2 prototype:(id)arg3 ;
-(BOOL)runTakePictureTestWithFrontCamera:(id)arg1 options:(id)arg2 prototype:(id)arg3 forCaptureMode:(long long)arg4 ;
-(BOOL)runTakePicturePortraitTest:(id)arg1 options:(id)arg2 prototype:(id)arg3 ;
-(BOOL)runPresentTestWithName:(id)arg1 options:(id)arg2 ;
-(BOOL)runSwitchToPortraitFrontWithTestWithName:(id)arg1 options:(id)arg2 ;
-(BOOL)runSwitchCamerasTestWithName:(id)arg1 options:(id)arg2 ;
-(BOOL)runSwitchModesTestWithName:(id)arg1 options:(id)arg2 ;
-(void)_configureExtendedLaunchTestIfNeeded;
-(void)willCloseViewfinderForReason:(long long)arg1 ;
-(void)didCloseViewfinderForReason:(long long)arg1 ;
-(void)willOpenViewfinderForReason:(long long)arg1 ;
-(void)didOpenViewfinderForReason:(long long)arg1 ;
-(void)didChangeToMode:(long long)arg1 device:(long long)arg2 ;
@end

