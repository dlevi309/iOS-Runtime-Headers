/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>
#import <AVFoundation/AVCaptureDataOutputDelegateOverride.h>

@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference, NSString;

@interface AVCaptureCameraCalibrationDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {

	AVCaptureDataOutputDelegateCallbackHelper* _delegateCallbackHelper;
	AVWeakReference* _weakReference;
	BOOL _alwaysDiscardsLateCameraCalibrationData;

}

@property (nonatomic,readonly) id<AVCaptureCameraCalibrationDataOutputDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateCallbackQueue; 
@property (assign,nonatomic) BOOL alwaysDiscardsLateCameraCalibrationData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id delegateOverride; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateOverrideCallbackQueue; 
+(void)initialize;
+(id)new;
-(id)init;
-(void)dealloc;
-(id<AVCaptureCameraCalibrationDataOutputDelegate>)delegate;
-(id)delegateOverride;
-(NSObject*<OS_dispatch_queue>)delegateOverrideCallbackQueue;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)connectionMediaTypes;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(void)_updateRemoteQueue:(remoteQueueReceiverOpaqueRef)arg1 ;
-(void)_handleRemoteQueueOperation:(FigRemoteOperation*)arg1 ;
-(void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2 ;
-(BOOL)alwaysDiscardsLateCameraCalibrationData;
-(void)_updateLocalQueue:(localQueueOpaqueRef)arg1 ;
-(void)_processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleLocalQueueMessage:(FigLocalQueueMessage*)arg1 ;
-(void)setDelegate:(id)arg1 callbackQueue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)delegateCallbackQueue;
-(void)setAlwaysDiscardsLateCameraCalibrationData:(BOOL)arg1 ;
@end

