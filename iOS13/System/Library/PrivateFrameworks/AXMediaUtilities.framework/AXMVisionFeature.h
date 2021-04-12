/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMJSONSerializable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSSecureCoding;
@class NSDictionary, NSArray, NSString, AXMLanguage, NSNumber, AXMTaggedText, AXMVisionFeatureColorInfo, AXMVisionFeatureAssetMetadata, AXMVisionFeatureFaceDetectionResult, AXMVisionFeatureAestheticsResult, CMDeviceMotion, NSObject;

@interface AXMVisionFeature : NSObject <AXMJSONSerializable, NSSecureCoding> {

	unsigned long long _featureType;
	NSArray* _subfeatures;
	NSString* _barcodeType;
	long long _ocrFeatureType;
	AXMLanguage* _textDetectionLanguage;
	double _creationDate;
	CGRect _frame;
	CGRect _normalizedFrame;
	NSString* _value;
	NSNumber* _isValueSpeakable;
	AXMTaggedText* _taggedText;
	AXMVisionFeatureColorInfo* _colorInfo;
	AXMVisionFeatureAssetMetadata* _assetMetadata;
	double _blur;
	double _brightness;
	double _confidence;
	CGAffineTransform _horizonTransform;
	float _horizonAngle;
	AXMVisionFeatureFaceDetectionResult* _faceDetectionResult;
	unsigned long long _faceId;
	SCD_Struct_AX15 _facePose;
	CGSize _canvasSize;
	NSString* _modelID;
	NSString* _classificationLabel;
	NSString* _classificationLocalizedValue;
	NSString* _caption;
	AXMVisionFeatureAestheticsResult* _aestheticsResult;
	CMDeviceMotion* _deviceMotion;
	long long _deviceOrientation;
	long long _cameraType;
	NSObject*<NSSecureCoding> _userContext;
	NSDictionary* _debugRectangles;
	CGRect _unpaddedDetectedFaceRect;

}

@property (nonatomic,readonly) AXMTaggedText * taggedText; 
@property (nonatomic,retain) NSObject*<NSSecureCoding> userContext;                                    //@synthesize userContext=_userContext - In the implementation block
@property (nonatomic,retain) NSDictionary * debugRectangles;                                           //@synthesize debugRectangles=_debugRectangles - In the implementation block
@property (nonatomic,readonly) unsigned long long featureType; 
@property (nonatomic,readonly) BOOL isBarcode; 
@property (nonatomic,readonly) BOOL isFace; 
@property (nonatomic,readonly) BOOL isRealtimeFace; 
@property (nonatomic,readonly) BOOL isPerson; 
@property (nonatomic,readonly) BOOL isSceneClassification; 
@property (nonatomic,readonly) BOOL isObjectClassification; 
@property (nonatomic,readonly) BOOL isBrightness; 
@property (nonatomic,readonly) BOOL isBlur; 
@property (nonatomic,readonly) BOOL isHorizon; 
@property (nonatomic,readonly) BOOL isColor; 
@property (nonatomic,readonly) BOOL isMediaLegibility; 
@property (nonatomic,readonly) BOOL isAssetMetadata; 
@property (nonatomic,readonly) BOOL isRectangle; 
@property (nonatomic,readonly) BOOL isModelClassification; 
@property (nonatomic,readonly) BOOL isCaption; 
@property (nonatomic,readonly) BOOL isMotion; 
@property (nonatomic,readonly) BOOL isCameraMetadata; 
@property (nonatomic,readonly) BOOL isProminentObject; 
@property (nonatomic,readonly) BOOL isIconClass; 
@property (nonatomic,readonly) BOOL isImageAesthetics; 
@property (nonatomic,readonly) BOOL isOCR; 
@property (nonatomic,readonly) BOOL isTextDocument; 
@property (nonatomic,readonly) BOOL isTextRegion; 
@property (nonatomic,readonly) BOOL isTextLine; 
@property (nonatomic,readonly) BOOL isTextSequence; 
@property (nonatomic,readonly) BOOL isTextCharacter; 
@property (nonatomic,readonly) BOOL isTextDiacritic; 
@property (nonatomic,readonly) NSArray * subfeatures; 
@property (nonatomic,readonly) double creationDate; 
@property (nonatomic,readonly) CGSize canvasSize; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) CGRect normalizedFrame; 
@property (nonatomic,readonly) double confidence; 
@property (nonatomic,readonly) NSString * value; 
@property (nonatomic,readonly) BOOL isValueSpeakable; 
@property (nonatomic,readonly) NSString * classificationLabel; 
@property (nonatomic,readonly) NSString * classificationLocalizedValue; 
@property (nonatomic,readonly) NSString * caption; 
@property (nonatomic,readonly) NSString * barcodeType; 
@property (nonatomic,readonly) long long ocrFeatureType; 
@property (nonatomic,readonly) AXMLanguage * textDetectionLanguage; 
@property (nonatomic,readonly) AXMVisionFeatureColorInfo * colorInfo; 
@property (nonatomic,readonly) AXMVisionFeatureAssetMetadata * assetMetadata; 
@property (nonatomic,readonly) double blur; 
@property (nonatomic,readonly) double brightness; 
@property (nonatomic,readonly) AXMVisionFeatureFaceDetectionResult * faceDetectionResult; 
@property (nonatomic,readonly) unsigned long long faceId; 
@property (nonatomic,readonly) CGRect unpaddedDetectedFaceRect;                                        //@synthesize unpaddedDetectedFaceRect=_unpaddedDetectedFaceRect - In the implementation block
@property (nonatomic,readonly) CGAffineTransform horizonTransform; 
@property (nonatomic,readonly) float horizonAngle; 
@property (nonatomic,readonly) AXMVisionFeatureAestheticsResult * aestheticsResult;                    //@synthesize aestheticsResult=_aestheticsResult - In the implementation block
@property (nonatomic,readonly) CMDeviceMotion * deviceMotion;                                          //@synthesize deviceMotion=_deviceMotion - In the implementation block
@property (nonatomic,readonly) long long deviceOrientation;                                            //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (nonatomic,readonly) long long cameraType;                                                   //@synthesize cameraType=_cameraType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(BOOL)supportsSecureCoding;
+(id)featureWithVisionRequest:(id)arg1 horizonResult:(id)arg2 canvasSize:(CGSize)arg3 ;
+(id)featureWithFaceDetectionResult:(id)arg1 canvasSize:(CGSize)arg2 ;
+(id)featureWithImageAestheticsObservation:(id)arg1 ;
+(id)featureWithVisionRequest:(id)arg1 modelClassificationResult:(id)arg2 modelIdentifier:(id)arg3 canvasSize:(CGSize)arg4 ;
+(id)featureWithVisionRequest:(id)arg1 blurValue:(float)arg2 canvasSize:(CGSize)arg3 ;
+(id)featureWithVisionRequest:(id)arg1 rectangleResult:(id)arg2 canvasSize:(CGSize)arg3 ;
+(id)featureWithMediaLegibility:(id)arg1 ;
+(id)featureWithVisionRequest:(id)arg1 textResult:(id)arg2 canvasSize:(CGSize)arg3 context:(id)arg4 ;
+(id)featureWithVisionRequest:(id)arg1 recognizedTextResult:(id)arg2 canvasSize:(CGSize)arg3 context:(id)arg4 ;
+(id)textLineWithBoundingBox:(CGRect)arg1 sequences:(id)arg2 canvasSize:(CGSize)arg3 context:(id)arg4 ;
+(id)textRegionWithBoundingBox:(CGRect)arg1 lines:(id)arg2 canvasSize:(CGSize)arg3 context:(id)arg4 ;
+(id)textDocumentWithBoundingBox:(CGRect)arg1 regions:(id)arg2 canvasSize:(CGSize)arg3 context:(id)arg4 ;
+(id)featureWithCameraType:(long long)arg1 ;
+(id)featureWithIconClass:(id)arg1 confidence:(double)arg2 ;
+(id)featureWithCaptionResult:(id)arg1 confidence:(double)arg2 modelIdentifier:(id)arg3 canvasSize:(CGSize)arg4 ;
+(id)featureWithAssetMetadata:(id)arg1 ;
+(id)featureWithDeviceMotion:(id)arg1 orientation:(long long)arg2 ;
+(id)prominentObjectWithBoundingBox:(CGRect)arg1 canvasSize:(CGSize)arg2 confidence:(double)arg3 ;
+(CGRect)_aspectFaceRectFromSquareFaceRect:(CGRect)arg1 sizeInPixels:(CGSize)arg2 ;
+(id)nameForFeatureType:(unsigned long long)arg1 ;
+(long long)locationForNormalizedFrame:(CGRect)arg1 previousLocation:(long long)arg2 usingThirds:(BOOL)arg3 ;
+(void)_append:(id)arg1 toList:(id)arg2 ;
+(id)nameForLocation:(long long)arg1 ;
+(id)featureWithMetadata:(id)arg1 interfaceOrientation:(long long)arg2 isMirrored:(BOOL)arg3 canvasSize:(CGSize)arg4 ;
+(id)personWithBoundingBox:(CGRect)arg1 confidence:(double)arg2 canvasSize:(CGSize)arg3 ;
+(id)featureWithVisionRequest:(id)arg1 brightnessValue:(float)arg2 canvasSize:(CGSize)arg3 ;
+(id)objectClassificationWithLabel:(id)arg1 localizedValue:(id)arg2 boundingBox:(CGRect)arg3 confidence:(float)arg4 canvasSize:(CGSize)arg5 ;
+(id)sceneClassificationWithLabel:(id)arg1 localizedValue:(id)arg2 confidence:(float)arg3 canvasSize:(CGSize)arg4 ;
+(id)featureWithTaxonomyNode:(id)arg1 canvasSize:(CGSize)arg2 ;
+(id)featureWithColorInfo:(id)arg1 canvasSize:(CGSize)arg2 ;
+(id)localizedStringForLocation:(long long)arg1 isSubjectImplicit:(BOOL)arg2 ;
+(id)nameForOCRType:(long long)arg1 ;
+(id)flattenedFeatureList:(id)arg1 ;
+(id)unitTestingFaceFeatureWithSize:(CGSize)arg1 faceFrame:(CGRect)arg2 ;
+(id)unitTestingFeatureWithType:(unsigned long long)arg1 canvasSize:(CGSize)arg2 frame:(CGRect)arg3 value:(id)arg4 barcodeType:(id)arg5 ocrFeatureType:(long long)arg6 subFeatures:(id)arg7 ;
+(id)unitTestingFeature;
+(id)unitTestingFaceFeature;
+(id)unitTestingProminentObjectFeature;
+(id)unitTestingHorizonFeature;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSString *)value;
-(NSDictionary *)dictionaryRepresentation;
-(double)confidence;
-(double)creationDate;
-(unsigned long long)faceId;
-(CGRect)frame;
-(long long)cameraType;
-(double)brightness;
-(NSObject*<NSSecureCoding>)userContext;
-(long long)deviceOrientation;
-(NSArray *)subfeatures;
-(CMDeviceMotion *)deviceMotion;
-(CGSize)canvasSize;
-(double)blur;
-(AXMVisionFeatureAssetMetadata *)assetMetadata;
-(unsigned long long)featureType;
-(NSString *)caption;
-(BOOL)isCaption;
-(NSString *)classificationLocalizedValue;
-(AXMVisionFeatureFaceDetectionResult *)faceDetectionResult;
-(void)setUserContext:(NSObject*<NSSecureCoding>)arg1 ;
-(AXMLanguage *)textDetectionLanguage;
-(CGRect)normalizedFrame;
-(BOOL)isOCR;
-(BOOL)isTextDocument;
-(BOOL)isValueSpeakable;
-(BOOL)isFace;
-(BOOL)isSceneClassification;
-(BOOL)isObjectClassification;
-(BOOL)isModelClassification;
-(BOOL)isBlur;
-(BOOL)isBrightness;
-(BOOL)isIconClass;
-(void)_serializeWithCoder:(id)arg1 orDictionary:(id)arg2 ;
-(id)_nameForOCRFeatureType:(long long)arg1 ;
-(id)_valueForTextFeature;
-(BOOL)isTextRegion;
-(BOOL)isTextLine;
-(BOOL)isTextSequence;
-(BOOL)isTextCharacter;
-(BOOL)isTextDiacritic;
-(BOOL)_isTextFeatureValueSpeakable;
-(long long)locationUsingThirds:(BOOL)arg1 ;
-(NSString *)barcodeType;
-(long long)ocrFeatureType;
-(NSString *)classificationLabel;
-(float)horizonAngle;
-(BOOL)isEqualToAXMVisionFeature:(id)arg1 ;
-(AXMVisionFeatureColorInfo *)colorInfo;
-(SCD_Struct_AX15)facePose;
-(CGAffineTransform)horizonTransform;
-(BOOL)isBarcode;
-(BOOL)isRealtimeFace;
-(BOOL)isPerson;
-(BOOL)isColor;
-(BOOL)isHorizon;
-(BOOL)isMediaLegibility;
-(BOOL)isAssetMetadata;
-(BOOL)isRectangle;
-(BOOL)isMotion;
-(BOOL)isCameraMetadata;
-(BOOL)isProminentObject;
-(BOOL)isImageAesthetics;
-(CGRect)unpaddedDetectedFaceRect;
-(AXMVisionFeatureAestheticsResult *)aestheticsResult;
-(NSDictionary *)debugRectangles;
-(void)setDebugRectangles:(NSDictionary *)arg1 ;
-(AXMTaggedText *)taggedText;
@end

