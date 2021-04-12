/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)inputSaturation;
-(void)setInputSaturation:(NSNumber *)arg1 ;
-(NSNumber *)inputGreyscale;
-(void)setInputGreyscale:(NSNumber *)arg1 ;
-(id)outputImage;
@end

