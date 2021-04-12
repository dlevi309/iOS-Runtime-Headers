/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureOutputInternal, NSArray;

@interface AVCaptureOutput : NSObject {

	AVCaptureOutputInternal* _outputInternal;

}

@property (nonatomic,readonly) NSArray * connections; 
+(void)initialize;
+(id)availableVideoCodecTypesForSourceDevice:(id)arg1 sourceFormat:(id)arg2 outputDimensions:(SCD_Struct_AV19)arg3 fileType:(id)arg4 videoCodecTypesWhiteList:(id)arg5 ;
+(id)allOutputSubclasses;
+(long long)dataDroppedReasonFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)bumpChangeSeed;
-(void)attachToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(CGRect)metadataOutputRectOfInterestForRect:(CGRect)arg1 ;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)sinkID;
-(NSArray *)connections;
-(void)setSinkID:(id)arg1 ;
-(int)changeSeed;
-(BOOL)hasRequiredOutputFormatForConnection:(id)arg1 ;
-(id)_inputForConnection:(id)arg1 ;
-(CGSize)outputSizeForSourceFormat:(id)arg1 ;
-(id)liveConnections;
-(id)_recommendedVideoOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 videoCodec:(id)arg3 isIris:(BOOL)arg4 ;
-(id)_recommendedAudioOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 fileType:(id)arg3 ;
-(void)performBlockOnSessionNotifyingThread:(/*^block*/id)arg1 ;
-(void)handleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(unsigned)requiredOutputFormatForConnection:(id)arg1 ;
-(id)transformedMetadataObjectForMetadataObject:(id)arg1 connection:(id)arg2 ;
-(id)firstEnabledConnectionForMediaType:(id)arg1 ;
-(id)recommendedOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 videoCodecType:(id)arg3 fileType:(id)arg4 isIris:(BOOL)arg5 ;
-(BOOL)updateVideoSettingsForConnection:(id)arg1 ;
-(CGRect)rectForMetadataOutputRectOfInterest:(CGRect)arg1 ;
-(void)performFigCaptureSessionOperationSafelyUsingBlock:(/*^block*/id)arg1 ;
-(id)connectionMediaTypes;
-(void)removeConnection:(id)arg1 ;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)session;
-(id)connectionWithMediaType:(id)arg1 ;
-(void)setSession:(id)arg1 ;
-(id)initSubclass;
-(void)updateMetadataTransformForSourceFormat:(id)arg1 ;
-(BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)arg1 ;
-(BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)arg1 ;
-(void)dealloc;
@end

