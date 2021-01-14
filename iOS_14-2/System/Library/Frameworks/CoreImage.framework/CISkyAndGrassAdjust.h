/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CISkyAndGrassAdjust : CIFilter {

	CIImage* inputImage;
	NSNumber* inputSkyAmount;
	NSNumber* inputGrassAmount;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputSkyAmount; 
@property (nonatomic,retain) NSNumber * inputGrassAmount; 
+(id)customAttributes;
-(NSNumber *)inputSkyAmount;
-(void)setInputSkyAmount:(NSNumber *)arg1 ;
-(NSNumber *)inputGrassAmount;
-(void)setInputGrassAmount:(NSNumber *)arg1 ;
-(id)_kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

