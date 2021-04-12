/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARImageBasedTechnique.h>

@protocol OS_dispatch_queue;
@class ARImageScalingTechnique, ARImageRotationTechnique, ARImageCroppingTechnique, ARMattingImageMetaData, ARMLImageDownScalingResultData, NSObject;

@interface ARMLImageDownScalingTechnique : ARImageBasedTechnique {

	ARImageScalingTechnique* _imageScalingTechnique;
	ARImageScalingTechnique* _mattingImageScalingTechnique;
	ARImageRotationTechnique* _imageRotationTechnique;
	ARImageCroppingTechnique* _imageCroppingTechnique;
	vImageCVImageFormatRef _cvImageFormatRef;
	CVPixelBufferPoolRef _bgraPixelBufferPool;
	CVPixelBufferPoolRef _bgraMattingPixelBufferPool;
	int _lockedOrientation;
	ARMattingImageMetaData* _mattingImageData;
	ARMLImageDownScalingResultData* _downSamplingResultData;
	BOOL _enableDoubleMLResolutionForIPad;
	NSObject*<OS_dispatch_queue> _processingQueue;
	double _resultLatency;
	BOOL _deterministic;
	BOOL _centerCropImage;
	BOOL _generateMattingMetaData;
	BOOL _resizeUltraWideImage;
	/*^block*/id _wideRotationStrategy;
	/*^block*/id _ultrawideRotationStrategy;
	CGSize _imageSize;

}

@property (assign,nonatomic) BOOL centerCropImage;                      //@synthesize centerCropImage=_centerCropImage - In the implementation block
@property (nonatomic,readonly) CGSize imageSize;                        //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) BOOL generateMattingMetaData;              //@synthesize generateMattingMetaData=_generateMattingMetaData - In the implementation block
@property (assign,nonatomic) BOOL resizeUltraWideImage;                 //@synthesize resizeUltraWideImage=_resizeUltraWideImage - In the implementation block
@property (nonatomic,copy) id wideRotationStrategy;                     //@synthesize wideRotationStrategy=_wideRotationStrategy - In the implementation block
@property (nonatomic,copy) id ultrawideRotationStrategy;                //@synthesize ultrawideRotationStrategy=_ultrawideRotationStrategy - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(CGSize)imageSize;
-(id)nodeName;
-(id)processData:(id)arg1 ;
-(id)_fullDescription;
-(void)prepare:(BOOL)arg1 ;
-(double)requiredTimeInterval;
-(BOOL)centerCropImage;
-(id)_downscaledResultDataFromImageData:(id)arg1 croppedRect:(CGRect)arg2 ;
-(long long)_getDeviceOrientation;
-(id)_imageDataForNeuralNetwork:(id)arg1 scaledSize:(CGSize)arg2 deviceOrientation:(long long)arg3 pRegionOfInterest:(CGSize*)arg4 pRotationOfResultTensor:(long long*)arg5 ;
-(id)wideRotationStrategy;
-(id)ultrawideRotationStrategy;
-(/*^block*/id)defaultRotationStrategy;
-(id)_convertImageColorSpace:(id)arg1 pPoolToUse:(_CVPixelBufferPool*)arg2 ;
-(BOOL)generateMattingMetaData;
-(id)initWithSize:(CGSize)arg1 requiredTimeInterval:(double)arg2 ;
-(void)lockOrientation:(long long)arg1 ;
-(void)setCenterCropImage:(BOOL)arg1 ;
-(void)setGenerateMattingMetaData:(BOOL)arg1 ;
-(BOOL)resizeUltraWideImage;
-(void)setResizeUltraWideImage:(BOOL)arg1 ;
-(void)setWideRotationStrategy:(id)arg1 ;
-(void)setUltrawideRotationStrategy:(id)arg1 ;
@end

