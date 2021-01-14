/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSSecureCoding;
@class CIImage, NSArray, NSSet, NSNumber, AXMetricSession, NSObject, NSData, NSString, AXMVisionFeature, NSDictionary;

@interface AXMVisionResult : NSObject <NSSecureCoding> {

	CIImage* _image;
	NSArray* _features;
	NSSet* _evaluatedFeatureTypes;
	NSNumber* _appliedImageOrientation;
	NSArray* _effectiveTextDetectionLocales;
	AXMetricSession* _metricSession;
	long long _imageRegistrationState;
	NSObject*<NSSecureCoding> _userContext;
	NSData* _equivalenceToken;
	NSString* _detectedTextDescription;

}

@property (nonatomic,readonly) NSArray * faceFeatures; 
@property (nonatomic,readonly) NSArray * sceneClassificationFeatures; 
@property (nonatomic,readonly) NSArray * objectClassificationFeatures; 
@property (nonatomic,readonly) NSArray * modelClassificationFeatures; 
@property (nonatomic,readonly) NSArray * captionFeatures; 
@property (nonatomic,readonly) NSArray * ocrFeatures; 
@property (nonatomic,readonly) NSArray * blurFeatures; 
@property (nonatomic,readonly) NSArray * brightnessFeatures; 
@property (nonatomic,readonly) NSArray * iconClassFeatures; 
@property (nonatomic,readonly) BOOL includesNSFWFeatures; 
@property (nonatomic,readonly) NSArray * sensitiveContentForCaptionFeatures; 
@property (nonatomic,readonly) BOOL captionMayContainSensitiveContent; 
@property (nonatomic,retain) NSString * detectedTextDescription;                          //@synthesize detectedTextDescription=_detectedTextDescription - In the implementation block
@property (nonatomic,retain) CIImage * image;                                             //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSArray * features;                                          //@synthesize features=_features - In the implementation block
@property (nonatomic,retain) NSSet * evaluatedFeatureTypes;                               //@synthesize evaluatedFeatureTypes=_evaluatedFeatureTypes - In the implementation block
@property (nonatomic,retain) NSNumber * appliedImageOrientation;                          //@synthesize appliedImageOrientation=_appliedImageOrientation - In the implementation block
@property (nonatomic,retain) AXMetricSession * metricSession;                             //@synthesize metricSession=_metricSession - In the implementation block
@property (assign,nonatomic) long long imageRegistrationState;                            //@synthesize imageRegistrationState=_imageRegistrationState - In the implementation block
@property (nonatomic,retain) NSObject*<NSSecureCoding> userContext;                       //@synthesize userContext=_userContext - In the implementation block
@property (nonatomic,retain) NSArray * effectiveTextDetectionLocales;                     //@synthesize effectiveTextDetectionLocales=_effectiveTextDetectionLocales - In the implementation block
@property (nonatomic,readonly) AXMVisionFeature * colorInfoFeature; 
@property (nonatomic,readonly) AXMVisionFeature * assetMetadataFeature; 
@property (nonatomic,readonly) NSString * localizedDetectedTextHint; 
@property (nonatomic,readonly) NSString * localizedDetectedIconHint; 
@property (nonatomic,readonly) NSDictionary * featureGates; 
@property (nonatomic,retain) NSData * equivalenceToken;                                   //@synthesize equivalenceToken=_equivalenceToken - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)resultWithImage:(id)arg1 features:(id)arg2 orientation:(id)arg3 metricSession:(id)arg4 userContext:(id)arg5 ;
+(id)resultWithImage:(id)arg1 features:(id)arg2 orientation:(id)arg3 metricSession:(id)arg4 ;
-(NSObject*<NSSecureCoding>)userContext;
-(void)setImage:(CIImage *)arg1 ;
-(NSArray *)features;
-(id)sortedFeatures;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAppliedImageOrientation:(NSNumber *)arg1 ;
-(AXMetricSession *)metricSession;
-(NSSet *)evaluatedFeatureTypes;
-(NSNumber *)appliedImageOrientation;
-(NSArray *)effectiveTextDetectionLocales;
-(void)setEquivalenceToken:(NSData *)arg1 ;
-(void)setEffectiveTextDetectionLocales:(NSArray *)arg1 ;
-(void)setEvaluatedFeatureTypes:(NSSet *)arg1 ;
-(void)setMetricSession:(AXMetricSession *)arg1 ;
-(void)setImageRegistrationState:(long long)arg1 ;
-(CIImage *)image;
-(void)setFeatures:(NSArray *)arg1 ;
-(id)description;
-(void)setUserContext:(NSObject*<NSSecureCoding>)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)ocrFeatures;
-(id)_init;
-(id)detectedFeatureDescriptionWithOptions:(id)arg1 ;
-(NSString *)detectedTextDescription;
-(long long)imageRegistrationState;
-(BOOL)isEqualToAXMVisionResult:(id)arg1 ;
-(NSArray *)faceFeatures;
-(NSArray *)sceneClassificationFeatures;
-(NSArray *)objectClassificationFeatures;
-(NSArray *)captionFeatures;
-(BOOL)includesNSFWFeatures;
-(NSArray *)sensitiveContentForCaptionFeatures;
-(NSArray *)blurFeatures;
-(NSArray *)brightnessFeatures;
-(NSArray *)iconClassFeatures;
-(void)setDetectedTextDescription:(NSString *)arg1 ;
-(NSData *)equivalenceToken;
-(NSDictionary *)featureGates;
-(AXMVisionFeature *)colorInfoFeature;
-(AXMVisionFeature *)assetMetadataFeature;
-(NSString *)localizedDetectedTextHint;
-(NSString *)localizedDetectedIconHint;
-(BOOL)captionMayContainSensitiveContent;
-(NSArray *)modelClassificationFeatures;
-(id)sensitiveContentFeatures;
-(BOOL)isEqual:(id)arg1 ;
@end

