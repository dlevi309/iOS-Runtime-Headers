/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKFaceView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/NTKUtilityComplicationFactoryDelegate.h>

@class NTKCharacterTimeView, UIView, NTKUtilityComplicationFactory, UITapGestureRecognizer, UIColor, NSString;

@interface NTKCharacterFaceView : NTKFaceView <UIGestureRecognizerDelegate, NTKUtilityComplicationFactoryDelegate> {

	NTKCharacterTimeView* _characterTimeView;
	UIView* _circleView;
	UIView* _handsView;
	NTKUtilityComplicationFactory* _complicationFactory;
	UITapGestureRecognizer* _timeTapRecognizer;
	unsigned _isContentLoaded : 1;
	long long _prevDataMode;
	unsigned long long _optionCharacter;
	UIColor* _optionClothingColor;
	double _optionClothingDesaturation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_swatchColorForColorOption:(id)arg1 forDevice:(id)arg2 ;
+(id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2 ;
+(void)_prewarmForDevice:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
-(double)_verticalPaddingForStatusBar;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_enumerateQuadViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(void)_loadContentViews;
-(void)_unloadContentViews;
-(void)_prepareWristRaiseAnimation;
-(void)_performWristRaiseAnimation;
-(void)_prepareForEditing;
-(void)_cleanupAfterEditing;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(BOOL)_needsForegroundContainerView;
-(void)_loadLayoutRules;
-(BOOL)_supportsTimeScrubbing;
-(BOOL)_usesCustomZoom;
-(void)_applyDataMode;
-(void)_applyShowsCanonicalContent;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3 ;
-(void)_cleanupAfterZoom;
-(double)_keylineCornerRadiusForComplicationSlot:(id)arg1 ;
-(void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2 ;
-(BOOL)_slotSupportsCurvedText:(id)arg1 ;
-(id)_pickerMaskForSlot:(id)arg1 ;
-(void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2 ;
-(long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 ;
-(id)_keylineViewForComplicationSlot:(id)arg1 ;
-(void)_curvedComplicationCircleRadius:(double*)arg1 centerAngle:(double*)arg2 maxAngularWidth:(double*)arg3 circleCenter:(CGPoint*)arg4 interior:(BOOL*)arg5 forSlot:(id)arg6 ;
-(void)applyToForegroundZoomFraction:(double)arg1 faceScale:(double)arg2 ;
-(void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(long long)_utilitySlotForSlot:(id)arg1 ;
-(BOOL)slotUsesCurvedText:(long long)arg1 ;
-(id)_slotForUtilitySlot:(long long)arg1 ;
-(id)utilityDateComplicationFontForDateStyle:(unsigned long long)arg1 ;
-(CGRect)_keylineFrameForComplicationSlot:(id)arg1 selected:(BOOL)arg2 ;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(void)_applyForegroundAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_applyDataModeFromOldDataMode:(long long)arg1 ;
-(void)_faceTapped:(id)arg1 ;
-(void)_updateComplicationViewsAlphasWithAnimation:(BOOL)arg1 ;
-(CGRect)_tapToSpeakRect;
-(void)_legacyOutputTime:(id)arg1 ;
-(void)_outputTime:(id)arg1 ;
-(void)_stopOutputtingTime;
-(BOOL)_isAnalog;
-(void)_scrubToDate:(id)arg1 animated:(BOOL)arg2 ;
@end
