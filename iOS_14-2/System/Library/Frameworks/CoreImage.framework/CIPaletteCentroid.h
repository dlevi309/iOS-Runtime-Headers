/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIPaletteCentroid : CIFilter {

	CIImage* inputImage;
	CIImage* inputPaletteImage;
	NSNumber* inputPerceptual;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputPaletteImage; 
@property (nonatomic,retain) NSNumber * inputPerceptual; 
+(id)customAttributes;
-(id)_kernelClusterMask;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputPaletteImage;
-(void)setInputPaletteImage:(CIImage *)arg1 ;
-(NSNumber *)inputPerceptual;
-(void)setInputPerceptual:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

