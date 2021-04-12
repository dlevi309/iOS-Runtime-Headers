/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKFaceViewComplicationFactory.h>

@class NTKUtilityComplicationFactory, NSArray, UIColor;

@interface NTKDigitialUtilitarianFaceViewComplicationFactory : NTKFaceViewComplicationFactory {

	NTKUtilityComplicationFactory* _complicationFactory;
	BOOL _usesLegibility;
	NSArray* _supportedComplicationSlots;
	/*^block*/id _shadowColorProviderBlock;
	/*^block*/id _timeTravelYAdjustmentProviderBlock;
	UIColor* _shadowColor;

}

@property (nonatomic,retain) UIColor * shadowColor;                             //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) BOOL usesLegibility;                               //@synthesize usesLegibility=_usesLegibility - In the implementation block
@property (nonatomic,retain) NSArray * supportedComplicationSlots;              //@synthesize supportedComplicationSlots=_supportedComplicationSlots - In the implementation block
@property (nonatomic,copy) id shadowColorProviderBlock;                         //@synthesize shadowColorProviderBlock=_shadowColorProviderBlock - In the implementation block
@property (nonatomic,copy) id timeTravelYAdjustmentProviderBlock;               //@synthesize timeTravelYAdjustmentProviderBlock=_timeTravelYAdjustmentProviderBlock - In the implementation block
-(UIColor *)shadowColor;
-(void)setShadowColor:(UIColor *)arg1 ;
-(id)initForDevice:(id)arg1 ;
-(void)setUsesLegibility:(BOOL)arg1 ;
-(double)_timeTravelYAdjustment;
-(id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4 ;
-(void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3 ;
-(unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2 ;
-(void)applyComplicationContentSpecificAttributesAnimated:(BOOL)arg1 faceView:(id)arg2 ;
-(void)loadLayoutRulesForFaceView:(id)arg1 ;
-(void)prepareForEditingForFaceView:(id)arg1 ;
-(void)cleanupAfterEditingForFaceView:(id)arg1 ;
-(id)createComplicationContentSpecificAttributesAnimationWithAttributes:(unsigned long long)arg1 faceView:(id)arg2 forSlots:(id)arg3 ;
-(void)setAlpha:(double)arg1 faceView:(id)arg2 ;
-(BOOL)usesLegibility;
-(void)setSupportedComplicationSlots:(NSArray *)arg1 ;
-(void)setTimeTravelYAdjustmentProviderBlock:(id)arg1 ;
-(BOOL)fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 faceView:(id)arg3 ;
-(NSArray *)supportedComplicationSlots;
-(long long)_photosUtilitySlotForSlot:(id)arg1 ;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 attributes:(unsigned long long)arg3 faceView:(id)arg4 ;
-(void)setForegroundColor:(id)arg1 faceView:(id)arg2 ;
-(void)setShadowColor:(id)arg1 faceView:(id)arg2 ;
-(void)setUsesLegibility:(BOOL)arg1 faceView:(id)arg2 ;
-(id)shadowColorProviderBlock;
-(void)setShadowColorProviderBlock:(id)arg1 ;
-(id)timeTravelYAdjustmentProviderBlock;
@end

