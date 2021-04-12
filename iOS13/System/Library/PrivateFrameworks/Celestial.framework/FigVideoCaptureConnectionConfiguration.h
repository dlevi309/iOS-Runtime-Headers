/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureConnectionConfiguration.h>

@interface FigVideoCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {

	int _outputFormat;
	int _outputWidth;
	int _outputHeight;
	int _videoStabilizationMethod;
	BOOL _mirroringEnabled;
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
@property (assign,nonatomic) int outputFormat;                                       //@synthesize outputFormat=_outputFormat - In the implementation block
@property (assign,nonatomic) int outputWidth;                                        //@synthesize outputWidth=_outputWidth - In the implementation block
@property (assign,nonatomic) int outputHeight;                                       //@synthesize outputHeight=_outputHeight - In the implementation block
@property (assign,nonatomic) int videoStabilizationMethod;                           //@synthesize videoStabilizationMethod=_videoStabilizationMethod - In the implementation block
@property (assign,nonatomic) BOOL mirroringEnabled;                                  //@synthesize mirroringEnabled=_mirroringEnabled - In the implementation block
@property (assign,nonatomic) int orientation;                                        //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) int retainedBufferCount;                                //@synthesize retainedBufferCount=_retainedBufferCount - In the implementation block
@property (assign,nonatomic) BOOL cameraIntrinsicMatrixDeliveryEnabled;              //@synthesize cameraIntrinsicMatrixDeliveryEnabled=_cameraIntrinsicMatrixDeliveryEnabled - In the implementation block
@property (assign,nonatomic) BOOL livePhotoMetadataWritingEnabled;                   //@synthesize livePhotoMetadataWritingEnabled=_livePhotoMetadataWritingEnabled - In the implementation block
+(BOOL)cameraIntrinsicMatrixDeliveryEnabled:(id)arg1 doingFaceTracking:(BOOL)arg2 ;
+(int)videoStabilizationMethod:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FigCaptureVideoTransform)transform;
-(int)outputFormat;
-(void)setOutputFormat:(int)arg1 ;
-(int)orientation;
-(void)setOrientation:(int)arg1 ;
-(void)setMirroringEnabled:(BOOL)arg1 ;
-(BOOL)cameraIntrinsicMatrixDeliveryEnabled;
-(BOOL)livePhotoMetadataWritingEnabled;
-(void)setVideoStabilizationMethod:(int)arg1 ;
-(void)setLivePhotoMetadataWritingEnabled:(BOOL)arg1 ;
-(void)setOutputWidth:(int)arg1 ;
-(void)setOutputHeight:(int)arg1 ;
-(void)setRetainedBufferCount:(int)arg1 ;
-(void)setCameraIntrinsicMatrixDeliveryEnabled:(BOOL)arg1 ;
-(int)outputWidth;
-(int)outputHeight;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(int)retainedBufferCount;
-(BOOL)mirroringEnabled;
-(BOOL)irisSDOFEnabled;
-(BOOL)irisVISEnabled;
-(int)irisVISMethod;
-(int)videoStabilizationMethod;
-(BOOL)requiresScalingForInputTransForm:(FigCaptureVideoTransform)arg1 nodeName:(id)arg2 ;
-(BOOL)previewDepthFilterRenderingEnabled;
-(BOOL)previewDepthDataDeliveryEnabled;
-(FigCaptureVideoTransform)depthDataTransform;
-(FigCaptureVideoTransform)depthDataTransformWithSourceDimensions;
-(FigCaptureVideoTransform)_transformWithSourceDimensions:(SCD_Struct_BW19)arg1 forceSourceDimensions:(BOOL)arg2 ;
-(BOOL)previewFilterRenderingEnabled;
@end

