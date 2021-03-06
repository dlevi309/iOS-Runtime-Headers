/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector, AVCameraCalibrationData, NSString;

@interface CIDepthBlurEffect : CIFilter {

	CIImage* inputImage;
	CIImage* inputDisparityImage;
	CIImage* inputMatteImage;
	CIImage* inputHairImage;
	CIImage* inputGlassesImage;
	CIImage* inputGainMap;
	NSNumber* inputAperture;
	CIVector* inputLeftEyePositions;
	CIVector* inputRightEyePositions;
	CIVector* inputChinPositions;
	CIVector* inputNosePositions;
	CIVector* inputFocusRect;
	NSNumber* inputLumaNoiseScale;
	NSNumber* inputScaleFactor;
	AVCameraCalibrationData* inputCalibrationData;
	id inputAuxDataMetadata;
	NSString* inputShape;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputDisparityImage; 
@property (retain) CIImage * inputMatteImage; 
@property (retain) CIImage * inputHairImage; 
@property (retain) CIImage * inputGlassesImage; 
@property (retain) CIImage * inputGainMap; 
@property (nonatomic,retain) NSNumber * inputAperture; 
@property (nonatomic,retain) NSNumber * inputLumaNoiseScale; 
@property (retain) CIVector * inputLeftEyePositions; 
@property (retain) CIVector * inputRightEyePositions; 
@property (retain) CIVector * inputChinPositions; 
@property (retain) CIVector * inputNosePositions; 
@property (nonatomic,retain) CIVector * inputFocusRect; 
@property (nonatomic,retain) NSNumber * inputScaleFactor; 
@property (nonatomic,retain) AVCameraCalibrationData * inputCalibrationData; 
@property (nonatomic,retain) id inputAuxDataMetadata; 
@property (nonatomic,retain) NSString * inputShape; 
+(int)getDraftMode:(id)arg1 ;
+(id)tuningParametersFromMetadata:(CGImageMetadataRef)arg1 ;
+(CGImageMetadataRef)metadataFromDictionary:(id)arg1 metadata:(CGImageMetadataRef)arg2 ;
+(CGImageMetadataRef)replaceRenderingParameters:(CGImageMetadataRef)arg1 tuningParameters:(id)arg2 ;
+(CGImageMetadataRef)augmentMetadataWithRenderingPropertiesForImage:(id)arg1 ;
+(id)customAttributes;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(NSString *)inputShape;
-(NSNumber *)inputAperture;
-(void)setInputMatteImage:(CIImage *)arg1 ;
-(NSNumber *)inputLumaNoiseScale;
-(void)setInputLumaNoiseScale:(NSNumber *)arg1 ;
-(void)setInputAperture:(NSNumber *)arg1 ;
-(void)setInputShape:(NSString *)arg1 ;
-(void)setInputScaleFactor:(NSNumber *)arg1 ;
-(NSNumber *)inputScaleFactor;
-(void)prewarm:(id)arg1 ;
-(CIImage *)inputHairImage;
-(void)setInputHairImage:(CIImage *)arg1 ;
-(CIImage *)inputGlassesImage;
-(void)setInputGlassesImage:(CIImage *)arg1 ;
-(CIImage *)inputGainMap;
-(void)setInputGainMap:(CIImage *)arg1 ;
-(id)inputAuxDataMetadata;
-(void)setInputAuxDataMetadata:(id)arg1 ;
-(AVCameraCalibrationData *)inputCalibrationData;
-(void)setInputCalibrationData:(AVCameraCalibrationData *)arg1 ;
-(id)_getFocusRect:(id)arg1 focusRect:(id)arg2 ;
-(CIVector *)inputChinPositions;
-(CIVector *)inputLeftEyePositions;
-(CIVector *)inputRightEyePositions;
-(void)setInputLeftEyePositions:(CIVector *)arg1 ;
-(void)setInputRightEyePositions:(CIVector *)arg1 ;
-(void)setInputChinPositions:(CIVector *)arg1 ;
-(CIVector *)inputNosePositions;
-(void)setInputNosePositions:(CIVector *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputDisparityImage;
-(void)setInputDisparityImage:(CIImage *)arg1 ;
-(CIVector *)inputFocusRect;
-(void)setInputFocusRect:(CIVector *)arg1 ;
-(id)outputImage;
-(CIImage *)inputMatteImage;
-(CIImage *)inputImage;
@end

