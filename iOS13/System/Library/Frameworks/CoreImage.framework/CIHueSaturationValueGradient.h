/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)outputImage;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(id)inputColorSpace;
-(void)setInputColorSpace:(id)arg1 ;
-(NSNumber *)inputSoftness;
-(void)setInputSoftness:(NSNumber *)arg1 ;
-(NSNumber *)inputDither;
-(void)setInputDither:(NSNumber *)arg1 ;
-(id)_kernelD;
-(NSNumber *)inputValue;
-(void)setInputValue:(NSNumber *)arg1 ;
@end

