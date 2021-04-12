/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIPalettize : CIFilter {

	CIImage* inputImage;
	CIImage* inputPaletteImage;
	NSNumber* inputPerceptual;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputPaletteImage; 
@property (nonatomic,retain) NSNumber * inputPerceptual; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_kernelApplyPalette;
-(CIImage *)inputPaletteImage;
-(void)setInputPaletteImage:(CIImage *)arg1 ;
-(NSNumber *)inputPerceptual;
-(void)setInputPerceptual:(NSNumber *)arg1 ;
@end

