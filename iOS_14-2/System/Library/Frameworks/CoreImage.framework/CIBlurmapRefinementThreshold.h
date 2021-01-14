/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIBlurmapRefinementThreshold : CIFilter {

	CIImage* inputImage;
	NSNumber* inputThreshold;

}

@property (retain) CIImage * inputImage; 
@property (retain) NSNumber * inputThreshold; 
-(id)kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputThreshold;
-(void)setInputThreshold:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

