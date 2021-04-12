/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface PIDefinitionFilter : CIFilter {

	CIImage* _inputImage;
	CIImage* _inputBlurImage;
	NSNumber* _inputIntensity;

}

@property (retain) CIImage * inputImage;                   //@synthesize inputImage=_inputImage - In the implementation block
@property (retain) CIImage * inputBlurImage;               //@synthesize inputBlurImage=_inputBlurImage - In the implementation block
@property (retain) NSNumber * inputIntensity;              //@synthesize inputIntensity=_inputIntensity - In the implementation block
+(id)definitionKernel;
-(CIImage *)inputBlurImage;
-(void)setInputBlurImage:(CIImage *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputIntensity;
-(void)setInputIntensity:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

