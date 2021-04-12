/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CIDisintegrateWithMaskTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	CIImage* inputMaskImage;
	NSNumber* inputTime;
	NSNumber* inputShadowRadius;
	NSNumber* inputShadowDensity;
	CIVector* inputShadowOffset;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputTargetImage; 
@property (nonatomic,retain) CIImage * inputMaskImage; 
@property (nonatomic,retain) NSNumber * inputTime; 
@property (nonatomic,retain) NSNumber * inputShadowRadius; 
@property (nonatomic,retain) NSNumber * inputShadowDensity; 
@property (nonatomic,retain) CIVector * inputShadowOffset; 
+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputTargetImage;
-(void)setInputTargetImage:(CIImage *)arg1 ;
-(NSNumber *)inputTime;
-(void)setInputTime:(NSNumber *)arg1 ;
-(CIImage *)inputMaskImage;
-(void)setInputMaskImage:(CIImage *)arg1 ;
-(id)_kernelG;
-(NSNumber *)inputShadowRadius;
-(void)setInputShadowRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputShadowDensity;
-(void)setInputShadowDensity:(NSNumber *)arg1 ;
-(CIVector *)inputShadowOffset;
-(void)setInputShadowOffset:(CIVector *)arg1 ;
@end

