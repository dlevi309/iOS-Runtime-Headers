/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputDisparityImage;
-(void)setInputDisparityImage:(CIImage *)arg1 ;
-(NSNumber *)inputSigmaS;
-(id)outputImage;
-(CIImage *)inputConfidenceMapImage;
-(void)setInputConfidenceMapImage:(CIImage *)arg1 ;
-(NSNumber *)inputMaxNumVertices;
-(NSNumber *)inputLambda;
-(void)setInputMaxNumVertices:(NSNumber *)arg1 ;
-(void)setInputSigmaS:(NSNumber *)arg1 ;
-(NSNumber *)inputSigmaRLuma;
-(void)setInputSigmaRLuma:(NSNumber *)arg1 ;
-(NSNumber *)inputSigmaRChroma;
-(void)setInputSigmaRChroma:(NSNumber *)arg1 ;
-(void)setInputLambda:(NSNumber *)arg1 ;
-(NSNumber *)inputMaxNumIterations;
-(void)setInputMaxNumIterations:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
@end

