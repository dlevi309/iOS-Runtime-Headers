/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKSpriteKitAnalogFaceView.h>
#import <libobjc.A.dylib/NTKUtilityComplicationFactoryDelegate.h>

@class NTKUtilityComplicationFactory, UIColor, NTKUtilitarianScene, NSString;

@interface NTKUtilitarianFaceView : NTKSpriteKitAnalogFaceView <NTKUtilityComplicationFactoryDelegate> {

	NTKUtilityComplicationFactory* _complicationFactory;
	UIColor* _accentColor;
	unsigned long long _density;
	unsigned long long _dateStyle;

}

@property (nonatomic,readonly) NTKUtilitarianScene * analogScene; 
@property (assign,nonatomic) unsigned long long density;                       //@synthesize density=_density - In the implementation block
@property (assign,nonatomic) unsigned long long dateStyle;                     //@synthesize dateStyle=_dateStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_swatchColorForColorOption:(id)arg1 forDevice:(id)arg2 ;
+(id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2 ;
+(id)_swatchImageFaceName;
-(unsigned long long)dateStyle;
-(void)setDateStyle:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(void)setDensity:(unsigned long long)arg1 ;
-(unsigned long long)density;
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
-(double)_verticalPaddingForStatusBar;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(void)_loadLayoutRules;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(long long)_utilitySlotForSlot:(id)arg1 ;
-(void)_applyForegroundAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(double)_keylineCornerRadiusForComplicationSlot:(id)arg1 ;
-(BOOL)_slotSupportsCurvedText:(id)arg1 ;
-(id)_pickerMaskForSlot:(id)arg1 ;
-(long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 ;
-(id)_keylineViewForComplicationSlot:(id)arg1 ;
-(void)_curvedComplicationCircleRadius:(double*)arg1 centerAngle:(double*)arg2 maxAngularWidth:(double*)arg3 circleCenter:(CGPoint*)arg4 interior:(BOOL*)arg5 forSlot:(id)arg6 ;
-(id)_utilityComplicationSlots;
-(BOOL)slotUsesCurvedText:(long long)arg1 ;
-(id)_slotForUtilitySlot:(long long)arg1 ;
-(id)utilityDateComplicationFontForDateStyle:(unsigned long long)arg1 ;
-(void)cleanupAfterEditing;
-(double)_backgroundAlphaForEditMode:(long long)arg1 ;
-(double)_handsAlphaForEditMode:(long long)arg1 ;
-(void)_updateDateComplicationPositionIfNecessary;
-(id)_dateComplicationFontForStyle:(unsigned long long)arg1 ;
-(CGPoint)_dateComplicationCenterOffset;
-(CGPoint)_dateComplicationRightAlignment;
-(void)_loadScene;
-(BOOL)_supportsUnadornedSnapshot;
-(void)_configureComplicationFactory:(id)arg1 ;
-(BOOL)_shouldFreezeSceneForEditMode:(long long)arg1 ;
-(Class)_utilitarianSceneClass;
-(double)_secondHandAlphaForEditMode:(long long)arg1 ;
-(id)_keylineViewForColorEditing;
-(id)_keylineViewForDensityEditing;
-(CGRect)_keylineFrameForColorEditing;
-(CGRect)_keylineFrameForDensityEditing;
-(unsigned long long)_keylineLabelAlignmentForDensityEditing;
-(double)alphaForDimmedState;
-(unsigned long long)_keylineLabelAlignmentForColorEditing;
@end

