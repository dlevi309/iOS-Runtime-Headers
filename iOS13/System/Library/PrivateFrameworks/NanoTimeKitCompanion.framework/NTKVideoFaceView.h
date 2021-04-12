/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKAVListingFaceBaseView.h>

@class NTKDigitialUtilitarianFaceViewComplicationFactory, UITapGestureRecognizer;

@interface NTKVideoFaceView : NTKAVListingFaceBaseView {

	NTKDigitialUtilitarianFaceViewComplicationFactory* _faceViewComplicationFactory;
	unsigned long long _theme;
	UITapGestureRecognizer* _tapToPlayGesture;
	unsigned _isUsingDefaultListing : 1;
	unsigned _isComplicationColorApplied : 1;
	unsigned _isComplicationColorGray : 1;

}
-(void)dealloc;
-(void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1 ;
-(void)videoPlayerViewDidBeginPlaying:(id)arg1 ;
-(id)_posterImageView;
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(void)_prepareForEditing;
-(void)_cleanupAfterEditing;
-(id)_detachedComplicationDisplays;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(void)_loadLayoutRules;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(double)_timeTravelYAdjustment;
-(void)_updatePaused;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(long long)_complicationPickerStyleForSlot:(id)arg1 ;
-(double)_keylineCornerRadiusForComplicationSlot:(id)arg1 ;
-(double)keylineStyleForComplicationSlot:(id)arg1 ;
-(long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 ;
-(id)_nextListing;
-(void)_performPreloadVideoTask;
-(id)_onDeckPosterImageView;
-(void)_selectDefaultListing;
-(id)_complicationForegroundColor;
-(void)_handleTapToPlayVideoGesture:(id)arg1 ;
-(id)_posterImageViewWithTheme:(unsigned long long)arg1 ;
-(id)_defaultListing;
-(BOOL)_shouldDelayBeforePlayingNextVideo;
-(double)_minimumBreathingScaleForComplicationSlot:(id)arg1 ;
-(id)_viewForEditOption:(id)arg1 ;
-(double)_rightSideMarginForDigitalTimeHeroPosition;
@end

