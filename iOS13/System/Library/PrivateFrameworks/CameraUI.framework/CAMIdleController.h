/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <libobjc.A.dylib/CAMStillImageCaptureRequestDelegate.h>
#import <libobjc.A.dylib/CAMVideoCaptureRequestDelegate.h>
#import <libobjc.A.dylib/CAMPanoramaCaptureRequestDelegate.h>
#import <libobjc.A.dylib/CAMStillImageCapturingVideoDelegate.h>

@class NSTimer, NSString;

@interface CAMIdleController : NSObject <CAMStillImageCaptureRequestDelegate, CAMVideoCaptureRequestDelegate, CAMPanoramaCaptureRequestDelegate, CAMStillImageCapturingVideoDelegate> {

	BOOL _updatingIdleTimer;
	NSTimer* _enableIdleTimer;

}

@property (assign,setter=_setUpdatingIdleTimer:,getter=isUpdatingIdleTimer,nonatomic) BOOL updatingIdleTimer;              //@synthesize updatingIdleTimer=_updatingIdleTimer - In the implementation block
@property (getter=_isIdleTimerIndefinitelyDisabled,nonatomic,readonly) BOOL idleTimerIndefinitelyDisabled; 
@property (setter=_setEnableIdleTimer:,getter=_enableIdleTimer,nonatomic,retain) NSTimer * enableIdleTimer;                //@synthesize enableIdleTimer=_enableIdleTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)_immediatelyEnableApplicationIdleTimer;
-(id)_enableIdleTimer;
-(void)_setUpdatingIdleTimer:(BOOL)arg1 ;
-(void)_delayIdleTimerByTimeIntervalUnlessIndefinitelyDisabled:(double)arg1 ;
-(void)_indefinitelyDisableApplicationIdleTimer;
-(void)_delayIdleTimerByTimeInterval:(double)arg1 ;
-(BOOL)_isIdleTimerIndefinitelyDisabled;
-(BOOL)isUpdatingIdleTimer;
-(void)_setEnableIdleTimer:(id)arg1 ;
-(void)_teardownEnableIdleTimer;
-(void)stillImageRequestDidStopCapturingStillImage:(id)arg1 ;
-(void)videoRequestDidStartCapturing:(id)arg1 ;
-(void)videoRequestDidStopCapturing:(id)arg1 ;
-(void)panoramaRequestDidStartCapturing:(id)arg1 ;
-(void)panoramaRequestDidStopCapturing:(id)arg1 interrupted:(BOOL)arg2 ;
-(void)stillImageRequestWillStartCapturingCTMVideoWithCaptureInFlight:(BOOL)arg1 ;
-(void)stillImageRequestsDidStopCapturingCTMVideo;
-(void)startUpdatingIdleTimer;
-(void)stopUpdatingIdleTimer;
-(void)timelapseRequestDidStartCapturing;
-(void)timelapseRequestDidResumeCapturing;
-(void)timelapseRequestDidStopCapturing;
@end

