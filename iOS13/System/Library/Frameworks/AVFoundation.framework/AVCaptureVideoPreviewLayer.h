/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
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
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)orientation;
-(long long)_orientation;
-(AVCaptureConnection *)connection;
-(BOOL)isPaused;
-(void)setOrientation:(long long)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(AVCaptureSession *)session;
-(void)setSession:(AVCaptureSession *)arg1 ;
-(id)_input;
-(void)setPaused:(BOOL)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(BOOL)isPreviewing;
-(void)layoutSublayers;
-(void)removeConnection:(id)arg1 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(NSString *)videoGravity;
-(void)setVideoGravity:(NSString *)arg1 ;
-(id)weakReference;
-(int)changeSeed;
-(void)bumpChangeSeed;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)connectionMediaTypes;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(BOOL)isDepthDataDeliveryEnabled;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(id)_initWithSession:(id)arg1 makeConnection:(BOOL)arg2 ;
-(id)sinkID;
-(void)performFigCaptureSessionOperationSafelyUsingBlock:(/*^block*/id)arg1 ;
-(void)setCaptureDeviceTransformNeedsUpdate;
-(CGAffineTransform)captureDeviceTransformForSensorSize:(CGSize)arg1 previewSize:(CGSize)arg2 sensorToPreviewVTScalingMode:(id)arg3 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(void)didUpdatePreviewImageQueueSlot:(unsigned)arg1 imageQueue:(id)arg2 rotationDegrees:(double)arg3 size:(CGSize)arg4 ;
-(BOOL)isFilterRenderingEnabled;
-(void)setFilterRenderingEnabled:(BOOL)arg1 ;
-(void)setSinkID:(id)arg1 ;
-(id)videoPreviewFilters;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(void)attachToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(CGRect)metadataOutputRectOfInterestForRect:(CGRect)arg1 ;
-(CGRect)rectForMetadataOutputRectOfInterest:(CGRect)arg1 ;
-(unsigned)imageQueueSlot;
-(double)previewRotationDegrees;
-(BOOL)automaticallyAdjustsMirroring;
-(id)initWithSessionWithNoConnection:(id)arg1 ;
-(void)centerSublayer:(long long)arg1 ;
-(void)setSessionWithNoConnection:(id)arg1 ;
-(BOOL)_automaticallyAdjustsMirroring;
-(BOOL)_isMirrored;
-(BOOL)isDepthDataDeliverySupported;
-(BOOL)isUnoptimizedFilterRenderingEnabled;
-(void)_updatePreviewTransforms;
-(void)_updateDepthDataDeliverySupported;
-(BOOL)isMirroringSupported;
-(BOOL)isChromaNoiseReductionSupported;
-(BOOL)_setVideoPreviewFilters:(id)arg1 checkForExceptionalInput:(BOOL)arg2 exceptionReason:(id*)arg3 ;
-(BOOL)_filtersAreOptimized:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)_setSensorAndEstimatedPreviewSizes;
-(void)_updateCaptureDeviceTransform;
-(void)didUpdatePreviewFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(BOOL)isOrientationSupported;
-(void)setAutomaticallyAdjustsMirroring:(BOOL)arg1 ;
-(BOOL)isMirrored;
-(void)setMirrored:(BOOL)arg1 ;
-(BOOL)isChromaNoiseReductionEnabled;
-(void)setChromaNoiseReductionEnabled:(BOOL)arg1 ;
-(void)setVideoPreviewFilters:(id)arg1 ;
-(void)setUnoptimizedFilterRenderingEnabled:(BOOL)arg1 ;
-(CGPoint)captureDevicePointOfInterestForPoint:(CGPoint)arg1 ;
-(CGPoint)pointForCaptureDevicePointOfInterest:(CGPoint)arg1 ;
-(id)transformedMetadataObjectForMetadataObject:(id)arg1 ;
@end

