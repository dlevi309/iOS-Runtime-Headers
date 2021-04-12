/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSSecureCoding;
@class CIImage, NSArray, NSSet, NSNumber, AXMDiagnostics, NSObject, NSString, AXMVisionFeature, AXMLanguage;

@interface AXMVisionResult : NSObject <NSSecureCoding> {

	CIImage* _image;
	NSArray* _features;
	NSSet* _evaluatedFeatureTypes;
	NSNumber* _appliedImageOrientation;
	AXMDiagnostics* _diagnostics;
	long long _imageRegistrationState;
	NSObject*<NSSecureCoding> _userContext;
	NSString* _detectedFeatureDescription;
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
@property (nonatomic,retain) NSString * detectedFeatureDescription;                  //@synthesize detectedFeatureDescription=_detectedFeatureDescription - In the implementation block
@property (nonatomic,retain) NSString * detectedTextDescription;                     //@synthesize detectedTextDescription=_detectedTextDescription - In the implementation block
@property (nonatomic,retain) CIImage * image;                                        //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSArray * features;                                     //@synthesize features=_features - In the implementation block
@property (nonatomic,retain) NSSet * evaluatedFeatureTypes;                          //@synthesize evaluatedFeatureTypes=_evaluatedFeatureTypes - In the implementation block
@property (nonatomic,retain) NSNumber * appliedImageOrientation;                     //@synthesize appliedImageOrientation=_appliedImageOrientation - In the implementation block
@property (nonatomic,retain) AXMDiagnostics * diagnostics;                           //@synthesize diagnostics=_diagnostics - In the implementation block
@property (assign,nonatomic) long long imageRegistrationState;                       //@synthesize imageRegistrationState=_imageRegistrationState - In the implementation block
@property (nonatomic,retain) NSObject*<NSSecureCoding> userContext;                  //@synthesize userContext=_userContext - In the implementation block
@property (nonatomic,readonly) AXMVisionFeature * colorInfoFeature; 
@property (nonatomic,readonly) AXMVisionFeature * assetMetadataFeature; 
@property (nonatomic,readonly) NSString * localizedDetectedTextHint; 
@property (nonatomic,readonly) NSString * localizedDetectedIconHint; 
@property (nonatomic,readonly) AXMLanguage * detectedTextLanguage; 
+(BOOL)supportsSecureCoding;
+(id)resultWithImage:(id)arg1 features:(id)arg2 orientation:(id)arg3 diagnostics:(id)arg4 userContext:(id)arg5 ;
+(id)resultWithImage:(id)arg1 features:(id)arg2 orientation:(id)arg3 diagnostics:(id)arg4 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(CIImage *)image;
-(void)setImage:(CIImage *)arg1 ;
-(NSObject*<NSSecureCoding>)userContext;
-(NSArray *)features;
-(void)setFeatures:(NSArray *)arg1 ;
-(AXMDiagnostics *)diagnostics;
-(NSString *)detectedFeatureDescription;
-(NSString *)detectedTextDescription;
-(long long)imageRegistrationState;
-(id)sortedFeatures;
-(void)setAppliedImageOrientation:(NSNumber *)arg1 ;
-(NSSet *)evaluatedFeatureTypes;
-(NSNumber *)appliedImageOrientation;
-(void)setUserContext:(NSObject*<NSSecureCoding>)arg1 ;
-(void)setEvaluatedFeatureTypes:(NSSet *)arg1 ;
-(void)setDiagnostics:(AXMDiagnostics *)arg1 ;
-(void)setImageRegistrationState:(long long)arg1 ;
-(NSArray *)faceFeatures;
-(NSArray *)sceneClassificationFeatures;
-(NSArray *)objectClassificationFeatures;
-(NSArray *)captionFeatures;
-(NSArray *)blurFeatures;
-(NSArray *)brightnessFeatures;
-(NSArray *)iconClassFeatures;
-(void)setDetectedTextDescription:(NSString *)arg1 ;
-(void)setDetectedFeatureDescription:(NSString *)arg1 ;
-(AXMLanguage *)detectedTextLanguage;
-(AXMVisionFeature *)colorInfoFeature;
-(AXMVisionFeature *)assetMetadataFeature;
-(NSString *)localizedDetectedTextHint;
-(NSString *)localizedDetectedIconHint;
-(NSArray *)modelClassificationFeatures;
-(NSArray *)ocrFeatures;
@end

