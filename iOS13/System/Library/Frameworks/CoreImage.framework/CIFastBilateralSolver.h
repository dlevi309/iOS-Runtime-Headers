/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIFastBilateralSolver : CIFilter {

	CIImage* inputImage;
	CIImage* inputDisparityImage;
	CIImage* inputConfidenceMapImage;
	NSNumber* inputMaxNumVertices;
	NSNumber* inputSigmaS;
	NSNumber* inputSigmaRLuma;
	NSNumber* inputSigmaRChroma;
	NSNumber* inputLambda;
	NSNumber* inputMaxNumIterations;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputDisparityImage; 
@property (retain) CIImage * inputConfidenceMapImage; 
@property (nonatomic,copy) NSNumber * inputMaxNumVertices; 
@property (nonatomic,copy) NSNumber * inputSigmaS; 
@property (nonatomic,copy) NSNumber * inputSigmaRLuma; 
@property (nonatomic,copy) NSNumber * inputSigmaRChroma; 
@property (nonatomic,copy) NSNumber * inputLambda; 
@property (nonatomic,copy) NSNumber * inputMaxNumIterations; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputDisparityImage;
-(void)setInputDisparityImage:(CIImage *)arg1 ;
-(CIImage *)inputConfidenceMapImage;
-(void)setInputConfidenceMapImage:(CIImage *)arg1 ;
-(NSNumber *)inputMaxNumVertices;
-(void)setInputMaxNumVertices:(NSNumber *)arg1 ;
-(NSNumber *)inputSigmaS;
-(void)setInputSigmaS:(NSNumber *)arg1 ;
-(NSNumber *)inputSigmaRLuma;
-(void)setInputSigmaRLuma:(NSNumber *)arg1 ;
-(NSNumber *)inputSigmaRChroma;
-(void)setInputSigmaRChroma:(NSNumber *)arg1 ;
-(NSNumber *)inputLambda;
-(void)setInputLambda:(NSNumber *)arg1 ;
-(NSNumber *)inputMaxNumIterations;
-(void)setInputMaxNumIterations:(NSNumber *)arg1 ;
@end

