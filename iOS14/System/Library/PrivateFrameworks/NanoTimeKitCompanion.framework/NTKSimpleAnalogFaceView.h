/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>
#import <libobjc.A.dylib/NTKUtilityComplicationFactoryDelegate.h>

@class NTKUtilityComplicationFactory, UIColor, UIView, NTKSimpleAnalogFaceViewTicksView, NSString;

@interface NTKSimpleAnalogFaceView : NTKAnalogFaceView <NTKUtilityComplicationFactoryDelegate> {

	NTKUtilityComplicationFactory* _complicationFactory;
	UIColor* _accentColor;
	UIColor* _ticksSmallColor;
	UIColor* _ticksLargeColor;
	double _ticksSmallLightness;
	double _ticksLargeLightness;
	UIView* _backgroundView;
	NTKSimpleAnalogFaceViewTicksView* _ticksViews[4];
	unsigned long long _density;
	unsigned long long _dateStyle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_swatchColorForColorOption:(id)arg1 forDevice:(id)arg2 ;
+(id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2 ;
+(id)_swatchImageFaceName;
-(void)layoutSubviews;
-(void)_setupViews;
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
-(double)_verticalPaddingForStatusBar;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(void)_loadLayoutRules;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(double)_keylineCornerRadiusForComplicationSlot:(id)arg1 ;
-(CGRect)_legacyUnscaledKeylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_slotSupportsCurvedText:(id)arg1 ;
-(id)_pickerMaskForSlot:(id)arg1 ;
-(long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 ;
-(id)_keylineViewForComplicationSlot:(id)arg1 ;
-(void)_curvedComplicationCircleRadius:(double*)arg1 centerAngle:(double*)arg2 maxAngularWidth:(double*)arg3 circleCenter:(CGPoint*)arg4 interior:(BOOL*)arg5 forSlot:(id)arg6 ;
-(long long)_utilitySlotForSlot:(id)arg1 ;
-(BOOL)slotUsesCurvedText:(long long)arg1 ;
-(id)_slotForUtilitySlot:(long long)arg1 ;
-(id)utilityDateComplicationFontForDateStyle:(unsigned long long)arg1 ;
-(void)cleanupAfterEditing;
-(double)_backgroundAlphaForEditMode:(long long)arg1 ;
-(double)_handsAlphaForEditMode:(long long)arg1 ;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(void)_updateDateComplicationPositionIfNecessary;
-(id)_dateComplicationFontForStyle:(unsigned long long)arg1 ;
-(CGPoint)_dateComplicationCenterOffset;
-(CGPoint)_dateComplicationRightAlignment;
-(void)_applyForegroundAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_configureComplicationFactory:(id)arg1 ;
-(void)_removeViews;
-(void)_updateComplicationOverlapHiding;
-(id)_faceColorSchemeForFaceColor:(unsigned long long)arg1 ;
-(id)_createTicksViewForDensityIfNeeded:(unsigned long long)arg1 ;
-(void)_setDensity:(unsigned long long)arg1 ;
-(double)_secondHandAlphaForEditMode:(long long)arg1 ;
-(void)_removeComplicationOverlapHiding;
-(id)_keylineViewForColorEditing;
-(id)_keylineViewForDensityEditing;
-(CGRect)_keylineFrameForColorEditing;
-(void)_createBackgroundViewIfNeeded;
-(void)_addDetailedMinutesToView:(id)arg1 ;
-(double)alphaForDimmedState;
-(unsigned long long)_keylineLabelAlignmentForColorEditing;
@end

