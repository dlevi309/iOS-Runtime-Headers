/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureConnectionConfiguration.h>

@interface FigVideoCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {

	int _outputFormat;
	int _outputWidth;
	int _outputHeight;
	int _videoStabilizationMethod;
	BOOL _mirroringEnabled;
	BOOL _physicalMirroringForMovieRecordingEnabled;
	int _orientation;
	int _retainedBufferCount;
	BOOL _cameraIntrinsicMatrixDeliveryEnabled;
	BOOL _livePhotoMetadataWritingEnabled;

}

@property (readonly) BOOL previewDepthFilterRenderingEnabled; 
@property (readonly) BOOL previewDepthDataDeliveryEnabled; 
@property (readonly) BOOL previewFilterRenderingEnabled; 
@property (readonly) BOOL irisVISEnabled; 
@property (readonly) int irisVISMethod; 
@property (readonly) BOOL irisSDOFEnabled; 
@property (readonly) FigCaptureVideoTransform transform; 
@property (assign,nonatomic) int outputFormat;                                            //@synthesize outputFormat=_outputFormat - In the implementation block
@property (assign,nonatomic) int outputWidth;                                             //@synthesize outputWidth=_outputWidth - In the implementation block
@property (assign,nonatomic) int outputHeight;                                            //@synthesize outputHeight=_outputHeight - In the implementation block
@property (assign,nonatomic) int videoStabilizationMethod;                                //@synthesize videoStabilizationMethod=_videoStabilizationMethod - In the implementation block
@property (assign,nonatomic) BOOL mirroringEnabled;                                       //@synthesize mirroringEnabled=_mirroringEnabled - In the implementation block
@property (assign,nonatomic) BOOL physicalMirroringForMovieRecordingEnabled;              //@synthesize physicalMirroringForMovieRecordingEnabled=_physicalMirroringForMovieRecordingEnabled - In the implementation block
@property (assign,nonatomic) int orientation;                                             //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) int retainedBufferCount;                                     //@synthesize retainedBufferCount=_retainedBufferCount - In the implementation block
@property (assign,nonatomic) BOOL cameraIntrinsicMatrixDeliveryEnabled;                   //@synthesize cameraIntrinsicMatrixDeliveryEnabled=_cameraIntrinsicMatrixDeliveryEnabled - In the implementation block
@property (assign,nonatomic) BOOL livePhotoMetadataWritingEnabled;                        //@synthesize livePhotoMetadataWritingEnabled=_livePhotoMetadataWritingEnabled - In the implementation block
+(int)videoStabilizationMethod:(id)arg1 ;
+(BOOL)cameraIntrinsicMatrixDeliveryEnabled:(id)arg1 doingFaceTracking:(BOOL)arg2 ;
+(BOOL)physicalMirroringForMovieRecordingEnabled:(id)arg1 ;
-(void)setMirroringEnabled:(BOOL)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setVideoStabilizationMethod:(int)arg1 ;
-(void)setOutputFormat:(int)arg1 ;
-(int)outputWidth;
-(int)outputHeight;
-(BOOL)previewFilterRenderingEnabled;
-(int)outputFormat;
-(BOOL)mirroringEnabled;
-(void)setOutputWidth:(int)arg1 ;
-(FigCaptureVideoTransform)_transformWithSourceDimensions:(SCD_Struct_BW2)arg1 forceSourceDimensions:(BOOL)arg2 ;
-(void)setRetainedBufferCount:(int)arg1 ;
-(int)retainedBufferCount;
-(BOOL)irisSDOFEnabled;
-(BOOL)physicalMirroringForMovieRecordingEnabled;
-(FigCaptureVideoTransform)transform;
-(BOOL)previewDepthFilterRenderingEnabled;
-(int)videoStabilizationMethod;
-(void)setPhysicalMirroringForMovieRecordingEnabled:(BOOL)arg1 ;
-(id)description;
-(FigCaptureVideoTransform)depthDataTransformWithSourceDimensions;
-(BOOL)livePhotoMetadataWritingEnabled;
-(BOOL)cameraIntrinsicMatrixDeliveryEnabled;
-(BOOL)irisVISEnabled;
-(BOOL)previewDepthDataDeliveryEnabled;
-(int)orientation;
-(BOOL)requiresScalingForInputTransForm:(FigCaptureVideoTransform)arg1 nodeName:(id)arg2 ;
-(FigCaptureVideoTransform)depthDataTransform;
-(void)setLivePhotoMetadataWritingEnabled:(BOOL)arg1 ;
-(int)irisVISMethod;
-(void)setCameraIntrinsicMatrixDeliveryEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setOrientation:(int)arg1 ;
-(void)setOutputHeight:(int)arg1 ;
@end

