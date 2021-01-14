/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTorchMode:(long long)arg1;
-(long long)cameraPosition;
-(long long)torchMode;
-(void)startRunning;
-(BOOL)isFocusPointOfInterestSupported;
-(void)setFocusMode:(long long)arg1;
-(long long)focusMode;
-(void)stopRunning;
-(long long)whiteBalanceMode;
-(BOOL)isRunning;
-(void)setPreviewOrientation:(long long)arg1;
-(void)setExposureMode:(long long)arg1;
-(long long)exposureMode;
-(void)setWhiteBalanceMode:(long long)arg1;
-(CGPoint*)focusPointOfInterest;
-(BOOL)isAdjustingFocus;
-(BOOL)toggleCamera;
-(void)setCameraPosition:(long long)arg1;
-(CALayer *)previewLayer;
-(NSString *)cameraMode;
-(void)setupCameraSession;
-(void)setCameraResolution:(CGSize)arg1;
-(int)targetVideoFormat;
-(id<AVCaptureVideoDataOutputSampleBufferDelegate>)captureSessionDelegate;
-(BOOL)enableMetadataOutput;
-(id<AVCaptureMetadataOutputObjectsDelegate>)captureSessionMetadataDelegate;
-(void)setCurrentDeviceID:(id)arg1;
-(BOOL)switchToCamera:(long long)arg1;
-(void)refocusOnPoint:(CGPoint)arg1 exposure:(BOOL)arg2;
-(CGSize)cameraResolution;
-(CGPoint*)convertCameraPoint:(CGPoint)arg1 toLayer:(id)arg2 flipped:(BOOL)arg3;
-(void)teardownCameraSession;
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

