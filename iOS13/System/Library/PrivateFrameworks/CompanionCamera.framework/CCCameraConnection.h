/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)open;
-(void)close;
-(id<CCCameraConnectionDelegate>)delegate;
-(void)setDelegate:(id<CCCameraConnectionDelegate>)arg1 ;
-(BOOL)isOpen;
-(double)_zoomAmount;
-(long long)_hdrMode;
-(long long)_flashMode;
-(void)cameraViewfinderSession:(id)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_CC0)arg4 ;
-(void)cameraViewfinderSessionPreviewStreamDidOpen:(id)arg1 ;
-(void)cameraViewfinderSession:(id)arg1 previewStreamDidCloseWithStatus:(int)arg2 ;
-(void)cameraViewfinder:(id)arg1 viewfinderSessionDidBegin:(id)arg2 ;
-(void)cameraViewfinder:(id)arg1 viewfinderSessionDidEnd:(id)arg2 ;
-(void)_handleInvalidation;
-(void)_handleInterruption;
-(long long)_captureMode;
-(long long)_currentOrientation;
-(void)_checkin;
-(void)_zoomTimerFired;
-(oneway void)xpc_ensureSwitchedToOneOfSupportedCaptureModes:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)takePhotoWithCountdown:(unsigned long long)arg1 ;
-(oneway void)xpc_beginBurstCaptureWithReply:(/*^block*/id)arg1 ;
-(oneway void)xpc_endBurstCaptureWithReply:(/*^block*/id)arg1 ;
-(oneway void)xpc_setCaptureMode:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)xpc_startCaptureWithMode:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)xpc_stopCaptureWithReply:(/*^block*/id)arg1 ;
-(oneway void)xpc_setPreviewEndpoint:(id)arg1 ;
-(oneway void)xpc_setFocusPoint:(id)arg1 ;
-(oneway void)xpc_fetchCurrentStateIncludingSupportedCaptureModes:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)xpc_cancelCountdown;
-(oneway void)xpc_setZoom:(float)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)xpc_setFlashMode:(long long)arg1 ;
-(oneway void)xpc_setHDRMode:(long long)arg1 ;
-(oneway void)xpc_setIrisMode:(long long)arg1 ;
-(oneway void)xpc_toggleCameraDevice;
-(void)closePreview;
-(void)didUpdateThumbnailWithData:(id)arg1 isVideo:(BOOL)arg2 ;
-(BOOL)_shouldReportEvent;
-(long long)_irisMode;
-(BOOL)_isShowingLivePreview;
-(id)_supportedCaptureModes;
-(void)openPreview;
-(BOOL)_toggleCameraDeviceSupport;
-(BOOL)_zoomSupport;
-(long long)_flashSupport;
-(long long)_hdrSupport;
-(long long)_irisSupport;
-(BOOL)_supportsMomentCapture;
-(BOOL)_burstSupport;
-(void)_performPreviewStateTransitionsIfNeeded;
-(void)photoTaken:(id)arg1 ;
-(void)burstCaptureWillStart;
-(void)burstCaptureNumberOfPhotosDidChange:(unsigned long long)arg1 ;
-(void)burstCaptureDidStop;
-(void)willStartCapturing;
-(void)didStartCaptureTimer;
-(void)didStopCapture;
-(void)modeSelected:(long long)arg1 ;
-(void)switchedMirroringMode:(BOOL)arg1 ;
-(void)switchedOrientation:(long long)arg1 ;
-(void)countdownCanceled;
-(void)zoomDidChange:(double)arg1 ;
-(void)didUpdateShallowDepthOfFieldStatus:(long long)arg1 ;
-(void)captureDeviceDidChange;
-(void)flashModeDidChange;
-(void)hdrModeDidChange;
-(void)irisModeDidChange;
-(void)showingLivePreviewDidChange;
-(BOOL)isPreviewConnected;
@end

