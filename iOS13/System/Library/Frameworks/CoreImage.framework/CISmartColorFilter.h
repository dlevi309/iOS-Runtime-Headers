/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIContext;

@interface CISmartColorFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputVibrancy;
	NSNumber* inputContrast;
	NSNumber* inputCast;
	NSNumber* inputUseCube;
	id inputUseCubeColorSpace;
	CIImage* _cubeImage;
	CIContext* _cubeContext;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputVibrancy; 
@property (nonatomic,retain) NSNumber * inputContrast; 
@property (nonatomic,retain) NSNumber * inputCast; 
@property (nonatomic,retain) NSNumber * inputUseCube; 
@property (nonatomic,retain) id inputUseCubeColorSpace; 
+(id)customAttributes;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(BOOL)_isIdentity;
-(NSNumber *)inputContrast;
-(void)setInputContrast:(NSNumber *)arg1 ;
-(NSNumber *)inputUseCube;
-(id)inputUseCubeColorSpace;
-(void)setInputUseCube:(NSNumber *)arg1 ;
-(void)setInputUseCubeColorSpace:(id)arg1 ;
-(id)_kernelV_lt1;
-(id)_kernelV_gt1;
-(id)_kernelCPos;
-(id)_kernelCNeg;
-(id)_kernelCast;
-(NSNumber *)inputVibrancy;
-(void)setInputVibrancy:(NSNumber *)arg1 ;
-(NSNumber *)inputCast;
-(void)setInputCast:(NSNumber *)arg1 ;
@end

