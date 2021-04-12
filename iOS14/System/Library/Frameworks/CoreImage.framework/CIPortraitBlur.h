/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSDictionary, NSString;

@interface CIPortraitBlur : CIFilter {

	CIImage* inputImage;
	CIImage* inputBlurmapImage;
	CIImage* inputMatteImage;
	NSNumber* inputLumaNoiseScale;
	NSNumber* inputScale;
	NSNumber* inputAperture;
	NSDictionary* inputTuningParameters;
	NSString* inputShape;
	NSNumber* inputDraftMode;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputBlurmapImage; 
@property (retain) CIImage * inputMatteImage; 
@property (nonatomic,copy) NSNumber * inputLumaNoiseScale; 
@property (nonatomic,copy) NSNumber * inputScale; 
@property (nonatomic,copy) NSNumber * inputAperture; 
@property (nonatomic,retain) NSDictionary * inputTuningParameters; 
@property (nonatomic,retain) NSString * inputShape; 
@property (nonatomic,retain) NSNumber * inputDraftMode; 
+(id)customAttributes;
-(NSNumber *)inputDraftMode;
-(void)setInputDraftMode:(NSNumber *)arg1 ;
-(id)_kernelMetal;
-(id)_kernelWithShapesMetal;
-(id)_kernelsWithShapes;
-(id)_ourBlendKernelMetal;
-(id)_ourBlendKernel;
-(id)outputImage:(BOOL)arg1 ;
-(NSString *)inputShape;
-(id)outputImageV2;
-(id)outputImageV3;
-(CIImage *)inputBlurmapImage;
-(void)setInputBlurmapImage:(CIImage *)arg1 ;
-(NSNumber *)inputAperture;
-(void)setInputMatteImage:(CIImage *)arg1 ;
-(NSNumber *)inputLumaNoiseScale;
-(void)setInputLumaNoiseScale:(NSNumber *)arg1 ;
-(void)setInputAperture:(NSNumber *)arg1 ;
-(void)setInputShape:(NSString *)arg1 ;
-(id)_kernel;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
-(id)outputImage;
-(CIImage *)inputMatteImage;
-(CIImage *)inputImage;
@end

