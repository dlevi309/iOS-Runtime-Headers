/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDVideoStreamLastDecodedFrameDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, HMDCameraStreamSnapshotCaptureDelegate;
@class HMDVideoStreamInterface, NSObject, HMDCameraStreamSessionID, HMFTimer, NSString;

@interface HMDCameraStreamSnapshotCapture : HMFObject <HMDVideoStreamLastDecodedFrameDelegate, HMFTimerDelegate, HMFLogging> {

	BOOL _capturingLastFrame;
	BOOL _capturingCurrentFrame;
	HMDVideoStreamInterface* _videoStreamInterface;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<HMDCameraStreamSnapshotCaptureDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	HMDCameraStreamSessionID* _streamSessionID;
	HMFTimer* _lastDecodedFrameTimer;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                           //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) id<HMDCameraStreamSnapshotCaptureDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                       //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) HMDCameraStreamSessionID * streamSessionID;                       //@synthesize streamSessionID=_streamSessionID - In the implementation block
@property (nonatomic,retain) HMFTimer * lastDecodedFrameTimer;                                   //@synthesize lastDecodedFrameTimer=_lastDecodedFrameTimer - In the implementation block
@property (assign,nonatomic) BOOL capturingLastFrame;                                            //@synthesize capturingLastFrame=_capturingLastFrame - In the implementation block
@property (assign,nonatomic) BOOL capturingCurrentFrame;                                         //@synthesize capturingCurrentFrame=_capturingCurrentFrame - In the implementation block
@property (nonatomic,readonly) HMDVideoStreamInterface * videoStreamInterface;                   //@synthesize videoStreamInterface=_videoStreamInterface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)timerDidFire:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id<HMDCameraStreamSnapshotCaptureDelegate>)delegate;
-(id)logIdentifier;
-(NSString *)description;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(HMDCameraStreamSessionID *)streamSessionID;
-(void)videoStream:(id)arg1 didGetLastDecodedFrame:(id)arg2 ;
-(HMDVideoStreamInterface *)videoStreamInterface;
-(id)initWithWorkQueue:(id)arg1 videoStreamInterface:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(void)captureLastFrame;
-(void)captureCurrentFrame;
-(void)_callDidGetNewSnapshot:(id)arg1 ;
-(void)_callDidGetLastSnapshot:(id)arg1 ;
-(void)setCapturingCurrentFrame:(BOOL)arg1 ;
-(void)_captureFrame;
-(void)setCapturingLastFrame:(BOOL)arg1 ;
-(HMFTimer *)lastDecodedFrameTimer;
-(void)setLastDecodedFrameTimer:(HMFTimer *)arg1 ;
-(void)_callSnapshotDelegate:(id)arg1 ;
-(BOOL)capturingLastFrame;
-(BOOL)capturingCurrentFrame;
@end

