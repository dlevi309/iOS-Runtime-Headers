/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInputBlurRadius:(CIVector *)arg1 ;
-(CIVector *)inputMaxIntensity;
-(void)setInputMaxIntensity:(CIVector *)arg1 ;
-(CIVector *)inputMinIntensity;
-(CIVector *)inputBlurRadius;
-(void)setInputMinIntensity:(CIVector *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputApertureScaling;
-(NSNumber *)inputMaxBlur;
-(void)setInputApertureScaling:(NSNumber *)arg1 ;
-(void)setInputMaxBlur:(NSNumber *)arg1 ;
-(NSNumber *)inputIterations;
-(void)setInputIterations:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

