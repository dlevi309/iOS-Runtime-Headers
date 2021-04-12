/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@class NSMutableString, NSMutableArray, AXMVisionFeature;

@interface AXMDescriptionBuilder : NSObject {

	long long _builderOptions;
	NSMutableString* _speakableDescription;
	NSMutableString* _visualDescription;
	NSMutableArray* _faceFeatures;
	NSMutableArray* _classificationLocalizedValues;
	NSMutableArray* _iconClassFeatures;
	AXMVisionFeature* _captionFeature;
	AXMVisionFeature* _blurFeature;
	AXMVisionFeature* _brightnessFeature;

}

@property (nonatomic,retain) AXMVisionFeature * blurFeature;                    //@synthesize blurFeature=_blurFeature - In the implementation block
@property (nonatomic,retain) AXMVisionFeature * brightnessFeature;              //@synthesize brightnessFeature=_brightnessFeature - In the implementation block
+(id)builderWithOptions:(long long)arg1 ;
-(id)_initWithOptions:(long long)arg1 ;
-(void)addDetectedClassificationLocalizedValue:(id)arg1 ;
-(void)_addCaptionInformationToDescription:(id)arg1 ;
-(void)_addBrightnessInformationToDescription:(id)arg1 ;
-(void)_addBlurInformationToDescription:(id)arg1 ;
-(void)_addFaceInformationToDescription:(id)arg1 ;
-(void)_addClassificationInformationToDescription:(id)arg1 ;
-(void)_addIconClassInformationToDescription:(id)arg1 ;
-(id)buildSpeakableDescription;
-(id)_stringForPauseType:(long long)arg1 ;
-(void)_appendPauseType:(long long)arg1 toDescriptionIfNeeded:(id)arg2 ;
-(void)_appendToDescription:(id)arg1 afterPauseType:(long long)arg2 withContents:(id)arg3 ;
-(void)addDetectedFaces:(id)arg1 ;
-(void)addDetectedClassificationFeatures:(id)arg1 ;
-(void)setDetectedCaption:(id)arg1 ;
-(void)addDetectedIconClasses:(id)arg1 ;
-(id)buildVisualDescription;
-(AXMVisionFeature *)blurFeature;
-(void)setBlurFeature:(AXMVisionFeature *)arg1 ;
-(AXMVisionFeature *)brightnessFeature;
-(void)setBrightnessFeature:(AXMVisionFeature *)arg1 ;
@end

