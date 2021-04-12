/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIHistogramDisplayFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputHeight;
	NSNumber* inputHighLimit;
	NSNumber* inputLowLimit;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputHeight; 
@property (nonatomic,retain) NSNumber * inputHighLimit; 
@property (nonatomic,retain) NSNumber * inputLowLimit; 
+(id)customAttributes;
-(id)_kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(NSNumber *)inputHeight;
-(void)setInputHeight:(NSNumber *)arg1 ;
-(NSNumber *)inputHighLimit;
-(void)setInputHighLimit:(NSNumber *)arg1 ;
-(NSNumber *)inputLowLimit;
-(void)setInputLowLimit:(NSNumber *)arg1 ;
@end

