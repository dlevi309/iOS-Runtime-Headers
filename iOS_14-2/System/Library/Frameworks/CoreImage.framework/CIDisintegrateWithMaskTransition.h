/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)inputTime;
-(id)_kernel;
-(void)setInputTime:(NSNumber *)arg1 ;
-(CIImage *)inputTargetImage;
-(void)setInputTargetImage:(CIImage *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputMaskImage;
-(void)setInputMaskImage:(CIImage *)arg1 ;
-(id)_kernelG;
-(NSNumber *)inputShadowRadius;
-(void)setInputShadowRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputShadowDensity;
-(void)setInputShadowDensity:(NSNumber *)arg1 ;
-(CIVector *)inputShadowOffset;
-(void)setInputShadowOffset:(CIVector *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

