/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CICircularScreen : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputWidth;
	NSNumber* inputSharpness;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputWidth; 
@property (nonatomic,retain) NSNumber * inputSharpness; 
+(id)customAttributes;
-(id)_kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputWidth;
-(void)setInputWidth:(NSNumber *)arg1 ;
-(CIVector *)inputCenter;
-(void)setInputCenter:(CIVector *)arg1 ;
-(NSNumber *)inputSharpness;
-(void)setInputSharpness:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

