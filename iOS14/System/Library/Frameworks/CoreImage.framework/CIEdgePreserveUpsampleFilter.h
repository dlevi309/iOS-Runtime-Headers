/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIEdgePreserveUpsampleFilter : CIFilter {

	CIImage* inputImage;
	CIImage* inputSmallImage;
	NSNumber* inputSpatialSigma;
	NSNumber* inputLumaSigma;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputSmallImage; 
@property (nonatomic,retain) NSNumber * inputSpatialSigma; 
@property (nonatomic,retain) NSNumber * inputLumaSigma; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_kernelGuideMono;
-(id)_kernelGuideCombine;
-(CIImage *)inputSmallImage;
-(NSNumber *)inputLumaSigma;
-(id)_kernelJointUpsamp;
-(id)_kernelJointUpsampRG;
-(id)_kernelGuideCombine4;
-(void)setInputSmallImage:(CIImage *)arg1 ;
-(NSNumber *)inputSpatialSigma;
-(void)setInputSpatialSigma:(NSNumber *)arg1 ;
-(void)setInputLumaSigma:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

