/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIDither : CIFilter {

	CIImage* inputImage;
	NSNumber* inputIntensity;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputIntensity; 
+(id)customAttributes;
+(id)_kernelDither;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputIntensity;
-(void)setInputIntensity:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

