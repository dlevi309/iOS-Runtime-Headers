/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKFaceView.h>

@class UIView, NTKFaceColorScheme, NTKExtraLargeTimeView, NTKDigitalTimeLabel, NTKDigitalTimeLabelStyle, UILabel, UITapGestureRecognizer;

@interface NTKExtraLargeFaceView : NTKFaceView {

	UIView* _zoomingIconCircleView;
	UIView* _zoomingIconTimeView;
	NTKFaceColorScheme* _colorScheme;
	unsigned long long _faceColor;
	double _currentFaceViewScale;
	double _currentFaceOffsetY;
	NTKExtraLargeTimeView* _largeTimeLabel;
	NTKDigitalTimeLabel* _smallTimeLabel;
	NTKDigitalTimeLabelStyle* _smallTimeLabelStyle;
	UILabel* _timeTravelLabel;
	NTKDigitalTimeLabelStyle* _timeTravelStyle;
	UIView* _timeTravelExitView;
	UITapGestureRecognizer* _timeTravelExitRecognizer;
	BOOL _viewsOffsetForStatusBar;
	BOOL _isEditing;
	BOOL _complicationIsVisible;
	BOOL _snapshotContentViewsLoaded;
	UIView* _complicationEditingTimeOverlayView;

}
+(id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2 ;
-(void)layoutSubviews;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(double)_verticalPaddingForStatusBar;
-(void)_prepareForStatusChange:(BOOL)arg1 ;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(void)_prepareWristRaiseAnimation;
-(void)_performWristRaiseAnimation;
-(void)_prepareForEditing;
-(void)_cleanupAfterEditing;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(BOOL)_needsForegroundContainerView;
-(void)_loadLayoutRules;
-(BOOL)_supportsTimeScrubbing;
-(void)_applyShowContentForUnadornedSnapshot;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_applyFrozen;
-(void)_layoutForegroundContainerView;
-(void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3 ;
-(void)_cleanupAfterZoom;
-(long long)_complicationPickerStyleForSlot:(id)arg1 ;
-(double)_keylineCornerRadiusForComplicationSlot:(id)arg1 ;
-(void)_updateComplicationVisibility;
-(double)_statusBarOffsetForSmallTime;
-(void)_createTimeViews;
-(void)_removeTimeViews;
-(double)_statusBarOffsetForComplicationBackground;
-(void)_handleTimeTravelTapGesture:(id)arg1 ;
-(void)_configureSmallTimeLabelColors;
-(id)_timeTravelStyle;
-(void)_scrubToDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)endScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_complicationView;
-(double)_statusBarOffsetForComplication;
-(void)_initSmallTimeLabelIfNecessary;
-(void)_initLargeTimeLabelIfNecessary;
-(double)_smallTimeAlphaForEditMode:(long long)arg1 ;
-(void)_configureLargeTimeLabelColors;
-(UIEdgeInsets)_keylineLabelActiveAreaInsetsForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)_noteComplicationVisibilityChanged;
-(BOOL)_canStartTimeScrubbing;
-(BOOL)_wantsTimeTravelStatusModule;
@end

