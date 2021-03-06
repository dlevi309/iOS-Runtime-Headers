/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKSpriteKitAnalogFaceView.h>
#import <libobjc.A.dylib/NTKUtilityComplicationFactoryDelegate.h>

@class NTKStopwatchButton, NTKChronoButton, NTKUtilityComplicationFactory, NTKChronoPalette, UIColor, UILabel, NTKColoringLabel, _LapLabel, NSTimer, NSDate, CLKRelativeDateTextProvider, NTKChronoScene, NTKChronoHandsView, NSString;

@interface NTKChronoFaceView : NTKSpriteKitAnalogFaceView <NTKUtilityComplicationFactoryDelegate> {

	NTKStopwatchButton* _startSessionButton;
	NTKChronoButton* _pauseButton;
	NTKChronoButton* _lapResetButton;
	NTKUtilityComplicationFactory* _complicationFactory;
	NTKChronoPalette* _palette;
	UIColor* _labelColor;
	UILabel* _totalLabel;
	NTKColoringLabel* _totalTimeLabel;
	NTKColoringLabel* _lapTimeLabel;
	_LapLabel* _lapLabel;
	NSTimer* _resetLabelTimer;
	NSDate* _tritiumDate;
	unsigned long long _currentMode;
	CLKRelativeDateTextProvider* _totalTimeTextProvider;
	CLKRelativeDateTextProvider* _lapTimeTextProvider;
	NSDate* _stopwatchStartDate;

}

@property (nonatomic,readonly) NTKChronoScene * chronoScene; 
@property (nonatomic,readonly) NTKChronoHandsView * timeView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_swatchColorForColorOption:(id)arg1 forDevice:(id)arg2 ;
+(id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2 ;
+(Class)_timeViewClass;
-(void)reload;
-(void)stateChanged;
-(void)dealloc;
-(BOOL)inSession;
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
-(void)_prepareWristRaiseAnimation;
-(void)_performWristRaiseAnimation;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(BOOL)_needsForegroundContainerView;
-(void)_loadLayoutRules;
-(BOOL)_wantsStatusBarHidden;
-(BOOL)_usesCustomZoom;
-(void)_applyDataMode;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(void)_layoutForegroundContainerView;
-(void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3 ;
-(void)_cleanupAfterZoom;
-(long long)_complicationPickerStyleForSlot:(id)arg1 ;
-(double)_keylineCornerRadiusForComplicationSlot:(id)arg1 ;
-(CGRect)_legacyUnscaledKeylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_slotSupportsCurvedText:(id)arg1 ;
-(id)_pickerMaskForSlot:(id)arg1 ;
-(void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2 ;
-(long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 ;
-(id)_keylineViewForComplicationSlot:(id)arg1 ;
-(void)_curvedComplicationCircleRadius:(double*)arg1 centerAngle:(double*)arg2 maxAngularWidth:(double*)arg3 circleCenter:(CGPoint*)arg4 interior:(BOOL*)arg5 forSlot:(id)arg6 ;
-(void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(long long)_utilitySlotForSlot:(id)arg1 ;
-(BOOL)slotUsesCurvedText:(long long)arg1 ;
-(id)_slotForUtilitySlot:(long long)arg1 ;
-(id)utilityDateComplicationFontForDateStyle:(unsigned long long)arg1 ;
-(double)_handsAlphaForEditMode:(long long)arg1 ;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(void)_updateDateComplicationPositionIfNecessary;
-(void)_stopStopwatchUpdates;
-(void)setUserInteractionForButtonsEnabled:(BOOL)arg1 ;
-(void)fadeStartSessionButtonToAlpha:(double)arg1 animated:(BOOL)arg2 ;
-(void)_pauseButtonPressed;
-(void)_lapResetButtonPressed;
-(double)_chronoLabelFontSize;
-(id)_timeLabelWithFontSize:(double)arg1 ;
-(void)_startSessionButtonPressed;
-(void)_showAppropriateModeAnimated:(BOOL)arg1 ;
-(void)_removeModeRelatedUIs;
-(void)_layoutStopwatchTimeViews;
-(void)_updateStopwatchTimeViewsMaxWidth;
-(void)_updateComplicationFactoryWithDateComplicationView:(id)arg1 ;
-(void)_configureComplicationAlphasForFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(double)_buttonAlphaForEditMode:(long long)arg1 ;
-(id)_dateForegroundColorForEditMode:(long long)arg1 ;
-(id)_dateAccentColorForEditMode:(long long)arg1 ;
-(void)_applyPaletteToTimeView:(id)arg1 ;
-(NTKChronoScene *)chronoScene;
-(void)updateStartSessionButtonGlyph;
-(void)_reconsiderStopwatchUpdates;
-(void)_synchronizeChronoTimeLabelsWithStopwatch;
-(void)_applyTransformToForegroundViews:(CGAffineTransform)arg1 ;
-(void)_enumerateChronoModeViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateTimeModeViewsWithBlock:(/*^block*/id)arg1 ;
-(id)_dateComplicationFontForStyle:(unsigned long long)arg1 ;
-(BOOL)startStop;
-(void)_applyModeForStopwatchModelAnimated:(BOOL)arg1 ;
-(void)_showTimeModeAnimated:(BOOL)arg1 ;
-(void)_loadTimeModeViews;
-(void)_loadChronoModeViews;
-(void)fadeInLowerSubdialAnimated:(BOOL)arg1 ;
-(void)_setDateComplicationAlpha:(double)arg1 animated:(BOOL)arg2 ;
-(void)fadeOutLowerSubdialAnimated:(BOOL)arg1 ;
-(void)_startStopwatchUpdates;
-(CGPoint)_dateComplicationCenterOffset;
-(CGPoint)_dateComplicationRightAlignment;
-(void)_loadScene;
-(BOOL)_supportsUnadornedSnapshot;
-(BOOL)_canStartTimeScrubbing;
-(BOOL)_isComplicationSlotInsideDial:(id)arg1 ;
-(BOOL)_handsAreInForegroundForEditMode:(long long)arg1 ;
-(void)updateStartSessionButtonGlyphWithCustomPalette:(id)arg1 ;
-(BOOL)_isStopwatchUIVisible;
-(void)_reloadStopwatchState;
-(void)_showChronographModeAnimated:(BOOL)arg1 ;
-(void)_updateStopwatchButtons;
-(void)_showLapSplitIfNecessary;
-(void)_applyFrozenLapTimeWithTimeInterval:(double)arg1 ;
-(void)_resetLapLabelAfterSplit;
-(BOOL)lapReset;
-(void)_synchronizeStopwatchStartDate;
-(void)_updateChronoTimeLabelsWithUnmodifiedDateForNow:(id)arg1 ;
-(unsigned long long)_chronoTimeUnits;
-(void)_updateLapLabelLaps;
-(void)lapAdded;
@end

