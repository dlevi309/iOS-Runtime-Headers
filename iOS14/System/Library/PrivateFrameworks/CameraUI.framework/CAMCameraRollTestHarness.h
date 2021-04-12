/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMPerformanceTestHarness.h>

@class CAMViewfinderViewController;

@interface CAMCameraRollTestHarness : CAMPerformanceTestHarness {

	BOOL _awaitPreload;
	BOOL _testingWarmPresentation;
	BOOL _testingAnimation;
	double _settlingDelay;
	CAMViewfinderViewController* _viewfinderViewController;

}

@property (nonatomic,readonly) BOOL awaitPreload;                                                   //@synthesize awaitPreload=_awaitPreload - In the implementation block
@property (nonatomic,readonly) double settlingDelay;                                                //@synthesize settlingDelay=_settlingDelay - In the implementation block
@property (nonatomic,readonly) BOOL testingWarmPresentation;                                        //@synthesize testingWarmPresentation=_testingWarmPresentation - In the implementation block
@property (getter=isTestingAnimation,nonatomic,readonly) BOOL testingAnimation;                     //@synthesize testingAnimation=_testingAnimation - In the implementation block
@property (nonatomic,readonly) CAMViewfinderViewController * viewfinderViewController;              //@synthesize viewfinderViewController=_viewfinderViewController - In the implementation block
-(void)stopTesting;
-(CAMViewfinderViewController *)viewfinderViewController;
-(void)startTesting;
-(BOOL)isTestingAnimation;
-(id)initWithTestName:(id)arg1 viewfinderViewController:(id)arg2 testingAnimation:(BOOL)arg3 testingWarmPresentation:(BOOL)arg4 awaitPreload:(BOOL)arg5 settlingDelay:(double)arg6 ;
-(BOOL)awaitPreload;
-(BOOL)testingWarmPresentation;
-(double)settlingDelay;
-(void)_presentCameraRollAnimated;
-(void)_dismissCameraRollImmediately;
-(void)_handlePUDisplayLinkStarted:(id)arg1 ;
@end

