/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSDictionary, NSString;

@interface CIPortraitBlurV2 : CIFilter {

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
@property (retain) CIImage * inputMatteImage; 
@property (retain) CIImage * inputBlurmapImage; 
@property (nonatomic,copy) NSNumber * inputLumaNoiseScale; 
@property (nonatomic,copy) NSNumber * inputScale; 
@property (nonatomic,copy) NSNumber * inputAperture; 
@property (nonatomic,retain) NSDictionary * inputTuningParameters; 
@property (nonatomic,retain) NSString * inputShape; 
@property (nonatomic,retain) NSNumber * inputDraftMode; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
-(CIImage *)inputMatteImage;
-(NSNumber *)inputDraftMode;
-(void)setInputDraftMode:(NSNumber *)arg1 ;
-(CIImage *)inputBlurmapImage;
-(void)setInputBlurmapImage:(CIImage *)arg1 ;
-(void)setInputMatteImage:(CIImage *)arg1 ;
-(NSNumber *)inputLumaNoiseScale;
-(void)setInputLumaNoiseScale:(NSNumber *)arg1 ;
-(NSNumber *)inputAperture;
-(void)setInputAperture:(NSNumber *)arg1 ;
-(NSString *)inputShape;
-(void)setInputShape:(NSString *)arg1 ;
-(id)sensorSize;
-(double)effectiveScale;
@end

