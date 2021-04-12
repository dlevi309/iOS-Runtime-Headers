/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CIDisparityRefinement : CIFilter {

	CIImage* inputDisparityImage;
	CIImage* inputImage;
	NSNumber* inputPropagateKernel;
	NSNumber* inputSmoothSigma;
	NSNumber* inputPropagateMinWeightSum;
	NSNumber* inputPropagateSigmaLuma;
	NSNumber* inputPropagateSigmaChma;
	NSNumber* inputScale;
	CIVector* inputOriginalSize;

}

@property (retain) CIImage * inputDisparityImage; 
@property (retain) CIImage * inputImage; 
@property (copy) NSNumber * inputPropagateKernel; 
@property (copy) NSNumber * inputSmoothSigma; 
@property (copy) NSNumber * inputPropagateMinWeightSum; 
@property (copy) NSNumber * inputPropagateSigmaLuma; 
@property (copy) NSNumber * inputPropagateSigmaChma; 
@property (copy) NSNumber * inputScale; 
@property (copy) CIVector * inputOriginalSize; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(id)_initialConversionRGB;
-(id)_pyramidGenerateLevel;
-(id)_smoothDisparity;
-(id)_propagateDisparityR1;
-(id)_propagateDisparity;
-(id)initialConversionForSize:(CGSize)arg1 useMetal:(BOOL)arg2 ;
-(id)generatePyramidLevel:(id)arg1 useMetal:(BOOL)arg2 ;
-(id)shiftmapLevelZeroWithSize:(CGSize)arg1 useMetal:(BOOL)arg2 ;
-(id)propagateDisparity:(id)arg1 pyramids:(id*)arg2 useMetal:(BOOL)arg3 computedPyramidLevels:(int)arg4 ;
-(id)smoothDisparityImage:(id)arg1 useMetal:(BOOL)arg2 ;
-(id)outputImageUsingMetal:(BOOL)arg1 ;
-(id)_propagateDisparityR1Combined;
-(id)_propagateDisparityCombined;
-(id)_combineImages;
-(CIImage *)inputDisparityImage;
-(void)setInputDisparityImage:(CIImage *)arg1 ;
-(NSNumber *)inputPropagateKernel;
-(void)setInputPropagateKernel:(NSNumber *)arg1 ;
-(NSNumber *)inputSmoothSigma;
-(void)setInputSmoothSigma:(NSNumber *)arg1 ;
-(NSNumber *)inputPropagateMinWeightSum;
-(void)setInputPropagateMinWeightSum:(NSNumber *)arg1 ;
-(NSNumber *)inputPropagateSigmaLuma;
-(void)setInputPropagateSigmaLuma:(NSNumber *)arg1 ;
-(NSNumber *)inputPropagateSigmaChma;
-(void)setInputPropagateSigmaChma:(NSNumber *)arg1 ;
-(CIVector *)inputOriginalSize;
-(void)setInputOriginalSize:(CIVector *)arg1 ;
@end

