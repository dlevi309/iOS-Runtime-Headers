/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKFaceView.h>
#import <libobjc.A.dylib/NTKTimeView.h>
#import <libobjc.A.dylib/NTKSiderealDataSourceObserver.h>
#import <libobjc.A.dylib/CLKMonochromeFilterProvider.h>

@class NTKWhistlerAnalogFaceViewComplicationFactory, NSTimer, NTKSiderealDataSource, NTKSiderealData, CLKClockTimerToken, NTKSiderealDialBackgroundView, NTKSiderealAuxiliaryDialLabels, NTKSiderealTimeView, UILabel, UIView, CAShapeLayer, CALayer, NSDateFormatter, NTKFaceViewTapControl, NSString;

@interface NTKSiderealFaceView : NTKFaceView <NTKTimeView, NTKSiderealDataSourceObserver, CLKMonochromeFilterProvider> {

	long long _previousDataMode;
	NTKWhistlerAnalogFaceViewComplicationFactory* _faceViewComplicationFactory;
	BOOL _isHandlingHardwareEvents;
	NSTimer* _wheelDelayTimer;
	NSTimer* _buttonPressTimer;
	NTKSiderealDataSource* _dataSource;
	NTKSiderealData* _currentData;
	CLKClockTimerToken* _clockTimerToken;
	double _currentSolarDayProgress;
	double _interactionProgress;
	double _lastTestedWaypointProgress;
	NTKSiderealDialBackgroundView* _dialBackgroundView;
	NTKSiderealAuxiliaryDialLabels* _auxiliaryDialLabels;
	NTKSiderealTimeView* _siderealTimeView;
	UILabel* _offsetLabel;
	UIView* _darkeningContainerView;
	CAShapeLayer* _dialDarkeningLayer;
	CALayer* _timeViewDarkeningLayer;
	NSDateFormatter* _interactiveModeDateFormatter;
	NTKFaceViewTapControl* _viewModeTapButton;
	unsigned long long _viewMode;
	unsigned long long _previousViewMode;
	unsigned long long _transitionState;
	double _breathScaleModifier;
	double _rubberBandScaleModifier;
	BOOL _sunsetFilterEnabled;
	float _sunsetFilterRampUpStartProgress;
	float _sunsetFilterRampDownStartProgress;
	BOOL _useXR;

}

@property (assign,getter=isFrozen,nonatomic) BOOL frozen; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_prewarmSharedData;
-(void)setFrozen:(BOOL)arg1 ;
-(void)setTimeOffset:(double)arg1 ;
-(void)layoutSubviews;
-(BOOL)_wheelChangedWithEvent:(id)arg1 ;
-(void)setDataMode:(long long)arg1 ;
-(void)_loadUI;
-(void)dealloc;
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_enumerateQuadViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(void)_handleViewModeTapGesture:(id)arg1 ;
-(void)_prepareForEditing;
-(void)_cleanupAfterEditing;
-(id)filterForView:(id)arg1 style:(long long)arg2 ;
-(id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3 ;
-(id)colorForView:(id)arg1 accented:(BOOL)arg2 ;
-(void)screenWillTurnOnAnimated:(BOOL)arg1 ;
-(void)screenDidTurnOffAnimated:(BOOL)arg1 ;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(void)performScrollTestNamed:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_loadLayoutRules;
-(BOOL)_supportsTimeScrubbing;
-(void)_applyDataMode;
-(void)_becameActiveFace;
-(void)_becameInactiveFace;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(long long)_complicationPickerStyleForSlot:(id)arg1 ;
-(void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2 ;
-(void)_updateFramerate;
-(long long)_keylineStyleForComplicationSlot:(id)arg1 ;
-(CGRect)_legacyUnscaledKeylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(double)_complicationAlphaForEditMode:(long long)arg1 ;
-(double)_dialAlphaForEditMode:(long long)arg1 ;
-(id)_pickerMaskForSlot:(id)arg1 ;
-(id)_customEditOptionContainerViewForSlot:(id)arg1 ;
-(long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 ;
-(id)_keylineViewForComplicationSlot:(id)arg1 ;
-(void)_startClockUpdates;
-(void)_stopClockUpdates;
-(BOOL)_handlePhysicalButton:(unsigned long long)arg1 event:(unsigned long long)arg2 ;
-(void)handleScreenBlanked;
-(void)_timeDidUpdate:(id)arg1 ;
-(void)_disableCrown;
-(void)_asyncUpdateLocale;
-(BOOL)_canEnterInteractiveMode;
-(void)_enableCrown;
-(void)_updateLocale;
-(void)_setViewMode:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_setViewMode:(unsigned long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_interpolateFromViewMode:(unsigned long long)arg1 toViewMode:(unsigned long long)arg2 progress:(double)arg3 ;
-(void)_wheelDelayTimerFired;
-(void)_buttonPressTimerFired;
-(void)_loadTimeView;
-(void)_loadDial;
-(void)_unloadTimeView;
-(void)_unloadDial;
-(id)_dialViewImageRef;
-(id)_waypointViewImageRef;
-(id)_gnomonImage;
-(id)_dayGnomonImageFromSolarContainerView:(id)arg1 ;
-(id)_dayDiskBloomImageFromSolarContainerView:(id)arg1 ;
-(id)_dayDiscImageFromSolarContainerView:(id)arg1 ;
-(id)_nightGnomonImageFromSolarContainerView:(id)arg1 ;
-(id)_nightDiscImageFromSolarContainerView:(id)arg1 ;
-(id)_nightRingImageFromSolarContainerView:(id)arg1 ;
-(void)_unloadUI;
-(void)_forceSolarDayUpdate;
-(double)_solarDayProgressForCurrentTime;
-(double)_idealizedSolarDayProgress;
-(void)_animateSolarDayFromProgress:(double)arg1 toProgress:(double)arg2 minDuration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(id)_faceDisplayTime;
-(void)_updateTimeLabelsWithReferenceDate:(id)arg1 overrideDate:(id)arg2 ;
-(void)_setSolarDayProgress:(double)arg1 ;
-(BOOL)_isDayAnimationRunning;
-(void)_updateTimeScrubbingContent:(double)arg1 ;
-(void)_updateSunsetFilter;
-(void)_updateTimeViewOrbitWithSolarDayProgress:(double)arg1 ;
-(void)_updateSolarOrbitGlowPath:(double)arg1 ;
-(void)_updateWaypointLabel;
-(void)_prepareForSettingViewMode:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_cleanupAfterSettingViewMode:(unsigned long long)arg1 previousViewMode:(unsigned long long)arg2 ;
-(void)_resetInteractionProgress;
-(void)_updateStatusBarVisibility;
-(void)_loadAuxiliaryDialLabelsIfNeeded;
-(void)_loadOffsetLabelIfNeeded;
-(void)_refreshGlowPathState;
-(void)_tearDownAuxiliaryDialLabels;
-(void)_tearDownOffsetLabel;
-(void)setupDarkeningViewIfNeeded;
-(void)tearDownDarkeningView;
-(void)_applyScaleToTimeView;
-(CGAffineTransform)_timeViewScaleTransform;
-(CGPathRef)newTimeViewPathForDarkeningView;
-(double)_darkeningViewAlphaForEditMode:(long long)arg1 ;
-(double)_timeDarkeningViewAlphaForEditMode:(long long)arg1 ;
-(CGRect)_timeViewKeylineFrameForEditing;
-(CGImageRef)newImageRefFromView:(id)arg1 ;
-(id)_newGnomonLayer;
-(CGImageRef)newImageRefFromSolarContainerView:(id)arg1 withHeight:(double)arg2 ;
-(id)_outerComplicationColors;
-(id)_innerComplicationColors;
-(void)dataSourceDidUpdateSolarData:(id)arg1 ;
-(BOOL)_wantsMinorDetents;
-(double)_timeViewAlphaForEditMode:(long long)arg1 ;
-(id)closestWaypointForSolarDayProgress:(double)arg1 range:(double)arg2 ;
-(id)waypointBetweenPreviousOffset:(double)arg1 currentOffset:(double)arg2 ;
@end

