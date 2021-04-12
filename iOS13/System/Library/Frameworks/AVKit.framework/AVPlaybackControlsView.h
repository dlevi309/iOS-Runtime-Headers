/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class AVPlayerViewControllerCustomControlsView, AVStyleSheet, UIView, AVBackdropView, AVView, AVButton, NSArray, AVVolumeButtonControl, AVVolumeSlider, AVTransportControlsView, AVScrubber, AVPlaybackControlsRoutePickerView, NSValue, AVObservationController, UIViewPropertyAnimator, NSLayoutConstraint, NSUUID;

@interface AVPlaybackControlsView : UIView {

	BOOL _fullScreen;
	BOOL _doubleRowLayoutEnabled;
	BOOL _needsIntialLayout;
	BOOL _topAreaLayoutGuideExpanded;
	AVPlayerViewControllerCustomControlsView* _customControlsView;
	AVStyleSheet* _styleSheet;
	long long _preferredUnobscuredArea;
	long long _includedContainers;
	UIView* _volumeControlsContainer;
	UIView* _playbackControlsContainer;
	AVBackdropView* _screenModeControls;
	AVBackdropView* _volumeControls;
	AVBackdropView* _prominentPlayButtonBackdropView;
	AVBackdropView* _miniPlayPauseButtonBackdropView;
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
	AVButton* _miniPlayPauseButton;
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
	NSValue* _overrideLayoutMarginsWhenEmbeddedInline;
	AVObservationController* _observationController;
	NSArray* _defaultAudioControls;
	NSArray* _defaultDisplayModeControls;
	double _keyboardHeight;
	UIViewPropertyAnimator* _keyboardUIAvoidanceAnimator;
	NSLayoutConstraint* _volumeButtonBottomToLayoutMarginsGuideBottomConstraint;
	NSLayoutConstraint* _volumeTopToLayoutGuideTopConstraint;
	NSLayoutConstraint* _volumeTopToViewTopConstraint;
	NSLayoutConstraint* _screenModeControlsToVolumeControlsSpacingConstraint;
	UIViewPropertyAnimator* _playbackControlsVisibilityAnimator;
	NSUUID* _mostRecentAnimationCompletionsID;
	CGAffineTransform _overrideTransformForProminentPlayButton;

}

@property (nonatomic,readonly) AVObservationController * observationController;                                          //@synthesize observationController=_observationController - In the implementation block
@property (nonatomic,readonly) NSArray * defaultAudioControls;                                                           //@synthesize defaultAudioControls=_defaultAudioControls - In the implementation block
@property (nonatomic,readonly) NSArray * defaultDisplayModeControls;                                                     //@synthesize defaultDisplayModeControls=_defaultDisplayModeControls - In the implementation block
@property (assign,nonatomic) double keyboardHeight;                                                                      //@synthesize keyboardHeight=_keyboardHeight - In the implementation block
@property (nonatomic,readonly) UIViewPropertyAnimator * keyboardUIAvoidanceAnimator;                                     //@synthesize keyboardUIAvoidanceAnimator=_keyboardUIAvoidanceAnimator - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * volumeButtonBottomToLayoutMarginsGuideBottomConstraint;              //@synthesize volumeButtonBottomToLayoutMarginsGuideBottomConstraint=_volumeButtonBottomToLayoutMarginsGuideBottomConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * volumeTopToLayoutGuideTopConstraint;                                 //@synthesize volumeTopToLayoutGuideTopConstraint=_volumeTopToLayoutGuideTopConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * volumeTopToViewTopConstraint;                                        //@synthesize volumeTopToViewTopConstraint=_volumeTopToViewTopConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * screenModeControlsToVolumeControlsSpacingConstraint;                 //@synthesize screenModeControlsToVolumeControlsSpacingConstraint=_screenModeControlsToVolumeControlsSpacingConstraint - In the implementation block
@property (assign,getter=isDoubleRowLayoutEnabled,nonatomic) BOOL doubleRowLayoutEnabled;                                //@synthesize doubleRowLayoutEnabled=_doubleRowLayoutEnabled - In the implementation block
@property (assign,nonatomic) BOOL needsIntialLayout;                                                                     //@synthesize needsIntialLayout=_needsIntialLayout - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * playbackControlsVisibilityAnimator;                                //@synthesize playbackControlsVisibilityAnimator=_playbackControlsVisibilityAnimator - In the implementation block
@property (nonatomic,retain) NSUUID * mostRecentAnimationCompletionsID;                                                  //@synthesize mostRecentAnimationCompletionsID=_mostRecentAnimationCompletionsID - In the implementation block
@property (assign,getter=isTopAreaLayoutGuideExpanded,nonatomic) BOOL topAreaLayoutGuideExpanded;                        //@synthesize topAreaLayoutGuideExpanded=_topAreaLayoutGuideExpanded - In the implementation block
@property (nonatomic,readonly) BOOL showsProminentPlayButton; 
@property (nonatomic,readonly) BOOL includesTransportControls; 
@property (nonatomic,readonly) BOOL includesDisplayModeControlsContainer; 
@property (nonatomic,readonly) BOOL includesCustomDisplayModeControls; 
@property (nonatomic,readonly) BOOL includesAudioControlsContainer; 
@property (nonatomic,readonly) BOOL includesCustomAudioControls; 
@property (nonatomic,retain) AVStyleSheet * styleSheet;                                                                  //@synthesize styleSheet=_styleSheet - In the implementation block
@property (assign,getter=isFullScreen,nonatomic) BOOL fullScreen;                                                        //@synthesize fullScreen=_fullScreen - In the implementation block
@property (assign,nonatomic) long long preferredUnobscuredArea;                                                          //@synthesize preferredUnobscuredArea=_preferredUnobscuredArea - In the implementation block
@property (nonatomic,readonly) long long includedContainers;                                                             //@synthesize includedContainers=_includedContainers - In the implementation block
@property (nonatomic,readonly) UIView * volumeControlsContainer;                                                         //@synthesize volumeControlsContainer=_volumeControlsContainer - In the implementation block
@property (nonatomic,readonly) UIView * playbackControlsContainer;                                                       //@synthesize playbackControlsContainer=_playbackControlsContainer - In the implementation block
@property (nonatomic,readonly) AVBackdropView * screenModeControls;                                                      //@synthesize screenModeControls=_screenModeControls - In the implementation block
@property (nonatomic,readonly) AVBackdropView * volumeControls;                                                          //@synthesize volumeControls=_volumeControls - In the implementation block
@property (nonatomic,readonly) AVBackdropView * prominentPlayButtonBackdropView;                                         //@synthesize prominentPlayButtonBackdropView=_prominentPlayButtonBackdropView - In the implementation block
@property (nonatomic,readonly) AVBackdropView * miniPlayPauseButtonBackdropView;                                         //@synthesize miniPlayPauseButtonBackdropView=_miniPlayPauseButtonBackdropView - In the implementation block
@property (nonatomic,readonly) AVView * transportControlsContainerView;                                                  //@synthesize transportControlsContainerView=_transportControlsContainerView - In the implementation block
@property (nonatomic,readonly) AVButton * doneButton;                                                                    //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,readonly) AVButton * fullScreenButton;                                                              //@synthesize fullScreenButton=_fullScreenButton - In the implementation block
@property (nonatomic,readonly) AVButton * videoGravityButton;                                                            //@synthesize videoGravityButton=_videoGravityButton - In the implementation block
@property (nonatomic,readonly) AVButton * pictureInPictureButton;                                                        //@synthesize pictureInPictureButton=_pictureInPictureButton - In the implementation block
@property (nonatomic,copy,readonly) NSArray * customDisplayModeItems;                                                    //@synthesize customDisplayModeItems=_customDisplayModeItems - In the implementation block
@property (nonatomic,readonly) AVVolumeButtonControl * volumeButton;                                                     //@synthesize volumeButton=_volumeButton - In the implementation block
@property (nonatomic,readonly) AVVolumeSlider * volumeSlider;                                                            //@synthesize volumeSlider=_volumeSlider - In the implementation block
@property (nonatomic,copy,readonly) NSArray * customAudioItems;                                                          //@synthesize customAudioItems=_customAudioItems - In the implementation block
@property (nonatomic,readonly) AVButton * prominentPlayButton;                                                           //@synthesize prominentPlayButton=_prominentPlayButton - In the implementation block
@property (nonatomic,readonly) AVButton * miniPlayPauseButton;                                                           //@synthesize miniPlayPauseButton=_miniPlayPauseButton - In the implementation block
@property (nonatomic,readonly) AVTransportControlsView * transportControlsView;                                          //@synthesize transportControlsView=_transportControlsView - In the implementation block
@property (nonatomic,readonly) AVButton * standardPlayPauseButton;                                                       //@synthesize standardPlayPauseButton=_standardPlayPauseButton - In the implementation block
@property (nonatomic,readonly) AVButton * skipForwardButton;                                                             //@synthesize skipForwardButton=_skipForwardButton - In the implementation block
@property (nonatomic,readonly) AVButton * skipBackButton;                                                                //@synthesize skipBackButton=_skipBackButton - In the implementation block
@property (nonatomic,readonly) AVButton * startLeftwardContentTransitionButton;                                          //@synthesize startLeftwardContentTransitionButton=_startLeftwardContentTransitionButton - In the implementation block
@property (nonatomic,readonly) AVButton * startRightwardContentTransitionButton;                                         //@synthesize startRightwardContentTransitionButton=_startRightwardContentTransitionButton - In the implementation block
@property (nonatomic,readonly) AVScrubber * scrubber;                                                                    //@synthesize scrubber=_scrubber - In the implementation block
@property (nonatomic,readonly) AVPlaybackControlsRoutePickerView * routePickerView;                                      //@synthesize routePickerView=_routePickerView - In the implementation block
@property (nonatomic,readonly) AVButton * mediaSelectionButton;                                                          //@synthesize mediaSelectionButton=_mediaSelectionButton - In the implementation block
@property (nonatomic,copy,readonly) NSArray * customMediaItems;                                                          //@synthesize customMediaItems=_customMediaItems - In the implementation block
@property (nonatomic,copy,readonly) NSArray * customControlItems;                                                        //@synthesize customControlItems=_customControlItems - In the implementation block
@property (nonatomic,readonly) AVPlayerViewControllerCustomControlsView * customControlsView;                            //@synthesize customControlsView=_customControlsView - In the implementation block
@property (nonatomic,readonly) BOOL hasVisibleSubview; 
@property (assign,nonatomic) CGAffineTransform overrideTransformForProminentPlayButton;                                  //@synthesize overrideTransformForProminentPlayButton=_overrideTransformForProminentPlayButton - In the implementation block
@property (nonatomic,retain) NSValue * overrideLayoutMarginsWhenEmbeddedInline;                                          //@synthesize overrideLayoutMarginsWhenEmbeddedInline=_overrideLayoutMarginsWhenEmbeddedInline - In the implementation block
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)safeAreaInsetsDidChange;
-(AVButton *)doneButton;
-(void)setFullScreen:(BOOL)arg1 ;
-(BOOL)isFullScreen;
-(double)keyboardHeight;
-(void)setKeyboardHeight:(double)arg1 ;
-(AVStyleSheet *)styleSheet;
-(AVVolumeSlider *)volumeSlider;
-(void)setPreferredUnobscuredArea:(long long)arg1 ;
-(long long)preferredUnobscuredArea;
-(AVButton *)prominentPlayButton;
-(AVBackdropView *)prominentPlayButtonBackdropView;
-(void)setStyleSheet:(AVStyleSheet *)arg1 ;
-(AVObservationController *)observationController;
-(AVPlayerViewControllerCustomControlsView *)customControlsView;
-(NSArray *)customControlItems;
-(void)setOverrideTransformForProminentPlayButton:(CGAffineTransform)arg1 ;
-(void)setOverrideLayoutMarginsWhenEmbeddedInline:(NSValue *)arg1 ;
-(CGAffineTransform)overrideTransformForProminentPlayButton;
-(NSValue *)overrideLayoutMarginsWhenEmbeddedInline;
-(id)initWithFrame:(CGRect)arg1 styleSheet:(id)arg2 ;
-(AVVolumeButtonControl *)volumeButton;
-(void)setDoubleRowLayoutEnabled:(BOOL)arg1 ;
-(BOOL)isDoubleRowLayoutEnabled;
-(AVScrubber *)scrubber;
-(AVButton *)standardPlayPauseButton;
-(AVButton *)skipForwardButton;
-(AVButton *)skipBackButton;
-(AVButton *)startLeftwardContentTransitionButton;
-(AVButton *)startRightwardContentTransitionButton;
-(AVPlaybackControlsRoutePickerView *)routePickerView;
-(AVButton *)mediaSelectionButton;
-(BOOL)showsProminentPlayButton;
-(void)setupInitialLayout;
-(void)setIncludedContainers:(long long)arg1 animations:(/*^block*/id)arg2 ;
-(BOOL)includesAudioControlsContainer;
-(BOOL)includesCustomAudioControls;
-(BOOL)includesTransportControls;
-(BOOL)includesDisplayModeControlsContainer;
-(BOOL)includesCustomDisplayModeControls;
-(void)setCustomControlItems:(id)arg1 animations:(/*^block*/id)arg2 ;
-(void)animateAlongsideVisibilityAnimationsWithAnimationCoordinator:(id)arg1 appearingViews:(id)arg2 disappearingViews:(id)arg3 ;
-(BOOL)hasVisibleSubview;
-(void)updateLayoutForChangedControlsVisibility;
-(id)_preferredArrangedAudioModeViews;
-(id)_preferredArrangedDisplayModeViews;
-(id)_currentArrangedAudioModeViews;
-(id)_currentArrangedDisplayModeViews;
-(id)_audioViewsToRemoveDuringAnimation;
-(id)_displayModeViewsToRemoveDuringAnimation;
-(void)_remove:(BOOL)arg1 views:(id)arg2 ;
-(void)_remove:(BOOL)arg1 view:(id)arg2 ;
-(void)_updatePlaybackControlsContainerVisibility:(/*^block*/id)arg1 ;
-(void)_updateAreVolumeAndTransportControlsVisible;
-(void)_updateDoubleRowLayoutEnabled;
-(void)_setupInitialLayout;
-(void)_updateLayoutMargins;
-(void)_animateKeyboardAvoidance:(long long)arg1 duration:(double)arg2 ;
-(id)_playbackControlsViewItems;
-(id)_playbackControlsViewsForControlItems:(id)arg1 withType:(long long)arg2 ;
-(id)_customControlsViewIfLoaded;
-(long long)includedContainers;
-(UIView *)volumeControlsContainer;
-(UIView *)playbackControlsContainer;
-(AVBackdropView *)screenModeControls;
-(AVBackdropView *)volumeControls;
-(AVBackdropView *)miniPlayPauseButtonBackdropView;
-(AVView *)transportControlsContainerView;
-(AVButton *)fullScreenButton;
-(AVButton *)videoGravityButton;
-(AVButton *)pictureInPictureButton;
-(NSArray *)customDisplayModeItems;
-(NSArray *)customAudioItems;
-(AVButton *)miniPlayPauseButton;
-(AVTransportControlsView *)transportControlsView;
-(NSArray *)customMediaItems;
-(NSArray *)defaultAudioControls;
-(NSArray *)defaultDisplayModeControls;
-(UIViewPropertyAnimator *)keyboardUIAvoidanceAnimator;
-(NSLayoutConstraint *)volumeButtonBottomToLayoutMarginsGuideBottomConstraint;
-(NSLayoutConstraint *)volumeTopToLayoutGuideTopConstraint;
-(NSLayoutConstraint *)volumeTopToViewTopConstraint;
-(NSLayoutConstraint *)screenModeControlsToVolumeControlsSpacingConstraint;
-(BOOL)needsIntialLayout;
-(void)setNeedsIntialLayout:(BOOL)arg1 ;
-(UIViewPropertyAnimator *)playbackControlsVisibilityAnimator;
-(void)setPlaybackControlsVisibilityAnimator:(UIViewPropertyAnimator *)arg1 ;
-(NSUUID *)mostRecentAnimationCompletionsID;
-(void)setMostRecentAnimationCompletionsID:(NSUUID *)arg1 ;
-(BOOL)isTopAreaLayoutGuideExpanded;
-(void)setTopAreaLayoutGuideExpanded:(BOOL)arg1 ;
@end

