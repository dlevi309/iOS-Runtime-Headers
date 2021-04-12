/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface PILongExposureFusion : CIFilter {

	CIImage* _inputImage;
	CIImage* _inputStillImage;
	CIImage* _inputMaskImage;
	NSNumber* _inputRenderScale;
	NSNumber* _inputVideoScale;
	CIVector* _inputAlignmentExtent;
	CIVector* _inputAlignmentTransform;

}

@property (nonatomic,retain) CIImage * inputImage;                            //@synthesize inputImage=_inputImage - In the implementation block
@property (nonatomic,retain) CIImage * inputStillImage;                       //@synthesize inputStillImage=_inputStillImage - In the implementation block
@property (nonatomic,retain) CIImage * inputMaskImage;                        //@synthesize inputMaskImage=_inputMaskImage - In the implementation block
@property (nonatomic,retain) NSNumber * inputRenderScale;                     //@synthesize inputRenderScale=_inputRenderScale - In the implementation block
@property (nonatomic,retain) NSNumber * inputVideoScale;                      //@synthesize inputVideoScale=_inputVideoScale - In the implementation block
@property (nonatomic,retain) CIVector * inputAlignmentExtent;                 //@synthesize inputAlignmentExtent=_inputAlignmentExtent - In the implementation block
@property (nonatomic,retain) CIVector * inputAlignmentTransform;              //@synthesize inputAlignmentTransform=_inputAlignmentTransform - In the implementation block
+(void)initialize;
+(BOOL)debugDumpIntermediateImages;
+(void)loadFusionTuningParameters;
+(BOOL)_debugDumpIntermediateImages;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputMaskImage;
-(void)setInputMaskImage:(CIImage *)arg1 ;
-(id)alignImage:(id)arg1 transform:(SCD_Struct_PI9)arg2 extent:(CGRect)arg3 ;
-(id)_computeNCCMapFromImage:(id)arg1 toImage:(id)arg2 scale:(double)arg3 ;
-(id)_refineMaskImage:(id)arg1 guideImage:(id)arg2 scale:(double)arg3 ;
-(id)_fuseImage:(id)arg1 withGuideImage:(id)arg2 weightImage:(id)arg3 maskImage:(id)arg4 ;
-(CIImage *)inputStillImage;
-(void)setInputStillImage:(CIImage *)arg1 ;
-(NSNumber *)inputRenderScale;
-(void)setInputRenderScale:(NSNumber *)arg1 ;
-(NSNumber *)inputVideoScale;
-(void)setInputVideoScale:(NSNumber *)arg1 ;
-(CIVector *)inputAlignmentExtent;
-(void)setInputAlignmentExtent:(CIVector *)arg1 ;
-(CIVector *)inputAlignmentTransform;
-(void)setInputAlignmentTransform:(CIVector *)arg1 ;
@end

