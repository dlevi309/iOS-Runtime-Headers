/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber;

@interface CIDisparityRefinementAntialiasV3 : CIFilter {

	CIImage* inputImage;
	CIImage* inputPreprocImage;
	CIImage* inputDisparityWeightImage;
	NSDictionary* inputTuningParameters;
	NSNumber* inputScale;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputPreprocImage; 
@property (retain) CIImage * inputDisparityWeightImage; 
@property (retain) NSDictionary * inputTuningParameters; 
@property (retain) NSNumber * inputScale; 
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
-(CIImage *)inputPreprocImage;
-(void)setInputPreprocImage:(CIImage *)arg1 ;
-(id)antialiasKernel;
-(CIImage *)inputDisparityWeightImage;
-(void)setInputDisparityWeightImage:(CIImage *)arg1 ;
@end

