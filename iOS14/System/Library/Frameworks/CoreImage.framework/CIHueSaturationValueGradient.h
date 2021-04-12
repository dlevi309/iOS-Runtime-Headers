/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class NSNumber;

@interface CIHueSaturationValueGradient : CIFilter {

	NSNumber* inputValue;
	NSNumber* inputRadius;
	NSNumber* inputSoftness;
	NSNumber* inputDither;
	id inputColorSpace;

}

@property (nonatomic,retain) NSNumber * inputValue; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputSoftness; 
@property (nonatomic,retain) NSNumber * inputDither; 
@property (nonatomic,retain) id inputColorSpace; 
+(id)customAttributes;
-(id)_kernel;
-(NSNumber *)inputValue;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(id)_kernelD;
-(id)inputColorSpace;
-(void)setInputColorSpace:(id)arg1 ;
-(NSNumber *)inputSoftness;
-(void)setInputSoftness:(NSNumber *)arg1 ;
-(void)setInputValue:(NSNumber *)arg1 ;
-(NSNumber *)inputDither;
-(void)setInputDither:(NSNumber *)arg1 ;
-(id)outputImage;
@end

