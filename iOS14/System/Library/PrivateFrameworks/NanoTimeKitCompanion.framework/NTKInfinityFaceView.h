/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKAVListingFaceBaseView.h>

@class UIView, UILabel, NTKFaceViewComplicationFactory, NTKInfinityController, NTKInfinityListing, UIColor;

@interface NTKInfinityFaceView : NTKAVListingFaceBaseView {

	unsigned _tapPromptedVideoChange : 1;
	UIView* _cornerView;
	UILabel* _reviewLabel;
	long long _previousDataMode;
	NTKFaceViewComplicationFactory* _faceViewComplicationFactory;
	NTKInfinityController* _controller;
	NTKInfinityListing* _currentQueueListing;
	UIColor* _currentComplicationColor;

}
-(void)layoutSubviews;
-(id)videoPlayerView;
-(void)didAddSubview:(id)arg1 ;
-(void)dealloc;
-(void)_handleSingleTap:(id)arg1 ;
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
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(void)_loadLayoutRules;
-(BOOL)_supportsTimeScrubbing;
-(void)_applyDataMode;
-(void)_handleWristRaiseScreenWake;
-(void)_handleOrdinaryScreenWake;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(void)_layoutForegroundContainerView;
-(long long)_complicationPickerStyleForSlot:(id)arg1 ;
-(long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 ;
-(id)_nextListing;
-(void)_performPreloadVideoTask;
-(void)_updatePaused;
-(id)_onDeckPosterImageView;
-(void)_selectDefaultListing;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(void)handleScreenBlanked;
-(id)_viewForEditOption:(id)arg1 ;
-(double)_rightSideMarginForDigitalTimeHeroPosition;
-(void)videoPlayerViewDidBeginPlaying:(id)arg1 ;
-(void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1 ;
-(double)_timeLabelAlphaForEditMode:(long long)arg1 ;
-(BOOL)_shouldFadeToTransitionView;
-(BOOL)_wantsTimeTravelStatusModule;
-(void)videoPlayerViewDidBeginPlayingQueuedVideo:(id)arg1 ;
-(void)_updateReviewLabel;
-(id)_editingComplicationColor;
-(void)_updateComplicationWithColor:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_shouldQueueKeepAlive;
-(id)_posterImageViewForStyle:(unsigned long long)arg1 ;
-(void)setTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 customEditMode:(long long)arg4 slot:(id)arg5 ;
-(id)_currentPosterImageView;
-(void)updateReviewDirection:(id)arg1 ;
-(double)_adjustmentForBottomTimeLayout;
@end

