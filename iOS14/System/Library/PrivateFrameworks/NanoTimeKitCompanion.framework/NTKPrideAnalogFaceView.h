/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>

@class NTKComplicationDisplayWrapperView, NTKPrideAnalogFaceViewComplicationFactory, CLKUIQuadView, NTKPrideCircularQuad, NTKPrideBetweenCircularQuad;

@interface NTKPrideAnalogFaceView : NTKAnalogFaceView {

	NTKComplicationDisplayWrapperView* _touchWrapper;
	NTKPrideAnalogFaceViewComplicationFactory* _faceViewComplicationFactory;
	CLKUIQuadView* _bandsView;
	NTKPrideCircularQuad* _bandsQuad;
	NTKPrideBetweenCircularQuad* _ribbonsQuad;
	NTKPrideCircularQuad* _activeQuad;
	float _contentScale;
	float _complicationBrightness;
	BOOL _wasSlow;
	BOOL _useXR;

}
+(id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)_updatePausedState;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)dealloc;
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_enumerateQuadViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(void)_prepareWristRaiseAnimation;
-(void)_performWristRaiseAnimation;
-(void)_prepareForEditing;
-(void)_cleanupAfterEditing;
-(void)screenWillTurnOnAnimated:(BOOL)arg1 ;
-(void)screenDidTurnOffAnimated:(BOOL)arg1 ;
-(id)_detachedComplicationDisplays;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(void)_loadLayoutRules;
-(void)_applyDataMode;
-(void)_handleOrdinaryScreenWake;
-(void)_finalizeForSnapshotting:(/*^block*/id)arg1 ;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3 ;
-(void)_cleanupAfterZoom;
-(double)_keylineCornerRadiusForComplicationSlot:(id)arg1 ;
-(void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2 ;
-(long long)_keylineStyleForComplicationSlot:(id)arg1 ;
-(double)keylineStyleForComplicationSlot:(id)arg1 ;
-(double)_handAlphaForEditMode:(long long)arg1 ;
-(double)_contentAlphaForEditMode:(long long)arg1 ;
-(long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 ;
-(id)_keylineViewForComplicationSlot:(id)arg1 ;
-(void)applyToForegroundZoomFraction:(double)arg1 faceScale:(double)arg2 ;
-(void)_applySlow;
-(long long)_utilitySlotForSlot:(id)arg1 ;
-(id)_slotForUtilitySlot:(long long)arg1 ;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(void)handleScreenBlanked;
-(BOOL)_supportsUnadornedSnapshot;
-(double)_minimumBreathingScaleForComplicationSlot:(id)arg1 ;
-(id)_complicationDisplayWrapperForTouch:(id)arg1 ;
-(void)_loadBackgroundViews;
-(void)_unloadBackgroundViews;
-(void)setActiveQuad:(id)arg1 ;
-(BOOL)_isActiveFace;
-(void)_updateComplicationColors;
-(id)adjustBrightnessOfColor:(id)arg1 brightnessAmount:(double)arg2 ;
-(double)_contentScaleForEditMode:(long long)arg1 ;
@end

