/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIPaperWash : CIFilter {

	CIImage* inputImage;
	NSNumber* inputSaturation;
	NSNumber* inputGreyscale;

}

@property (nonatomic,copy) NSNumber * inputSaturation; 
@property (nonatomic,copy) NSNumber * inputGreyscale; 
+(id)customAttributes;
-(id)outputImage;
-(NSNumber *)inputSaturation;
-(void)setInputSaturation:(NSNumber *)arg1 ;
-(NSNumber *)inputGreyscale;
-(void)setInputGreyscale:(NSNumber *)arg1 ;
@end

