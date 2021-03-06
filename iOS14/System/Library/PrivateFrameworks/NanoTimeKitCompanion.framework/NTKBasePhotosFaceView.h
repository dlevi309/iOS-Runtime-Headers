/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKBackgroundImageFaceView.h>
#import <libobjc.A.dylib/NTKPhotoImageViewDelegate.h>

@class NTKPhotoImageView, UIView, NSTimer, NTKTaskScheduler, UIColor, NTKUtilityComplicationFactory, NTKAlbumEmptyView, UIImage, NSValue, NSString;

@interface NTKBasePhotosFaceView : NTKBackgroundImageFaceView <NTKPhotoImageViewDelegate> {

	NTKPhotoImageView* _posterImageView;
	BOOL _paused;
	BOOL _updateWhenUnpausing;
	UIView* _blackView;
	BOOL _shouldPlayIntro;
	BOOL _shouldPlayOnWake;
	BOOL _isStartingPlaybackOnSingleTap;
	NSTimer* _playOnWakeTimeout;
	NTKTaskScheduler* _taskScheduler;
	BOOL _preLoadingPhotoOnSleep;
	BOOL _preloadedPhotoOnSleep;
	long long _previousDataMode;
	unsigned long long _dateAlignment;
	unsigned long long _photosColor;
	UIView* _cornerView;
	UIColor* _foregroundColor;
	UIColor* _shadowColor;
	UIColor* _legibilityGradientColor;
	UIView* _currentGradientView;
	unsigned _isContentLoaded : 1;
	unsigned _isInteractive : 1;
	unsigned _isUsingLegibility : 1;
	NTKUtilityComplicationFactory* _complicationFactory;
	BOOL _noPhotosViewVisible;
	NTKAlbumEmptyView* _noPhotosView;
	UIImage* _photosColorRamp;
	UIImage* _photosMonoColorRamp;
	NSValue* _monochromeColorMatrix;

}

@property (nonatomic,readonly) unsigned long long dateAlignment; 
@property (nonatomic,readonly) UIView * cornerView;                                              //@synthesize cornerView=_cornerView - In the implementation block
@property (nonatomic,readonly) BOOL isInteractive;                                               //@synthesize isInteractive=_isInteractive - In the implementation block
@property (nonatomic,readonly) NTKPhotoImageView * posterImageView;                              //@synthesize posterImageView=_posterImageView - In the implementation block
@property (nonatomic,readonly) NTKAlbumEmptyView * noPhotosView;                                 //@synthesize noPhotosView=_noPhotosView - In the implementation block
@property (assign,getter=isNoPhotosViewVisible,nonatomic) BOOL noPhotosViewVisible;              //@synthesize noPhotosViewVisible=_noPhotosViewVisible - In the implementation block
@property (nonatomic,readonly) UIImage * photosColorRamp;                                        //@synthesize photosColorRamp=_photosColorRamp - In the implementation block
@property (nonatomic,readonly) UIImage * photosMonoColorRamp;                                    //@synthesize photosMonoColorRamp=_photosMonoColorRamp - In the implementation block
@property (nonatomic,retain) NSValue * monochromeColorMatrix;                                    //@synthesize monochromeColorMatrix=_monochromeColorMatrix - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2 ;
-(BOOL)isInteractive;
-(void)_animateIn;
-(void)layoutSubviews;
-(BOOL)_screenOn;
-(void)dealloc;
-(NTKPhotoImageView *)posterImageView;
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(id)_digitalTimeLabelStyleFromViewMode:(long long)arg1 faceBounds:(CGRect)arg2 ;
-(void)_prepareForEditing;
-(void)_cleanupAfterEditing;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(void)_loadLayoutRules;
-(BOOL)_usesCustomZoom;
-(void)_applyDataMode;
-(void)_handleWristRaiseScreenWake;
-(void)_handleOrdinaryScreenWake;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(void)_layoutForegroundContainerView;
-(void)_applyFrozen;
-(void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3 ;
-(void)_cleanupAfterZoom;
-(long long)_complicationPickerStyleForSlot:(id)arg1 ;
-(double)_keylineCornerRadiusForComplicationSlot:(id)arg1 ;
-(void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2 ;
-(void)_unpauseFromSwitcher;
-(void)_handleScreenWake;
-(void)_playVideoForScreenWake:(id)arg1 ;
-(void)_showCurtainView;
-(void)_hideCurtainView;
-(void)_prepareForOrb;
-(void)_updatePaused;
-(void)_cleanupAfterOrb:(BOOL)arg1 ;
-(void)_applySlow;
-(void)_playVideo;
-(BOOL)_curtainViewVisible;
-(BOOL)_timeLabelUsesLegibility;
-(long long)_utilitySlotForSlot:(id)arg1 ;
-(double)_editSpeedForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(double)_timeTravelYAdjustment;
-(void)_configureComplicationFactory;
-(unsigned long long)dateAlignment;
-(unsigned long long)photosColor;
-(void)_applyAlignment;
-(void)_applyPhotosColor;
-(void)_setComplicationsHidden:(BOOL)arg1 ;
-(void)_setDateAttributes:(id)arg1 animated:(BOOL)arg2 ;
-(double)_foregroundAlphaForEditMode:(long long)arg1 ;
-(double)_foregroundAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(double)_backgroundImageAlphaForEditMode:(long long)arg1 ;
-(void)setPhotosColor:(unsigned long long)arg1 ;
-(void)_applyPhotosColorRamp:(id)arg1 photosColorRampAmount:(double)arg2 monochromeColorMatrix:(id)arg3 toPhotosImageView:(id)arg4 ;
-(void)applyPhotosColorRamp:(id)arg1 photosMonoColorRamp:(id)arg2 monochromeColorMatrix:(id)arg3 toPhotosImageView:(id)arg4 ;
-(void)_applyPhotosColorFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 fraction:(double)arg3 ;
-(void)_playPhoto;
-(void)_playStill;
-(void)_invalidatePreloadedPhoto;
-(BOOL)screenWillGoDark;
-(void)_scheduleSleepPreloadTask;
-(BOOL)_preloadNextPhoto;
-(void)_applyForegroundAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(id)_newGradientViewWithColor:(id)arg1 ;
-(void)_applyComplicationContentSpecificAttributesAnimated:(BOOL)arg1 ;
-(void)_didStartPlayingIrisOnSingleTap;
-(void)_applyScrubbingForegroundColor:(id)arg1 shadowColor:(id)arg2 ;
-(void)imageViewDidBeginPlaying:(id)arg1 ;
-(void)imageViewDidEndPlaying:(id)arg1 ;
-(void)setNoPhotosViewVisible:(BOOL)arg1 ;
-(double)_timeLabelAlphaForEditMode:(long long)arg1 ;
-(id)_selectedContentView;
-(void)_playIrisOnSingleTap;
-(void)setMonochromeColorMatrix:(NSValue *)arg1 ;
-(void)_startScrubbingAnimationFromUIViewAnimateWithDuration;
-(void)_endScrubbingAnimationFromUIViewAnimateWithDuration;
-(BOOL)isCheapCopy;
-(UIView *)cornerView;
-(NTKAlbumEmptyView *)noPhotosView;
-(BOOL)isNoPhotosViewVisible;
-(UIImage *)photosColorRamp;
-(UIImage *)photosMonoColorRamp;
-(NSValue *)monochromeColorMatrix;
@end

