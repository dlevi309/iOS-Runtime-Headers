/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <UIKitCore/UIApplication.h>

@class CAMPerformanceTestHarness;

@interface CAMApplication : UIApplication {

	CAMPerformanceTestHarness* _currentTestHarness;

}

@property (nonatomic,retain) CAMPerformanceTestHarness * currentTestHarness;              //@synthesize currentTestHarness=_currentTestHarness - In the implementation block
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(void)_configureExtendedLaunchTestIfNeeded;
-(BOOL)runSwitchToPortraitFrontWithTestWithName:(id)arg1 options:(id)arg2 ;
-(void)didOpenViewfinderForReason:(long long)arg1 ;
-(void)willOpenViewfinderForReason:(long long)arg1 ;
-(BOOL)runPresentTestWithName:(id)arg1 options:(id)arg2 ;
-(BOOL)runTakePicturePortraitTest:(id)arg1 options:(id)arg2 prototype:(id)arg3 ;
-(void)setCurrentTestHarness:(CAMPerformanceTestHarness *)arg1 ;
-(BOOL)runTakePictureTestWithTestName:(id)arg1 options:(id)arg2 prototype:(id)arg3 forCaptureMode:(long long)arg4 ;
-(id)_extendLaunchTest;
-(BOOL)runSwitchModesTestWithName:(id)arg1 options:(id)arg2 ;
-(void)prepareForDefaultImageSnapshotForScreen:(id)arg1 ;
-(void)willCloseViewfinderForReason:(long long)arg1 ;
-(BOOL)runSwitchCamerasTestWithName:(id)arg1 options:(id)arg2 ;
-(void)didChangeToMode:(long long)arg1 device:(long long)arg2 ;
-(void)_registerPreviewStartBlock:(/*^block*/id)arg1 ;
-(BOOL)runTakePictureFrontPortraitTest:(id)arg1 options:(id)arg2 prototype:(id)arg3 ;
-(CAMPerformanceTestHarness *)currentTestHarness;
-(void)didCloseViewfinderForReason:(long long)arg1 ;
-(unsigned long long)supportedInterfaceOrientationsForWindow:(id)arg1 ;
-(BOOL)runTakePictureTestWithFrontCamera:(id)arg1 options:(id)arg2 prototype:(id)arg3 forCaptureMode:(long long)arg4 ;
@end

