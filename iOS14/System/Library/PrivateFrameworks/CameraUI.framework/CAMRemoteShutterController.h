/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/CCCameraConnectionDelegate.h>

@protocol CAMRemoteShutterDelegate;
@class NSArray, CCCameraConnection, CAMMotionController, NSString;

@interface CAMRemoteShutterController : NSObject <CCCameraConnectionDelegate> {

	BOOL _showingPreview;
	BOOL _capturingVideo;
	BOOL _capturingTimelapse;
	NSArray* _availableCaptureModes;
	long long _captureMode;
	long long _captureDevice;
	long long _flashMode;
	long long _hdrMode;
	long long _irisMode;
	double _zoomAmount;
	long long _shallowDepthOfFieldStatus;
	id<CAMRemoteShutterDelegate> _delegate;
	CCCameraConnection* _connection;
	CAMMotionController* __motionController;

}

@property (nonatomic,retain) CCCameraConnection * connection;                                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) CAMMotionController * _motionController;                        //@synthesize _motionController=__motionController - In the implementation block
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (assign,getter=isShowingPreview,nonatomic) BOOL showingPreview;                      //@synthesize showingPreview=_showingPreview - In the implementation block
@property (nonatomic,retain) NSArray * availableCaptureModes;                                  //@synthesize availableCaptureModes=_availableCaptureModes - In the implementation block
@property (assign,nonatomic) long long captureMode;                                            //@synthesize captureMode=_captureMode - In the implementation block
@property (assign,nonatomic) long long captureDevice;                                          //@synthesize captureDevice=_captureDevice - In the implementation block
@property (assign,nonatomic) long long flashMode;                                              //@synthesize flashMode=_flashMode - In the implementation block
@property (assign,nonatomic) long long hdrMode;                                                //@synthesize hdrMode=_hdrMode - In the implementation block
@property (assign,nonatomic) long long irisMode;                                               //@synthesize irisMode=_irisMode - In the implementation block
@property (assign,nonatomic) double zoomAmount;                                                //@synthesize zoomAmount=_zoomAmount - In the implementation block
@property (assign,nonatomic) long long shallowDepthOfFieldStatus;                              //@synthesize shallowDepthOfFieldStatus=_shallowDepthOfFieldStatus - In the implementation block
@property (assign,getter=isCapturingVideo,nonatomic) BOOL capturingVideo;                      //@synthesize capturingVideo=_capturingVideo - In the implementation block
@property (assign,getter=isCapturingTimelapse,nonatomic) BOOL capturingTimelapse;              //@synthesize capturingTimelapse=_capturingTimelapse - In the implementation block
@property (assign,nonatomic,__weak) id<CAMRemoteShutterDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)_currentMode;
-(void)setCapturingTimelapse:(BOOL)arg1 ;
-(CAMMotionController *)_motionController;
-(void)setFlashMode:(long long)arg1 ;
-(void)setShallowDepthOfFieldStatus:(long long)arg1 ;
-(void)applyCaptureConfiguration:(id)arg1 ;
-(void)openConnection;
-(BOOL)isConnected;
-(long long)flashMode;
-(void)setAvailableCaptureModes:(NSArray *)arg1 ;
-(long long)captureDevice;
-(BOOL)cameraConnection:(id)arg1 setCaptureMode:(long long)arg2 ;
-(long long)shallowDepthOfFieldStatus;
-(void)closeConnection;
-(long long)captureMode;
-(BOOL)cameraConnectionBeginBurstCapture:(id)arg1 ;
-(void)cameraConnection:(id)arg1 setHDRMode:(long long)arg2 ;
-(long long)hdrMode;
-(BOOL)cameraConnectionZoomSupport:(id)arg1 ;
-(long long)cameraConnectionHDRMode:(id)arg1 ;
-(BOOL)cameraConnectionStopCapture:(id)arg1 ;
-(void)cameraConnectionCancelCountdown:(id)arg1 ;
-(id<CAMRemoteShutterDelegate>)delegate;
-(long long)cameraConnectionCaptureDevice:(id)arg1 ;
-(void)countdownCanceled;
-(void)cameraConnection:(id)arg1 setZoomAmount:(double)arg2 ;
-(double)cameraConnectionZoomAmount:(id)arg1 ;
-(void)setIrisMode:(long long)arg1 ;
-(BOOL)cameraConnectionEndBurstCapture:(id)arg1 ;
-(BOOL)cameraConnectionStartCapture:(id)arg1 ;
-(long long)irisMode;
-(NSArray *)availableCaptureModes;
-(long long)cameraConnectionFlashMode:(id)arg1 ;
-(long long)_currentCaptureDevice;
-(void)cameraConnection:(id)arg1 setFlashMode:(long long)arg2 ;
-(long long)cameraConnectionIrisMode:(id)arg1 ;
-(void)setCaptureDevice:(long long)arg1 ;
-(void)setDelegate:(id<CAMRemoteShutterDelegate>)arg1 ;
-(BOOL)cameraConnectionIsShowingLivePreview:(id)arg1 ;
-(long long)_convertMode:(long long)arg1 ;
-(void)cameraConnection:(id)arg1 takePhotoWithCountdown:(unsigned long long)arg2 ;
-(CCCameraConnection *)connection;
-(void)cameraConnectionSuspend:(id)arg1 ;
-(long long)cameraConnectionIrisSupport:(id)arg1 ;
-(void)cameraConnection:(id)arg1 setFocusPoint:(CGPoint)arg2 ;
-(BOOL)cameraConnectionToggleCameraDeviceSupport:(id)arg1 ;
-(id)cameraConnectionSupportedCaptureModes:(id)arg1 ;
-(void)sendThumbnailImage:(id)arg1 isVideo:(BOOL)arg2 ;
-(BOOL)cameraConnectionIsMirrored:(id)arg1 ;
-(void)_enterForeground:(id)arg1 ;
-(void)didStartCaptureTimer;
-(id)cameraConnectionSupportedCaptureDevices:(id)arg1 ;
-(void)setZoomAmount:(double)arg1 ;
-(void)_createConnectionIfNeeded;
-(void)didStopCapture;
-(double)zoomAmount;
-(void)cameraConnection:(id)arg1 setIrisMode:(long long)arg2 ;
-(BOOL)cameraConnectionBurstSupport:(id)arg1 ;
-(BOOL)isShowingPreview;
-(void)_sendMode;
-(void)setCapturingVideo:(BOOL)arg1 ;
-(long long)_convertCaptureDevice:(long long)arg1 ;
-(long long)cameraConnectionOrientation:(id)arg1 ;
-(void)setCaptureMode:(long long)arg1 ;
-(void)cameraConnectionToggleCameraDevice:(id)arg1 ;
-(BOOL)cameraConnection:(id)arg1 setCaptureDevice:(long long)arg2 ;
-(void)setShowingPreview:(BOOL)arg1 ;
-(id)initWithCaptureConfiguration:(id)arg1 motionController:(id)arg2 ;
-(void)createConnectionIfNecessary;
-(void)willStartCapturing;
-(long long)cameraConnectionFlashSupport:(id)arg1 ;
-(void)burstCaptureDidStop;
-(BOOL)cameraConnectionSupportsMomentCapture:(id)arg1 ;
-(void)burstCaptureWillStart;
-(void)setConnection:(CCCameraConnection *)arg1 ;
-(BOOL)isCapturingTimelapse;
-(void)sendThumbnailData:(id)arg1 isVideo:(BOOL)arg2 ;
-(long long)cameraConnectionHDRSupport:(id)arg1 ;
-(void)setHdrMode:(long long)arg1 ;
-(void)_enterBackground:(id)arg1 ;
-(BOOL)isCapturingVideo;
-(void)dealloc;
-(void)burstCaptureNumberOfPhotosDidChange:(unsigned long long)arg1 ;
-(void)_captureOrientationDidChange:(id)arg1 ;
-(long long)cameraConnectionCaptureMode:(id)arg1 ;
@end

