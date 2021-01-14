/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber;

@interface CIDisparityWeightsV3 : CIFilter {

	CIImage* inputImage;
	NSDictionary* inputTuningParameters;
	NSNumber* inputScale;

}

@property (retain) CIImage * inputImage; 
@property (retain) NSDictionary * inputTuningParameters; 
@property (retain) NSNumber * inputScale; 
-(id)weightsXKernel;
-(id)weightsYKernel;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

