/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CISDOFHighlightRecovery : CIFilter {

	CIImage* inputImage;
	NSNumber* inputScale;
	NSNumber* inputApertureScaling;
	NSNumber* inputIterations;
	NSNumber* inputMaxBlur;
	CIVector* inputBlurRadius;
	CIVector* inputMaxIntensity;
	CIVector* inputMinIntensity;

}

@property (retain) CIImage * inputImage; 
@property (retain) NSNumber * inputScale; 
@property (retain) NSNumber * inputApertureScaling; 
@property (retain) NSNumber * inputIterations; 
@property (retain) NSNumber * inputMaxBlur; 
@property (retain) CIVector * inputBlurRadius; 
@property (retain) CIVector * inputMaxIntensity; 
@property (retain) CIVector * inputMinIntensity; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(NSNumber *)inputApertureScaling;
-(NSNumber *)inputMaxBlur;
-(void)setInputApertureScaling:(NSNumber *)arg1 ;
-(void)setInputMaxBlur:(NSNumber *)arg1 ;
-(NSNumber *)inputIterations;
-(void)setInputIterations:(NSNumber *)arg1 ;
-(CIVector *)inputBlurRadius;
-(void)setInputBlurRadius:(CIVector *)arg1 ;
-(CIVector *)inputMaxIntensity;
-(void)setInputMaxIntensity:(CIVector *)arg1 ;
-(CIVector *)inputMinIntensity;
-(void)setInputMinIntensity:(CIVector *)arg1 ;
@end

