/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKAVFaceBaseView.h>

@protocol NTKAVListing;
@class NTKTaskScheduler, NSTimer, NTKDelayedBlock, UIView;

@interface NTKAVListingFaceBaseView : NTKAVFaceBaseView {

	BOOL _updateWhenUnpausing;
	NTKTaskScheduler* _taskScheduler;
	BOOL _preLoadingVideoOnSleep;
	BOOL _preLoadedVideoOnSleep;
	BOOL _shouldPlayOnWake;
	BOOL _isPauseLockedout;
	BOOL _isPaused;
	BOOL _shouldPause;
	NSTimer* _playOnWakeTimeout;
	NTKDelayedBlock* _playNextVideoDelayBlock;
	NTKDelayedBlock* _pauseLockoutBlock;
	UIView* _blackView;
	long long _previousDataMode;
	BOOL _shouldChangeVariantForScreenWake;
	BOOL _contentUnloadedForFaceSwiping;
	id<NTKAVListing> _currentListing;

}

@property (nonatomic,retain) id<NTKAVListing> currentListing;                    //@synthesize currentListing=_currentListing - In the implementation block
@property (assign,nonatomic) BOOL shouldChangeVariantForScreenWake;              //@synthesize shouldChangeVariantForScreenWake=_shouldChangeVariantForScreenWake - In the implementation block
@property (assign,nonatomic) BOOL contentUnloadedForFaceSwiping;                 //@synthesize contentUnloadedForFaceSwiping=_contentUnloadedForFaceSwiping - In the implementation block
@property (nonatomic,readonly) BOOL paused;                                      //@synthesize isPaused=_isPaused - In the implementation block
@property (nonatomic,readonly) BOOL shouldPause;                                 //@synthesize shouldPause=_shouldPause - In the implementation block
-(void)dealloc;
-(void)_reset;
-(BOOL)paused;
-(BOOL)shouldPause;
-(void)_playVideo;
-(void)_cancelAllTasks;
-(id)_curtainView;
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(void)_prepareForEditing;
-(void)_applyDataMode;
-(void)_handleWristRaiseScreenWake;
-(void)_handleOrdinaryScreenWake;
-(void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_applyFrozen;
-(void)_unpauseFromSwitcher;
-(void)_updatePaused;
-(void)_applySlow;
-(void)_prepareForOrb;
-(void)_cleanupAfterOrb:(BOOL)arg1 ;
-(void)_playVideoForScreenWake:(id)arg1 ;
-(void)_hideCurtainView;
-(void)_handleScreenWake;
-(BOOL)_timeLabelUsesLegibility;
-(BOOL)_curtainViewVisible;
-(void)_showCurtainView;
-(void)_updateImageToBlur;
-(id)_nextListing;
-(void)_loadVideoForListing;
-(void)_resetVideoForListing;
-(BOOL)_changeCurrentListing;
-(void)_performPreloadVideoTask;
-(void)setNormalComplicationDisplayWrapper:(id)arg1 forSlot:(id)arg2 ;
-(void)_cancelDelayedPlayback;
-(void)_cancelPauseLockout;
-(void)faultInFaceContentSkippedDuringSwiping;
-(void)_queuePreloadVideoTask;
-(id)_onDeckPosterImageView;
-(void)_selectDefaultListing;
-(void)_pauseImmediately;
-(void)_playQueuedUpVideo;
-(BOOL)shouldChangeVariantForScreenWake;
-(void)_playNextVideo;
-(void)_activatePauseLockout;
-(void)_transitionToPosterView:(id)arg1 ;
-(void)_fadeToCurtainViewWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fadeFromCurtainViewWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_needsVignette;
-(id)_complicationFlickerWorkgroundAnimationWithDuration:(double)arg1 applier:(/*^block*/id)arg2 ;
-(void)_playNextVideoAfterDelay:(double)arg1 ;
-(void)_handleFaceStyleDidChange;
-(id<NTKAVListing>)currentListing;
-(void)setCurrentListing:(id<NTKAVListing>)arg1 ;
-(void)setShouldChangeVariantForScreenWake:(BOOL)arg1 ;
-(BOOL)contentUnloadedForFaceSwiping;
-(void)setContentUnloadedForFaceSwiping:(BOOL)arg1 ;
@end

