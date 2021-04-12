/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
*/

@class NSString, CALayer;


@protocol CRCaptureSessionManager <NSObject>
@property (assign,nonatomic) long long cameraPosition; 
@property (nonatomic,copy) NSString * cameraMode; 
@property (assign,nonatomic) long long whiteBalanceMode; 
@property (assign,nonatomic) long long focusMode; 
@property (assign,nonatomic) long long exposureMode; 
@property (assign,nonatomic) long long torchMode; 
@property (__weak) id<AVCaptureVideoDataOutputSampleBufferDelegate> captureSessionDelegate; 
@property (__weak) id<AVCaptureMetadataOutputObjectsDelegate> captureSessionMetadataDelegate; 
@property (nonatomic,readonly) CALayer * previewLayer; 
@property (retain) NSString * currentDeviceID; 
@property (assign) BOOL enableMetadataOutput; 
@property (assign) CGSize cameraResolution; 
@required
-(BOOL)isRunning;
-(void)stopRunning;
-(void)startRunning;
-(long long)torchMode;
-(void)setTorchMode:(long long)arg1;
-(long long)focusMode;
-(void)setFocusMode:(long long)arg1;
-(BOOL)isFocusPointOfInterestSupported;
-(CGPoint*)focusPointOfInterest;
-(BOOL)isAdjustingFocus;
-(long long)exposureMode;
-(void)setExposureMode:(long long)arg1;
-(long long)whiteBalanceMode;
-(void)setWhiteBalanceMode:(long long)arg1;
-(void)setPreviewOrientation:(long long)arg1;
-(long long)cameraPosition;
-(void)setCameraResolution:(CGSize)arg1;
-(int)targetVideoFormat;
-(NSString *)cameraMode;
-(id<AVCaptureVideoDataOutputSampleBufferDelegate>)captureSessionDelegate;
-(BOOL)enableMetadataOutput;
-(id<AVCaptureMetadataOutputObjectsDelegate>)captureSessionMetadataDelegate;
-(void)setCameraPosition:(long long)arg1;
-(void)setCurrentDeviceID:(id)arg1;
-(BOOL)switchToCamera:(long long)arg1;
-(void)refocusOnPoint:(CGPoint)arg1 exposure:(BOOL)arg2;
-(CGSize)cameraResolution;
-(CGPoint*)convertCameraPoint:(CGPoint)arg1 toLayer:(id)arg2 flipped:(BOOL)arg3;
-(CALayer *)previewLayer;
-(void)setupCameraSession;
-(void)teardownCameraSession;
-(BOOL)toggleCamera;
-(BOOL)switchToCameraWithDeviceID:(id)arg1;
-(void)refocusOnPoint:(CGPoint)arg1;
-(void)resetFocus;
-(CGPoint*)convertCameraPoint:(CGPoint)arg1 fromLayer:(id)arg2;
-(CGPoint*)convertCameraPoint:(CGPoint)arg1 toLayer:(id)arg2;
-(CGRect*)convertCameraRect:(CGRect)arg1 fromLayer:(id)arg2;
-(CGPoint*)convertCameraPointOCR:(CGPoint)arg1 toLayer:(id)arg2 flipped:(BOOL)arg3;
-(void)highISOAdjustExposure;
-(BOOL)isPreviewVideoMirrored;
-(CGRect*)previewVisibleRect;
-(void)setCameraMode:(id)arg1;
-(void)setCaptureSessionDelegate:(id)arg1;
-(void)setCaptureSessionMetadataDelegate:(id)arg1;
-(NSString *)currentDeviceID;
-(void)setEnableMetadataOutput:(BOOL)arg1;

@end

