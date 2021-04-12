/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)stillImageRequestDidStopCapturingStillImage:(id)arg1 ;
-(void)stillImageRequestWillStartCapturingCTMVideoWithCaptureInFlight:(BOOL)arg1 ;
-(void)panoramaRequestDidStopCapturing:(id)arg1 interrupted:(BOOL)arg2 ;
-(void)videoRequestDidStartCapturing:(id)arg1 ;
-(void)videoRequestDidStopCapturing:(id)arg1 ;
-(void)startUpdatingIdleTimer;
-(void)panoramaRequestDidStartCapturing:(id)arg1 ;
-(void)stillImageRequestsDidStopCapturingCTMVideo;
-(id)init;
-(BOOL)isUpdatingIdleTimer;
-(void)_delayIdleTimerByTimeIntervalUnlessIndefinitelyDisabled:(double)arg1 ;
-(void)stopUpdatingIdleTimer;
-(void)timelapseRequestDidResumeCapturing;
-(void)_indefinitelyDisableApplicationIdleTimer;
-(void)_teardownEnableIdleTimer;
-(id)_enableIdleTimer;
-(void)_setUpdatingIdleTimer:(BOOL)arg1 ;
-(void)_immediatelyEnableApplicationIdleTimer;
-(void)_setEnableIdleTimer:(id)arg1 ;
-(void)timelapseRequestDidStopCapturing;
-(BOOL)_isIdleTimerIndefinitelyDisabled;
-(void)timelapseRequestDidStartCapturing;
-(void)_delayIdleTimerByTimeInterval:(double)arg1 ;
-(void)dealloc;
@end

