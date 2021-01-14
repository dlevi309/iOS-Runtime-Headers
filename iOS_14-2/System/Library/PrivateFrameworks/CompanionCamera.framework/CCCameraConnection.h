/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/CompanionCamera
*/

#import <CompanionCamera/CompanionCamera-Structs.h>
#import <libobjc.A.dylib/CCCameraConnectionProtocol.h>
#import <libobjc.A.dylib/FigCameraViewfinderDelegate.h>
#import <libobjc.A.dylib/FigCameraViewfinderSessionDelegate.h>

@protocol OS_dispatch_source, CCCameraConnectionDelegate;
@class CCCameraConnectionInternal, NSXPCConnection, NSString, FigCameraViewfinder, FigCameraViewfinderSession, NSObject, NSDate;

@interface CCCameraConnection : NSObject <CCCameraConnectionProtocol, FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate> {

	CCCameraConnectionInternal* _internal;
	NSXPCConnection* _xpc;
	id _orientationChangeObserver;
	NSString* _previewEndpoint;
	FigCameraViewfinder* _remoteViewfinder;
	FigCameraViewfinderSession* _remoteViewfinderSession;
	unsigned long long _desiredPreviewState;
	unsigned long long _currentPreviewState;
	unsigned long long _interruptionCount;
	NSObject*<OS_dispatch_source> _zoomTimer;
	float _pendingZoomAmount;
	float _lastSentZoomAmount;
	int _deviceConnectedNotificationToken;
	int _deviceDisconnectedNotificationToken;
	BOOL _burstInProgress;
	BOOL _capturing;
	NSDate* _captureStartDate;
	long long _shallowDepthOfFieldStatus;
	id<CCCameraConnectionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CCCameraConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)xpc_toggleCameraDevice;
-(oneway void)xpc_beginBurstCaptureWithReply:(/*^block*/id)arg1 ;
-(oneway void)xpc_setHDRMode:(long long)arg1 ;
-(oneway void)xpc_setCaptureMode:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)xpc_setFocusPoint:(id)arg1 ;
-(oneway void)xpc_fetchCurrentStateIncludingSupportedCaptureModes:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(long long)_irisMode;
-(oneway void)xpc_setCaptureDevice:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)takePhotoWithCountdown:(unsigned long long)arg1 ;
-(void)_zoomTimerFired;
-(void)open;
-(oneway void)xpc_ensureSwitchedToOneOfSupportedCaptureModes:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)init;
-(long long)_hdrSupport;
-(void)_handleInvalidation;
-(id<CCCameraConnectionDelegate>)delegate;
-(oneway void)xpc_suspend;
-(void)_handleInterruption;
-(BOOL)isOpen;
-(oneway void)xpc_startCaptureWithMode:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)close;
-(void)countdownCanceled;
-(void)modeSelected:(long long)arg1 ;
-(double)_zoomAmount;
-(BOOL)_shouldReportEvent;
-(void)irisModeDidChange;
-(void)cameraViewfinderSession:(id)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_CC0)arg4 ;
-(long long)_hdrMode;
-(long long)_irisSupport;
-(void)zoomDidChange:(double)arg1 ;
-(void)setDelegate:(id<CCCameraConnectionDelegate>)arg1 ;
-(void)_checkin;
-(void)switchedOrientation:(long long)arg1 ;
-(void)didUpdateThumbnailWithData:(id)arg1 isVideo:(BOOL)arg2 ;
-(oneway void)xpc_setIrisMode:(long long)arg1 ;
-(BOOL)_toggleCameraDeviceSupport;
-(BOOL)isPreviewConnected;
-(oneway void)xpc_cancelCountdown;
-(oneway void)xpc_stopCaptureWithReply:(/*^block*/id)arg1 ;
-(void)didStartCaptureTimer;
-(void)cameraViewfinder:(id)arg1 viewfinderSessionDidEnd:(id)arg2 ;
-(void)didStopCapture;
-(long long)_captureDevice;
-(BOOL)_zoomSupport;
-(void)closePreview;
-(BOOL)_isShowingLivePreview;
-(id)_supportedCaptureModes;
-(oneway void)xpc_setZoom:(float)arg1 reply:(/*^block*/id)arg2 ;
-(void)didUpdateShallowDepthOfFieldStatus:(long long)arg1 ;
-(void)flashModeDidChange;
-(BOOL)_burstSupport;
-(long long)_flashMode;
-(long long)_currentOrientation;
-(void)photoTaken:(id)arg1 ;
-(oneway void)xpc_endBurstCaptureWithReply:(/*^block*/id)arg1 ;
-(oneway void)xpc_setFlashMode:(long long)arg1 ;
-(void)willStartCapturing;
-(void)cameraViewfinder:(id)arg1 viewfinderSessionDidBegin:(id)arg2 ;
-(void)hdrModeDidChange;
-(void)burstCaptureDidStop;
-(void)cameraViewfinderSession:(id)arg1 previewStreamDidCloseWithStatus:(int)arg2 ;
-(void)_performPreviewStateTransitionsIfNeeded;
-(void)burstCaptureWillStart;
-(void)cameraViewfinderSessionPreviewStreamDidOpen:(id)arg1 ;
-(BOOL)_supportsMomentCapture;
-(void)captureDeviceDidChange;
-(long long)_flashSupport;
-(oneway void)xpc_setPreviewEndpoint:(id)arg1 ;
-(void)showingLivePreviewDidChange;
-(void)openPreview;
-(long long)_captureMode;
-(void)captureDeviceDidChange:(long long)arg1 ;
-(void)dealloc;
-(void)burstCaptureNumberOfPhotosDidChange:(unsigned long long)arg1 ;
-(id)_supportedCaptureDevices;
@end

