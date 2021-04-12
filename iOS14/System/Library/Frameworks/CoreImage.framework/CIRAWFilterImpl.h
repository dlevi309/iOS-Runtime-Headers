/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class NSArray, CIImage, NSString, NSDictionary, NSObject, NSNumber, CIVector, CIFilter;

@interface CIRAWFilterImpl : CIFilter {

	CGImageSourceRef _inputImageSource;
	NSArray* _inputImageAndProperties;
	CIImage* _inputImage;
	CGSize _nativeSize;
	BOOL _isRawSource;
	BOOL _calledDealloc;
	NSString* _matteOption;
	NSDictionary* _baseImageProperties;
	NSDictionary* _rawDictionary;
	NSDictionary* _rawReconstructionDefaultsDictionary;
	NSArray* _supportedSushiModes;
	NSArray* _supportedDecoderVersions;
	NSArray* _filters;
	NSObject* _typeIdentifierHint;
	NSNumber* _defaultOrientation;
	NSString* inputRequestedSushiMode;
	NSNumber* inputNeutralChromaticityX;
	NSNumber* inputNeutralChromaticityY;
	NSNumber* inputNeutralTemperature;
	NSNumber* inputNeutralTint;
	CIVector* inputNeutralLocation;
	NSNumber* inputEV;
	NSNumber* inputBoost;
	NSNumber* inputDraftMode;
	NSNumber* inputScaleFactor;
	NSNumber* inputIgnoreOrientation;
	NSNumber* inputImageOrientation;
	NSNumber* inputEnableSharpening;
	NSNumber* inputEnableNoiseTracking;
	NSNumber* inputEnableVendorLensCorrection;
	NSNumber* inputNoiseReductionAmount;
	NSNumber* inputLuminanceNoiseReductionAmount;
	NSNumber* inputColorNoiseReductionAmount;
	NSNumber* inputNoiseReductionSharpnessAmount;
	NSNumber* inputNoiseReductionContrastAmount;
	NSNumber* inputNoiseReductionDetailAmount;
	NSNumber* inputMoireAmount;
	NSString* inputDecoderVersion;
	NSNumber* inputBoostShadowAmount;
	NSNumber* inputBias;
	NSNumber* inputBaselineExposure;
	NSNumber* inputDisableGamutMap;
	NSNumber* inputHueMagMR;
	NSNumber* inputHueMagRY;
	NSNumber* inputHueMagYG;
	NSNumber* inputHueMagGC;
	NSNumber* inputHueMagCB;
	NSNumber* inputHueMagBM;
	CIFilter* inputLinearSpaceFilter;
	NSNumber* inputEnableEDRMode;
	NSNumber* inputReturnDemosaiced;

}

@property (retain,readonly) NSDictionary * rawDictionary; 
@property (retain,readonly) NSDictionary * rawReconstructionDefaultsDictionary; 
@property (retain,readonly) NSNumber * sushiMode; 
@property (readonly) int rawMajorVersion; 
@property (retain,readonly) NSArray * filters; 
@property (readonly) int subsampling; 
@property (readonly) CGSize nativeSize; 
+(id)filterWithImageURL:(id)arg1 options:(id)arg2 ;
+(id)filterWithImageData:(id)arg1 options:(id)arg2 ;
+(id)filterWithCVPixelBuffer:(CVBufferRef)arg1 properties:(id)arg2 options:(id)arg3 ;
+(id)supportedRawCameraModels;
+(id)optionKeys;
+(id)matteOptionNameFromOptions:(id)arg1 ;
+(id)applyMatrix:(const double*)arg1 toCIImage:(id)arg2 ;
+(void)convertNeutralX:(id)arg1 y:(id)arg2 toTemperature:(id*)arg3 tint:(id*)arg4 ;
+(void)convertNeutralTemperature:(id)arg1 tint:(id)arg2 toX:(id*)arg3 y:(id*)arg4 ;
+(id)customAttributes;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setInputDraftMode:(id)arg1 ;
-(id)outputKeys;
-(NSNumber *)sushiMode;
-(void)setInputMoireAmount:(id)arg1 ;
-(id)defaultBoostShadowAmount;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 properties:(id)arg2 options:(id)arg3 ;
-(id)initWithImageSource:(CGImageSourceRef)arg1 options:(id)arg2 ;
-(void)setInputBoost:(id)arg1 ;
-(id)defaultInputLuminanceNoiseReductionAmount;
-(void)setInputLuminanceNoiseReductionAmount:(id)arg1 ;
-(id)defaultInputMoireAmount;
-(id)defaultInputColorNoiseReductionAmount;
-(void)setInputColorNoiseReductionAmount:(id)arg1 ;
-(void)setInputNoiseReductionAmount:(id)arg1 ;
-(id)init;
-(id)defaultInputNoiseReductionContrastAmount;
-(void)setInputNoiseReductionContrastAmount:(id)arg1 ;
-(void)setInputEnableSharpening:(id)arg1 ;
-(id)defaultInputNoiseReductionDetailAmount;
-(void)setInputNoiseReductionDetailAmount:(id)arg1 ;
-(void)setInputIgnoreOrientation:(id)arg1 ;
-(id)defaultInputNoiseReductionSharpnessAmount;
-(void)setInputNoiseReductionSharpnessAmount:(id)arg1 ;
-(void)setInputScaleFactor:(id)arg1 ;
-(id)defaultInputEnableVendorLensCorrection;
-(void)setInputEnableVendorLensCorrection:(id)arg1 ;
-(void)setInputEnableNoiseTracking:(id)arg1 ;
-(void)setInputBoostShadowAmount:(id)arg1 ;
-(id)defaultImageOrientation;
-(void)setInputImageOrientation:(id)arg1 ;
-(id)defaultDecoderVersion;
-(void)setInputDecoderVersion:(id)arg1 ;
-(id)defaultInputBaselineExposureAmount;
-(void)setInputBaselineExposure:(id)arg1 ;
-(void)setInputHueMagMR:(id)arg1 ;
-(id)defaultInputBiasAmount;
-(id)defaultInputHueMagMRAmount;
-(id)defaultInputHueMagRYAmount;
-(void)setInputHueMagRY:(id)arg1 ;
-(id)defaultInputHueMagYGAmount;
-(void)setInputHueMagYG:(id)arg1 ;
-(id)defaultInputHueMagGCAmount;
-(void)setInputHueMagGC:(id)arg1 ;
-(id)defaultInputHueMagCBAmount;
-(void)setInputHueMagCB:(id)arg1 ;
-(id)defaultInputHueMagBMAmount;
-(void)setInputHueMagBM:(id)arg1 ;
-(void)setInputDisableGamutMap:(id)arg1 ;
-(id)defaultNeutralTemperature;
-(void)setInputNeutralTemperature:(id)arg1 ;
-(id)defaultNeutralTint;
-(void)setInputNeutralTint:(id)arg1 ;
-(id)defaultNeutralChromaticityX;
-(void)setInputNeutralChromaticityX:(id)arg1 ;
-(id)defaultInputEnableEDRMode;
-(id)defaultNeutralChromaticityY;
-(void)setInputNeutralChromaticityY:(id)arg1 ;
-(void)setInputEnableEDRMode:(id)arg1 ;
-(id)defaultInputReturnDemosaiced;
-(void)setInputReturnDemosaiced:(id)arg1 ;
-(int)subsampling;
-(id)rawOptions;
-(id)inputHueMagMR;
-(id)inputNeutralChromaticityX;
-(id)inputNeutralChromaticityY;
-(id)inputNeutralTemperature;
-(id)inputNeutralTint;
-(id)inputNeutralLocation;
-(id)inputHueMagRY;
-(id)inputBaselineExposure;
-(id)inputDisableGamutMap;
-(id)inputHueMagYG;
-(id)inputHueMagGC;
-(id)activeKeys;
-(id)inputHueMagCB;
-(id)inputHueMagBM;
-(id)inputLinearSpaceFilter;
-(NSDictionary *)rawReconstructionDefaultsDictionary;
-(NSDictionary *)rawDictionary;
-(id)whitePointArray;
-(void)getWhitePointVectorsR:(id*)arg1 g:(id*)arg2 b:(id*)arg3 ;
-(void)invalidateFilters;
-(id)rawOptionsWithSubsampling:(BOOL)arg1 ;
-(CGAffineTransform)getScaleTransform:(id)arg1 ;
-(id)transformedImageIgnoringOrientation:(BOOL)arg1 ;
-(CGAffineTransform)getOrientationTransform:(id)arg1 ;
-(int)rawMajorVersion;
-(void)invalidateInputImage;
-(void)setTempTintAtPoint:(CGPoint)arg1 ;
-(id)supportedDecoderVersions;
-(id)RAWFiltersValueForKeyPath:(id)arg1 ;
-(void)setInputNeutralLocation:(id)arg1 ;
-(id)supportedSushiModes;
-(void)setInputLinearSpaceFilter:(id)arg1 ;
-(id)outputNativeSize;
-(void)updateTemperatureAndTint;
-(void)updateChomaticityXAndY;
-(void)setInputRequestedSushiMode:(id)arg1 ;
-(NSArray *)filters;
-(void)setInputImage:(id)arg1 ;
-(void)setDefaults;
-(id)inputBias;
-(void)setInputBias:(id)arg1 ;
-(id)whitePoint;
-(void)setInputEV:(id)arg1 ;
-(id)outputImage;
-(CGSize)nativeSize;
-(id)inputImage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end
