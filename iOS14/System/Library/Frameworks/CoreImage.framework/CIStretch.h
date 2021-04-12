/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIStretch : CIFilter {

	CIImage* inputImage;
	CIVector* inputPoint;
	CIVector* inputSize;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputPoint; 
@property (nonatomic,retain) CIVector * inputSize; 
+(id)customAttributes;
-(void)setInputPoint:(CIVector *)arg1 ;
-(CIVector *)inputSize;
-(CGRect)computeDOD:(vec4)arg1 ;
-(id)_kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setDefaults;
-(void)setInputSize:(CIVector *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(CIVector *)inputPoint;
@end

