/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(NSNumber *)inputUseCube;
-(id)inputUseCubeColorSpace;
-(id)_kernelCPos;
-(void)setInputUseCube:(NSNumber *)arg1 ;
-(void)setInputUseCubeColorSpace:(id)arg1 ;
-(id)_kernelV_lt1;
-(id)_kernelV_gt1;
-(id)_kernelCNeg;
-(id)_kernelCast;
-(NSNumber *)inputVibrancy;
-(void)setInputVibrancy:(NSNumber *)arg1 ;
-(NSNumber *)inputCast;
-(void)setInputCast:(NSNumber *)arg1 ;
-(BOOL)_isIdentity;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputContrast;
-(void)setInputContrast:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)dealloc;
@end

