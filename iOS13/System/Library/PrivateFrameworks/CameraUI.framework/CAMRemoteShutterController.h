/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<CAMRemoteShutterDelegate>)delegate;
-(void)setDelegate:(id<CAMRemoteShutterDelegate>)arg1 ;
-(CCCameraConnection *)connection;
-(void)setConnection:(CCCameraConnection *)arg1 ;
-(void)setZoomAmount:(double)arg1 ;
-(double)zoomAmount;
-(long long)hdrMode;
-(void)setHdrMode:(long long)arg1 ;
-(BOOL)isConnected;
-(long long)_currentMode;
-(void)openConnection;
-(void)closeConnection;
-(long long)flashMode;
-(void)setFlashMode:(long long)arg1 ;
-(void)createConnectionIfNecessary;
-(long long)captureDevice;
-(void)setCaptureDevice:(long long)arg1 ;
-(void)_enterBackground:(id)arg1 ;
-(void)setCaptureMode:(long long)arg1 ;
-(BOOL)isShowingPreview;
-(void)_enterForeground:(id)arg1 ;
-(BOOL)cameraConnectionEndBurstCapture:(id)arg1 ;
-(long long)cameraConnectionOrientation:(id)arg1 ;
-(BOOL)cameraConnection:(id)arg1 setCaptureMode:(long long)arg2 ;
-(void)cameraConnection:(id)arg1 takePhotoWithCountdown:(unsigned long long)arg2 ;
-(BOOL)cameraConnectionBeginBurstCapture:(id)arg1 ;
-(BOOL)cameraConnectionStartCapture:(id)arg1 ;
-(BOOL)cameraConnectionStopCapture:(id)arg1 ;
-(void)cameraConnection:(id)arg1 setFocusPoint:(CGPoint)arg2 ;
-(id)cameraConnectionSupportedCaptureModes:(id)arg1 ;
-(long long)cameraConnectionCaptureMode:(id)arg1 ;
-(BOOL)cameraConnectionToggleCameraDeviceSupport:(id)arg1 ;
-(BOOL)cameraConnectionZoomSupport:(id)arg1 ;
-(double)cameraConnectionZoomAmount:(id)arg1 ;
-(long long)cameraConnectionFlashSupport:(id)arg1 ;
-(long long)cameraConnectionFlashMode:(id)arg1 ;
-(long long)cameraConnectionHDRSupport:(id)arg1 ;
-(long long)cameraConnectionHDRMode:(id)arg1 ;
-(long long)cameraConnectionIrisSupport:(id)arg1 ;
-(long long)cameraConnectionIrisMode:(id)arg1 ;
-(BOOL)cameraConnectionBurstSupport:(id)arg1 ;
-(BOOL)cameraConnectionIsShowingLivePreview:(id)arg1 ;
-(void)cameraConnectionCancelCountdown:(id)arg1 ;
-(void)cameraConnection:(id)arg1 setZoomAmount:(double)arg2 ;
-(void)cameraConnection:(id)arg1 setFlashMode:(long long)arg2 ;
-(void)cameraConnection:(id)arg1 setHDRMode:(long long)arg2 ;
-(void)cameraConnection:(id)arg1 setIrisMode:(long long)arg2 ;
-(void)cameraConnectionToggleCameraDevice:(id)arg1 ;
-(void)burstCaptureWillStart;
-(void)burstCaptureNumberOfPhotosDidChange:(unsigned long long)arg1 ;
-(void)burstCaptureDidStop;
-(void)willStartCapturing;
-(void)didStartCaptureTimer;
-(void)didStopCapture;
-(void)countdownCanceled;
-(void)setShallowDepthOfFieldStatus:(long long)arg1 ;
-(long long)shallowDepthOfFieldStatus;
-(void)setIrisMode:(long long)arg1 ;
-(long long)irisMode;
-(long long)captureMode;
-(CAMMotionController *)_motionController;
-(void)setAvailableCaptureModes:(NSArray *)arg1 ;
-(void)setShowingPreview:(BOOL)arg1 ;
-(BOOL)isCapturingVideo;
-(void)sendThumbnailImage:(id)arg1 isVideo:(BOOL)arg2 ;
-(BOOL)isCapturingTimelapse;
-(NSArray *)availableCaptureModes;
-(void)applyCaptureConfiguration:(id)arg1 ;
-(void)_captureOrientationDidChange:(id)arg1 ;
-(long long)_convertMode:(long long)arg1 ;
-(void)_sendMode;
-(void)sendThumbnailData:(id)arg1 isVideo:(BOOL)arg2 ;
-(id)initWithCaptureConfiguration:(id)arg1 motionController:(id)arg2 ;
-(BOOL)cameraConnectionIsMirrored:(id)arg1 ;
-(void)setCapturingVideo:(BOOL)arg1 ;
-(void)setCapturingTimelapse:(BOOL)arg1 ;
@end
