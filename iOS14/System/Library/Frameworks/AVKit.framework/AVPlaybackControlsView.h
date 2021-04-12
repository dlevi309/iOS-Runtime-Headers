/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol AVPlaybackControlsViewVisibilityDelegate;
@class AVPlayerViewControllerCustomControlsView, AVStyleSheet, AVTouchIgnoringView, AVLayoutView, AVView, AVButton, NSArray, AVVolumeButtonControl, AVVolumeSlider, AVTransportControlsView, AVScrubber, AVPlaybackControlsRoutePickerView, NSValue, AVObservationController, UIViewPropertyAnimator, NSUUID;

@interface AVPlaybackControlsView : UIView {

	BOOL _fullScreen;
	BOOL _prefersVolumeSliderExpandedAutomatically;
	BOOL _showsPlaybackControls;
	BOOL _showsAudioControls;
	BOOL _doubleRowLayoutEnabled;
	BOOL _needsIntialLayout;
	BOOL _topAreaLayoutGuideExpanded;
	BOOL _prefersDoneButtonIncluded;
	BOOL _prefersVideoGravityButtonIncluded;
	BOOL _prefersFullScreenButtonIncluded;
	BOOL _prefersPiPButtonIncluded;
	AVPlayerViewControllerCustomControlsView* _customControlsView;
	AVStyleSheet* _styleSheet;
	long long _preferredUnobscuredArea;
	long long _includedContainers;
	AVTouchIgnoringView* _volumeControlsContainer;
	AVTouchIgnoringView* _playbackControlsContainer;
	AVLayoutView* _screenModeControls;
	AVLayoutView* _volumeControls;
	AVLayoutView* _prominentPlayButtonContainerView;
	AVView* _transportControlsContainerView;
	AVButton* _doneButton;
	AVButton* _fullScreenButton;
	AVButton* _videoGravityButton;
	AVButton* _pictureInPictureButton;
	NSArray* _customDisplayModeItems;
	AVVolumeButtonControl* _volumeButton;
	AVVolumeSlider* _volumeSlider;
	NSArray* _customAudioItems;
	AVButton* _prominentPlayButton;
	AVTransportControlsView* _transportControlsView;
	AVButton* _standardPlayPauseButton;
	AVButton* _skipForwardButton;
	AVButton* _skipBackButton;
	AVButton* _startLeftwardContentTransitionButton;
	AVButton* _startRightwardContentTransitionButton;
	AVScrubber* _scrubber;
	AVPlaybackControlsRoutePickerView* _routePickerView;
	AVButton* _mediaSelectionButton;
	NSArray* _customMediaItems;
	NSArray* _customControlItems;
	id<AVPlaybackControlsViewVisibilityDelegate> _visibilityDelegate;
	NSValue* _overrideLayoutMarginsWhenEmbeddedInline;
	AVObservationController* _observationController;
	NSArray* _defaultAudioControls;
	NSArray* _defaultDisplayModeControls;
	double _keyboardHeight;
	UIViewPropertyAnimator* _keyboardUIAvoidanceAnimator;
	UIViewPropertyAnimator* _playbackControlsVisibilityAnimator;
	NSUUID* _mostRecentAnimationCompletionsID;
	CGAffineTransform _overrideTransformForProminentPlayButton;

}

@property (nonatomic,readonly) AVObservationController * observationController;                                   //@synthesize observationController=_observationController - In the implementation block
@property (nonatomic,readonly) NSArray * defaultAudioControls;                                                    //@synthesize defaultAudioControls=_defaultAudioControls - In the implementation block
@property (nonatomic,readonly) NSArray * defaultDisplayModeControls;                                              //@synthesize defaultDisplayModeControls=_defaultDisplayModeControls - In the implementation block
@property (assign,nonatomic) double keyboardHeight;                                                               //@synthesize keyboardHeight=_keyboardHeight - In the implementation block
@property (nonatomic,readonly) UIViewPropertyAnimator * keyboardUIAvoidanceAnimator;                              //@synthesize keyboardUIAvoidanceAnimator=_keyboardUIAvoidanceAnimator - In the implementation block
@property (assign,getter=isDoubleRowLayoutEnabled,nonatomic) BOOL doubleRowLayoutEnabled;                         //@synthesize doubleRowLayoutEnabled=_doubleRowLayoutEnabled - In the implementation block
@property (assign,nonatomic) BOOL needsIntialLayout;                                                              //@synthesize needsIntialLayout=_needsIntialLayout - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * playbackControlsVisibilityAnimator;                         //@synthesize playbackControlsVisibilityAnimator=_playbackControlsVisibilityAnimator - In the implementation block
@property (nonatomic,retain) NSUUID * mostRecentAnimationCompletionsID;                                           //@synthesize mostRecentAnimationCompletionsID=_mostRecentAnimationCompletionsID - In the implementation block
@property (assign,getter=isTopAreaLayoutGuideExpanded,nonatomic) BOOL topAreaLayoutGuideExpanded;                 //@synthesize topAreaLayoutGuideExpanded=_topAreaLayoutGuideExpanded - In the implementation block
@property (nonatomic,readonly) BOOL showsProminentPlayButton; 
@property (nonatomic,readonly) BOOL includesTransportControls; 
@property (nonatomic,readonly) BOOL includesDisplayModeControlsContainer; 
@property (nonatomic,readonly) BOOL includesCustomDisplayModeControls; 
@property (nonatomic,readonly) BOOL includesAudioControlsContainer; 
@property (nonatomic,readonly) BOOL includesCustomAudioControls; 
@property (assign,nonatomic) BOOL showsPlaybackControls;                                                          //@synthesize showsPlaybackControls=_showsPlaybackControls - In the implementation block
@property (assign,nonatomic) BOOL prefersDoneButtonIncluded;                                                      //@synthesize prefersDoneButtonIncluded=_prefersDoneButtonIncluded - In the implementation block
@property (assign,nonatomic) BOOL prefersVideoGravityButtonIncluded;                                              //@synthesize prefersVideoGravityButtonIncluded=_prefersVideoGravityButtonIncluded - In the implementation block
@property (assign,nonatomic) BOOL prefersFullScreenButtonIncluded;                                                //@synthesize prefersFullScreenButtonIncluded=_prefersFullScreenButtonIncluded - In the implementation block
@property (assign,nonatomic) BOOL prefersPiPButtonIncluded;                                                       //@synthesize prefersPiPButtonIncluded=_prefersPiPButtonIncluded - In the implementation block
@property (nonatomic,retain) AVStyleSheet * styleSheet;                                                           //@synthesize styleSheet=_styleSheet - In the implementation block
@property (assign,getter=isFullScreen,nonatomic) BOOL fullScreen;                                                 //@synthesize fullScreen=_fullScreen - In the implementation block
@property (assign,nonatomic) long long preferredUnobscuredArea;                                                   //@synthesize preferredUnobscuredArea=_preferredUnobscuredArea - In the implementation block
@property (nonatomic,readonly) long long includedContainers;                                                      //@synthesize includedContainers=_includedContainers - In the implementation block
@property (nonatomic,readonly) AVTouchIgnoringView * volumeControlsContainer;                                     //@synthesize volumeControlsContainer=_volumeControlsContainer - In the implementation block
@property (nonatomic,readonly) AVTouchIgnoringView * playbackControlsContainer;                                   //@synthesize playbackControlsContainer=_playbackControlsContainer - In the implementation block
@property (nonatomic,readonly) AVLayoutView * screenModeControls;                                                 //@synthesize screenModeControls=_screenModeControls - In the implementation block
@property (nonatomic,readonly) AVLayoutView * volumeControls;                                                     //@synthesize volumeControls=_volumeControls - In the implementation block
@property (nonatomic,readonly) AVLayoutView * prominentPlayButtonContainerView;                                   //@synthesize prominentPlayButtonContainerView=_prominentPlayButtonContainerView - In the implementation block
@property (nonatomic,readonly) AVView * transportControlsContainerView;                                           //@synthesize transportControlsContainerView=_transportControlsContainerView - In the implementation block
@property (nonatomic,readonly) AVButton * doneButton;                                                             //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,readonly) AVButton * fullScreenButton;                                                       //@synthesize fullScreenButton=_fullScreenButton - In the implementation block
@property (nonatomic,readonly) AVButton * videoGravityButton;                                                     //@synthesize videoGravityButton=_videoGravityButton - In the implementation block
@property (nonatomic,readonly) AVButton * pictureInPictureButton;                                                 //@synthesize pictureInPictureButton=_pictureInPictureButton - In the implementation block
@property (nonatomic,copy,readonly) NSArray * customDisplayModeItems;                                             //@synthesize customDisplayModeItems=_customDisplayModeItems - In the implementation block
@property (nonatomic,readonly) AVVolumeButtonControl * volumeButton;                                              //@synthesize volumeButton=_volumeButton - In the implementation block
@property (nonatomic,readonly) AVVolumeSlider * volumeSlider;                                                     //@synthesize volumeSlider=_volumeSlider - In the implementation block
@property (nonatomic,copy,readonly) NSArray * customAudioItems;                                                   //@synthesize customAudioItems=_customAudioItems - In the implementation block
@property (nonatomic,readonly) AVButton * prominentPlayButton;                                                    //@synthesize prominentPlayButton=_prominentPlayButton - In the implementation block
@property (nonatomic,readonly) AVTransportControlsView * transportControlsView;                                   //@synthesize transportControlsView=_transportControlsView - In the implementation block
@property (nonatomic,readonly) AVButton * standardPlayPauseButton;                                                //@synthesize standardPlayPauseButton=_standardPlayPauseButton - In the implementation block
@property (nonatomic,readonly) AVButton * skipForwardButton;                                                      //@synthesize skipForwardButton=_skipForwardButton - In the implementation block
@property (nonatomic,readonly) AVButton * skipBackButton;                                                         //@synthesize skipBackButton=_skipBackButton - In the implementation block
@property (nonatomic,readonly) AVButton * startLeftwardContentTransitionButton;                                   //@synthesize startLeftwardContentTransitionButton=_startLeftwardContentTransitionButton - In the implementation block
@property (nonatomic,readonly) AVButton * startRightwardContentTransitionButton;                                  //@synthesize startRightwardContentTransitionButton=_startRightwardContentTransitionButton - In the implementation block
@property (nonatomic,readonly) AVScrubber * scrubber;                                                             //@synthesize scrubber=_scrubber - In the implementation block
@property (nonatomic,readonly) AVPlaybackControlsRoutePickerView * routePickerView;                               //@synthesize routePickerView=_routePickerView - In the implementation block
@property (nonatomic,readonly) AVButton * mediaSelectionButton;                                                   //@synthesize mediaSelectionButton=_mediaSelectionButton - In the implementation block
@property (nonatomic,copy,readonly) NSArray * customMediaItems;                                                   //@synthesize customMediaItems=_customMediaItems - In the implementation block
@property (nonatomic,copy,readonly) NSArray * customControlItems;                                                 //@synthesize customControlItems=_customControlItems - In the implementation block
@property (nonatomic,readonly) AVPlayerViewControllerCustomControlsView * customControlsView;                     //@synthesize customControlsView=_customControlsView - In the implementation block
@property (assign,nonatomic) BOOL prefersVolumeSliderExpandedAutomatically;                                       //@synthesize prefersVolumeSliderExpandedAutomatically=_prefersVolumeSliderExpandedAutomatically - In the implementation block
@property (assign,nonatomic,__weak) id<AVPlaybackControlsViewVisibilityDelegate> visibilityDelegate;              //@synthesize visibilityDelegate=_visibilityDelegate - In the implementation block
@property (assign,nonatomic) BOOL showsAudioControls;                                                             //@synthesize showsAudioControls=_showsAudioControls - In the implementation block
@property (nonatomic,readonly) BOOL hasVisibleSubview; 
@property (assign,nonatomic) CGAffineTransform overrideTransformForProminentPlayButton;                           //@synthesize overrideTransformForProminentPlayButton=_overrideTransformForProminentPlayButton - In the implementation block
@property (nonatomic,retain) NSValue * overrideLayoutMarginsWhenEmbeddedInline;                                   //@synthesize overrideLayoutMarginsWhenEmbeddedInline=_overrideLayoutMarginsWhenEmbeddedInline - In the implementation block
-(AVButton *)doneButton;
-(void)setFullScreen:(BOOL)arg1 ;
-(BOOL)isFullScreen;
-(void)setOverrideLayoutMarginsWhenEmbeddedInline:(NSValue *)arg1 ;
-(AVScrubber *)scrubber;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(AVVolumeButtonControl *)volumeButton;
-(void)setShowsPlaybackControls:(BOOL)arg1 ;
-(BOOL)showsPlaybackControls;
-(void)setupInitialLayout;
-(void)setIncludedContainers:(long long)arg1 animations:(/*^block*/id)arg2 ;
-(BOOL)includesAudioControlsContainer;
-(BOOL)includesCustomAudioControls;
-(BOOL)includesTransportControls;
-(BOOL)includesDisplayModeControlsContainer;
-(BOOL)includesCustomDisplayModeControls;
-(void)setCustomControlItems:(id)arg1 animations:(/*^block*/id)arg2 ;
-(BOOL)hasVisibleSubview;
-(void)setShowsAudioControls:(BOOL)arg1 ;
-(void)animateAlongsideVisibilityAnimationsWithAnimationCoordinator:(id)arg1 appearingViews:(id)arg2 disappearingViews:(id)arg3 ;
-(void)updateLayoutForChangedControlsVisibility;
-(void)setPrefersVolumeSliderExpanded:(BOOL)arg1 prefersVolumeButtonIncluded:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_showPlaybackControlsAnimated:(BOOL)arg1 ;
-(void)_updateTransportControlsFrame;
-(void)_updateVolumeControlsWithSize:(CGSize)arg1 ;
-(id)_preferredArrangedAudioModeViews;
-(id)_preferredArrangedDisplayModeViews;
-(id)_currentArrangedAudioModeViews;
-(id)_currentArrangedDisplayModeViews;
-(id)_audioViewsToRemoveDuringAnimation;
-(void)_collapse:(BOOL)arg1 view:(id)arg2 ;
-(id)_displayModeViewsToRemoveDuringAnimation;
-(void)_collapse:(BOOL)arg1 views:(id)arg2 ;
-(void)updateDisplayControlsVisibilityIncludedButtons:(id)arg1 ;
-(void)_updatePlaybackControlsContainerVisibilityAnimated:(BOOL)arg1 additionalActions:(/*^block*/id)arg2 ;
-(void)reevaluateHiddenStateForContainersAndSubviews;
-(void)_setupInitialLayout;
-(void)layoutSubviews;
-(void)_updateAreVolumeAndTransportControlsVisible;
-(void)_updateDoubleRowLayoutEnabled;
-(void)_animateKeyboardAvoidance:(long long)arg1 duration:(double)arg2 ;
-(id)_playbackControlsViewItems;
-(id)_playbackControlsViewsForControlItems:(id)arg1 withType:(long long)arg2 ;
-(id)_customControlsViewIfLoaded;
-(long long)includedContainers;
-(id)initWithFrame:(CGRect)arg1 styleSheet:(id)arg2 ;
-(AVTouchIgnoringView *)volumeControlsContainer;
-(AVTouchIgnoringView *)playbackControlsContainer;
-(AVLayoutView *)screenModeControls;
-(AVLayoutView *)volumeControls;
-(AVLayoutView *)prominentPlayButtonContainerView;
-(AVView *)transportControlsContainerView;
-(AVButton *)fullScreenButton;
-(AVButton *)videoGravityButton;
-(AVButton *)pictureInPictureButton;
-(NSArray *)customDisplayModeItems;
-(NSArray *)customAudioItems;
-(AVTransportControlsView *)transportControlsView;
-(NSArray *)customMediaItems;
-(BOOL)prefersVolumeSliderExpandedAutomatically;
-(void)setPrefersVolumeSliderExpandedAutomatically:(BOOL)arg1 ;
-(BOOL)showsAudioControls;
-(NSArray *)defaultAudioControls;
-(NSArray *)defaultDisplayModeControls;
-(UIViewPropertyAnimator *)keyboardUIAvoidanceAnimator;
-(BOOL)needsIntialLayout;
-(void)setNeedsIntialLayout:(BOOL)arg1 ;
-(UIViewPropertyAnimator *)playbackControlsVisibilityAnimator;
-(void)setPlaybackControlsVisibilityAnimator:(UIViewPropertyAnimator *)arg1 ;
-(NSUUID *)mostRecentAnimationCompletionsID;
-(void)setMostRecentAnimationCompletionsID:(NSUUID *)arg1 ;
-(BOOL)isTopAreaLayoutGuideExpanded;
-(void)setTopAreaLayoutGuideExpanded:(BOOL)arg1 ;
-(BOOL)prefersDoneButtonIncluded;
-(void)setPrefersDoneButtonIncluded:(BOOL)arg1 ;
-(BOOL)prefersVideoGravityButtonIncluded;
-(void)setPrefersVideoGravityButtonIncluded:(BOOL)arg1 ;
-(BOOL)prefersFullScreenButtonIncluded;
-(void)setPrefersFullScreenButtonIncluded:(BOOL)arg1 ;
-(BOOL)prefersPiPButtonIncluded;
-(void)avkit_reevaluateHiddenStateOfItem:(id)arg1 ;
-(void)avkit_sizeWasInvalidatedNeedingLayoutIfNeeded:(id)arg1 ;
-(void)setPrefersPiPButtonIncluded:(BOOL)arg1 ;
-(id<AVPlaybackControlsViewVisibilityDelegate>)visibilityDelegate;
-(void)setDoubleRowLayoutEnabled:(BOOL)arg1 ;
-(void)setVisibilityDelegate:(id<AVPlaybackControlsViewVisibilityDelegate>)arg1 ;
-(BOOL)isDoubleRowLayoutEnabled;
-(AVButton *)standardPlayPauseButton;
-(AVButton *)skipForwardButton;
-(AVButton *)skipBackButton;
-(AVButton *)startLeftwardContentTransitionButton;
-(AVButton *)startRightwardContentTransitionButton;
-(AVPlaybackControlsRoutePickerView *)routePickerView;
-(AVButton *)mediaSelectionButton;
-(AVPlayerViewControllerCustomControlsView *)customControlsView;
-(double)keyboardHeight;
-(void)setKeyboardHeight:(double)arg1 ;
-(NSValue *)overrideLayoutMarginsWhenEmbeddedInline;
-(void)safeAreaInsetsDidChange;
-(AVVolumeSlider *)volumeSlider;
-(BOOL)showsProminentPlayButton;
-(NSArray *)customControlItems;
-(void)showPlaybackControls:(BOOL)arg1 immediately:(BOOL)arg2 ;
-(void)_updateLayoutMargins;
-(void)setOverrideTransformForProminentPlayButton:(CGAffineTransform)arg1 ;
-(CGAffineTransform)overrideTransformForProminentPlayButton;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setStyleSheet:(AVStyleSheet *)arg1 ;
-(void)setPreferredUnobscuredArea:(long long)arg1 ;
-(AVStyleSheet *)styleSheet;
-(AVButton *)prominentPlayButton;
-(long long)preferredUnobscuredArea;
-(AVObservationController *)observationController;
-(void)dealloc;
@end

