/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <QuartzCore/CALayer.h>

@class AVCaptureVideoPreviewLayerInternal, AVCaptureSession, AVCaptureConnection, NSString;

@interface AVCaptureVideoPreviewLayer : CALayer {

	AVCaptureVideoPreviewLayerInternal* _internal;

}

@property (nonatomic,retain) AVCaptureSession * session; 
@property (nonatomic,readonly) AVCaptureConnection * connection; 
@property (copy) NSString * videoGravity; 
@property (getter=isPreviewing,nonatomic,readonly) BOOL previewing; 
@property (getter=isOrientationSupported,nonatomic,readonly) BOOL orientationSupported; 
@property (assign,nonatomic) long long orientation; 
@property (getter=isMirroringSupported,nonatomic,readonly) BOOL mirroringSupported; 
@property (assign,nonatomic) BOOL automaticallyAdjustsMirroring; 
@property (assign,getter=isMirrored,nonatomic) BOOL mirrored; 
+(void)initialize;
+(id)layerWithSession:(id)arg1 ;
+(id)layerWithSessionWithNoConnection:(id)arg1 ;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)_setSensorAndEstimatedPreviewSizes;
-(BOOL)isDepthDataDeliveryEnabled;
-(void)layoutSublayers;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(long long)_orientation;
-(void)setVideoGravity:(NSString *)arg1 ;
-(void)setSessionWithNoConnection:(id)arg1 ;
-(BOOL)_isMirrored;
-(NSString *)videoGravity;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(void)bumpChangeSeed;
-(CGPoint)pointForCaptureDevicePointOfInterest:(CGPoint)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)setUnoptimizedFilterRenderingEnabled:(BOOL)arg1 ;
-(BOOL)_automaticallyAdjustsMirroring;
-(void)attachToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)setCaptureDeviceTransformNeedsUpdate;
-(BOOL)isPreviewing;
-(id)init;
-(CGRect)metadataOutputRectOfInterestForRect:(CGRect)arg1 ;
-(BOOL)isMirrored;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)setFilterRenderingEnabled:(BOOL)arg1 ;
-(void)_updatePreviewTransforms;
-(BOOL)isChromaNoiseReductionEnabled;
-(void)detachFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)sinkID;
-(void)setSinkID:(id)arg1 ;
-(int)changeSeed;
-(BOOL)isUnoptimizedFilterRenderingEnabled;
-(id)_initWithSession:(id)arg1 makeConnection:(BOOL)arg2 ;
-(id)videoPreviewFilters;
-(void)centerSublayer:(long long)arg1 ;
-(CGPoint)captureDevicePointOfInterestForPoint:(CGPoint)arg1 ;
-(BOOL)isChromaNoiseReductionSupported;
-(void)didUpdatePreviewFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(BOOL)automaticallyAdjustsMirroring;
-(void)didUpdatePreviewImageQueueSlot:(unsigned)arg1 imageQueue:(id)arg2 rotationDegrees:(double)arg3 size:(CGSize)arg4 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(void)setVideoPreviewFilters:(id)arg1 ;
-(CGRect)rectForMetadataOutputRectOfInterest:(CGRect)arg1 ;
-(id)weakReference;
-(BOOL)isFilterRenderingEnabled;
-(void)performFigCaptureSessionOperationSafelyUsingBlock:(/*^block*/id)arg1 ;
-(id)connectionMediaTypes;
-(void)setMirrored:(BOOL)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(BOOL)_filtersAreOptimized:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(unsigned)imageQueueSlot;
-(id)transformedMetadataObjectForMetadataObject:(id)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(BOOL)isDepthDataDeliverySupported;
-(id)_input;
-(BOOL)_setVideoPreviewFilters:(id)arg1 checkForExceptionalInput:(BOOL)arg2 exceptionReason:(id*)arg3 ;
-(id)initWithLayer:(id)arg1 ;
-(void)setChromaNoiseReductionEnabled:(BOOL)arg1 ;
-(void)setAutomaticallyAdjustsMirroring:(BOOL)arg1 ;
-(CGAffineTransform)captureDeviceTransformForSensorSize:(CGSize)arg1 previewSize:(CGSize)arg2 sensorToPreviewVTScalingMode:(id)arg3 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)_updateCaptureDeviceTransform;
-(AVCaptureSession *)session;
-(void)setBounds:(CGRect)arg1 ;
-(double)previewRotationDegrees;
-(void)setSession:(AVCaptureSession *)arg1 ;
-(AVCaptureConnection *)connection;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(BOOL)isMirroringSupported;
-(BOOL)isOrientationSupported;
-(long long)orientation;
-(void)_updateDepthDataDeliverySupported;
-(id)initWithSessionWithNoConnection:(id)arg1 ;
-(BOOL)isPaused;
-(void)dealloc;
-(void)setOrientation:(long long)arg1 ;
@end

