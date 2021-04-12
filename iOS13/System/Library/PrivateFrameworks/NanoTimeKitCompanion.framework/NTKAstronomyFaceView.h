/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKDigitalFaceView.h>
#import <libobjc.A.dylib/NTKTimeView.h>
#import <libobjc.A.dylib/NTKAstronomyRotationModelObserver.h>
#import <libobjc.A.dylib/NTKAstronomyVistaViewObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NTKDigitialUtilitarianFaceViewComplicationFactory, NTKDigitalTimeLabelStyle, NTKAstronomyRotationModel, UIPanGestureRecognizer, UITapGestureRecognizer, NSString, NTKDateComplicationLabel, UIImageView, NTKAstronomyVistaView, NTKColoringLabel, NTKAstronomyLocationDot, NSDate, NSNumber, NSDateFormatter, NTKDelayedBlock, NSArray, UIView;

@interface NTKAstronomyFaceView : NTKDigitalFaceView <NTKTimeView, NTKAstronomyRotationModelObserver, NTKAstronomyVistaViewObserver, UIGestureRecognizerDelegate> {

	NTKDigitialUtilitarianFaceViewComplicationFactory* _faceViewComplicationFactory;
	NTKDigitalTimeLabelStyle* _digitalTimeLabelDefaultStyle;
	NTKDigitalTimeLabelStyle* _digitalTimeLabelSmallInUpperRightCornerStyle;
	CGPoint _digitalTimeLabelZoomEndingCenter;
	NTKAstronomyRotationModel* _rotationModel;
	CLLocationCoordinate2D _initialCoordinate;
	 _previousTranslation;
	float _recentMovement;
	UIPanGestureRecognizer* _spheroidPanGesture;
	UITapGestureRecognizer* _supplementalModeDoubleTapGesture;
	UITapGestureRecognizer* _interactiveModeTapGesture;
	NSString* _locationManagerToken;
	NTKDateComplicationLabel* _legacyDateLabel;
	UIImageView* _legacyLeftBottomImageView;
	UIImageView* _legacyRightBottomImageView;
	NTKAstronomyVistaView* _astronomyVistaView;
	NTKColoringLabel* _scrubLabel;
	NTKColoringLabel* _phaseLabel;
	NTKColoringLabel* _overrideDateLabel;
	UIImageView* _spheroidLabels[8];
	NTKAstronomyLocationDot* _locationDot;
	NSDate* _overrideDate;
	NSDate* _crownDate;
	NSNumber* _clockTimerToken;
	NSDateFormatter* _scrubDateFormatter[3];
	CGRect _phaseLabelDefaultFrame;
	float _supplementalFontLineHeightPlusDescender;
	NTKDelayedBlock* _wheelDelayedBlock;
	NTKDelayedBlock* _physicalButtonDelayedBlock;
	long long _previousDataMode;
	long long _animatingToViewMode;
	unsigned long long _vista;
	NSArray* _editingAnimations[3];
	UIView* _borrowedCircleView;
	UIView* _borrowedHandsView;
	unsigned _isAnimatingViewMode : 1;
	unsigned _isContentLoaded : 1;
	unsigned _isLocationCurrent : 1;
	unsigned _isHandlingCrownEvents : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isFrozen,nonatomic) BOOL frozen; 
-(void)dealloc;
-(id)_date;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)layoutSubviews;
-(void)setTimeOffset:(double)arg1 ;
-(BOOL)_wheelChangedWithEvent:(id)arg1 ;
-(void)setViewMode:(long long)arg1 ;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(void)_prepareWristRaiseAnimation;
-(void)_performWristRaiseAnimation;
-(id)_digitalTimeLabelStyleFromViewMode:(long long)arg1 faceBounds:(CGRect)arg2 ;
-(void)_prepareForEditing;
-(void)_cleanupAfterEditing;
-(id)_detachedComplicationDisplays;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(BOOL)_needsForegroundContainerView;
-(void)_loadLayoutRules;
-(BOOL)_usesCustomZoom;
-(void)_applyDataMode;
-(void)_becameActiveFace;
-(void)_becameInactiveFace;
-(void)_applyShowContentForUnadornedSnapshot;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(unsigned long long)_timeLabelOptions;
-(void)_layoutForegroundContainerView;
-(void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3 ;
-(void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2 ;
-(void)_cleanupAfterZoom;
-(BOOL)_timeLabelUsesLegibility;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(long long)_complicationPickerStyleForSlot:(id)arg1 ;
-(double)_keylineCornerRadiusForComplicationSlot:(id)arg1 ;
-(void)_enumerateQuadViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2 ;
-(double)keylineStyleForComplicationSlot:(id)arg1 ;
-(long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 ;
-(void)_stopClockUpdates;
-(void)_startClockUpdates;
-(double)_minimumBreathingScaleForComplicationSlot:(id)arg1 ;
-(void)astronomyVistaViewContentsAnimationFinished:(id)arg1 ;
-(void)astronomyVistaViewWillDisplay:(id)arg1 forTime:(double)arg2 ;
-(void)rotationModelStoppedByDecelerating:(id)arg1 ;
-(void)_hideLocationDot;
-(void)_animateTransitionToViewMode:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setIsAnimatingViewMode:(BOOL)arg1 ;
-(void)_applyViewMode:(long long)arg1 ;
-(BOOL)_shouldHideStatusBarForViewMode:(long long)arg1 ;
-(void)_setAstronomyFaceViewModeDefault;
-(void)_setAstronomyFaceViewModeNonInteractive;
-(void)_setAstronomyFaceViewModeInteractive;
-(void)_setAstronomyFaceViewModeSupplemental;
-(void)_interpolateFromPose:(const NTKAstronomyFaceViewAnimationPose*)arg1 toPose:(const NTKAstronomyFaceViewAnimationPose*)arg2 progress:(float)arg3 ;
-(void)_updateTimeAnimated:(BOOL)arg1 ;
-(void)_disableCrown;
-(void)_enableCrownForAstronomyVista:(unsigned long long)arg1 ;
-(void)_showLocationDotIfNeeded;
-(void)_animateTransitionToViewMode:(long long)arg1 ;
-(void)_applyDataModeAnimated:(BOOL)arg1 ;
-(void)_setupAstronomyVistaView;
-(void)_layoutSpheroidLabel:(int)arg1 ;
-(void)_handleSpheroidPanGesture:(id)arg1 ;
-(void)_handleSupplementalModeGesture:(id)arg1 ;
-(void)_handleInteractiveModeGesture:(id)arg1 ;
-(void)_applyVista:(unsigned long long)arg1 ;
-(void)_updateLocaleAnimated:(BOOL)arg1 ;
-(void)_asyncUpdateTime;
-(void)_asyncUpdateLocale;
-(void)_layoutPhaseLabel;
-(void)_layoutLegacyViews;
-(void)_updateLocation:(id)arg1 lastLocation:(id)arg2 ;
-(BOOL)_canEnterInteractiveMode;
-(void)_wheelDelayedBlockFired;
-(void)_applyFromVista:(unsigned long long)arg1 toVista:(unsigned long long)arg2 fraction:(double)arg3 ;
-(unsigned long long)_detentTypeForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)_physicalButtonDelayedBlockFired;
-(BOOL)_shouldHandleHardwareEvents;
@end
