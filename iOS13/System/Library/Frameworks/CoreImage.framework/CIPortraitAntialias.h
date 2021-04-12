/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CIPortraitAntialias : CIFilter {

	CIImage* inputImage;
	NSNumber* inputMaxBlurInPixels;
	NSNumber* inputAntiAliasRadius;
	NSNumber* inputLumaNoiseAmpl;
	NSNumber* inputLumaNoiseModelCoeff;
	NSNumber* inputScale;
	CIVector* inputRect;
	CIVector* inputSensorSize;

}

@property (retain) CIImage * inputImage; 
@property (nonatomic,copy) NSNumber * inputMaxBlurInPixels; 
@property (nonatomic,copy) NSNumber * inputAntiAliasRadius; 
@property (nonatomic,copy) NSNumber * inputLumaNoiseAmpl; 
@property (nonatomic,copy) NSNumber * inputLumaNoiseModelCoeff; 
@property (nonatomic,copy) NSNumber * inputScale; 
@property (nonatomic,copy) CIVector * inputRect; 
@property (nonatomic,copy) CIVector * inputSensorSize; 
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(NSNumber *)inputLumaNoiseAmpl;
-(void)setInputLumaNoiseAmpl:(NSNumber *)arg1 ;
-(NSNumber *)inputLumaNoiseModelCoeff;
-(void)setInputLumaNoiseModelCoeff:(NSNumber *)arg1 ;
-(id)_kernel:(BOOL)arg1 withAddedNoise:(BOOL)arg2 ;
-(id)_noiseGeneratorKernel;
-(id)noiseColorKernel;
-(id)outputImage:(id)arg1 horizontal:(BOOL)arg2 ;
-(NSNumber *)inputMaxBlurInPixels;
-(void)setInputMaxBlurInPixels:(NSNumber *)arg1 ;
-(NSNumber *)inputAntiAliasRadius;
-(void)setInputAntiAliasRadius:(NSNumber *)arg1 ;
-(CIVector *)inputRect;
-(void)setInputRect:(CIVector *)arg1 ;
-(CIVector *)inputSensorSize;
-(void)setInputSensorSize:(CIVector *)arg1 ;
@end

