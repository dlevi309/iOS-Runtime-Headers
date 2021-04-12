/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol MCDNowPlayingViewControllerDelegate, MCDNowPlayingViewControllerDataSource;
@class UINavigationBar, UIColor, NSMutableDictionary, MCDTransportControlView, MCDPlayModeControlView, MCDSongDetailsView, MCDProgressView, UIImageView, UITapGestureRecognizer, UILongPressGestureRecognizer, UIFocusContainerGuide, NSString, MCDShadowImageView, NSArray;

@interface _MCDNowPlayingViewController : UIViewController {

	long long _heldAction;
	UINavigationBar* _navigationBar;
	UIColor* _navbarColor;
	double _scale;
	double _contentAspectRatio;
	BOOL _navbarHidesShadow;
	BOOL _highTouchMode;
	BOOL _handledWillAppear;
	BOOL _needsUpdate;
	BOOL _needsConstraintUpdate;
	NSMutableDictionary* _constraintCache;
	BOOL _albumArtAllowed;
	MCDTransportControlView* _transportControlView;
	MCDPlayModeControlView* _playModeControlView;
	MCDSongDetailsView* _songDetailsView;
	id<MCDNowPlayingViewControllerDelegate> _delegate;
	id<MCDNowPlayingViewControllerDataSource> _dataSource;
	MCDProgressView* _progressView;
	UIImageView* _artworkView;
	UITapGestureRecognizer* _knobPressRecognizer;
	UITapGestureRecognizer* _backPressRecognizer;
	UITapGestureRecognizer* _leftNudgePressRecognizer;
	UITapGestureRecognizer* _rightNudgePressRecognizer;
	UILongPressGestureRecognizer* _leftNudgeLongPressRecognizer;
	UILongPressGestureRecognizer* _rightNudgeLongPressRecognizer;
	UILongPressGestureRecognizer* _leftButtonLongPressRecognizer;
	UILongPressGestureRecognizer* _fastForwardButtonLongPressRecognizer;
	UIFocusContainerGuide* _controlsFocusContainerGuide;
	NSString* _previousTransportButtonImageIdentifier;
	NSString* _forwardTransportButtonImageIdentifier;
	NSString* _playPauseTransportButtonImageIdentifier;
	long long _layoutType;
	MCDShadowImageView* _artworkViewBrick;
	NSArray* _activeConstraints;
	CGRect _nowPlayingContentRect;

}

@property (nonatomic,readonly) MCDProgressView * progressView;                                                 //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,readonly) UIImageView * artworkView;                                                      //@synthesize artworkView=_artworkView - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * knobPressRecognizer;                                   //@synthesize knobPressRecognizer=_knobPressRecognizer - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * backPressRecognizer;                                   //@synthesize backPressRecognizer=_backPressRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * leftNudgePressRecognizer;                                //@synthesize leftNudgePressRecognizer=_leftNudgePressRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * rightNudgePressRecognizer;                               //@synthesize rightNudgePressRecognizer=_rightNudgePressRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * leftNudgeLongPressRecognizer;                      //@synthesize leftNudgeLongPressRecognizer=_leftNudgeLongPressRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * rightNudgeLongPressRecognizer;                     //@synthesize rightNudgeLongPressRecognizer=_rightNudgeLongPressRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * leftButtonLongPressRecognizer;                     //@synthesize leftButtonLongPressRecognizer=_leftButtonLongPressRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * fastForwardButtonLongPressRecognizer;              //@synthesize fastForwardButtonLongPressRecognizer=_fastForwardButtonLongPressRecognizer - In the implementation block
@property (nonatomic,retain) UIFocusContainerGuide * controlsFocusContainerGuide;                              //@synthesize controlsFocusContainerGuide=_controlsFocusContainerGuide - In the implementation block
@property (nonatomic,retain) NSString * previousTransportButtonImageIdentifier;                                //@synthesize previousTransportButtonImageIdentifier=_previousTransportButtonImageIdentifier - In the implementation block
@property (nonatomic,retain) NSString * forwardTransportButtonImageIdentifier;                                 //@synthesize forwardTransportButtonImageIdentifier=_forwardTransportButtonImageIdentifier - In the implementation block
@property (nonatomic,retain) NSString * playPauseTransportButtonImageIdentifier;                               //@synthesize playPauseTransportButtonImageIdentifier=_playPauseTransportButtonImageIdentifier - In the implementation block
@property (assign,nonatomic) CGRect nowPlayingContentRect;                                                     //@synthesize nowPlayingContentRect=_nowPlayingContentRect - In the implementation block
@property (assign,nonatomic) long long layoutType;                                                             //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,readonly) MCDShadowImageView * artworkViewBrick;                                          //@synthesize artworkViewBrick=_artworkViewBrick - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;                                                      //@synthesize activeConstraints=_activeConstraints - In the implementation block
@property (nonatomic,readonly) MCDTransportControlView * transportControlView;                                 //@synthesize transportControlView=_transportControlView - In the implementation block
@property (nonatomic,readonly) MCDPlayModeControlView * playModeControlView;                                   //@synthesize playModeControlView=_playModeControlView - In the implementation block
@property (nonatomic,readonly) MCDSongDetailsView * songDetailsView;                                           //@synthesize songDetailsView=_songDetailsView - In the implementation block
@property (assign,nonatomic,__weak) id<MCDNowPlayingViewControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MCDNowPlayingViewControllerDataSource> dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,getter=isAlbumArtAllowed,nonatomic) BOOL albumArtAllowed;                                    //@synthesize albumArtAllowed=_albumArtAllowed - In the implementation block
-(id<MCDNowPlayingViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MCDNowPlayingViewControllerDelegate>)arg1 ;
-(id<MCDNowPlayingViewControllerDataSource>)dataSource;
-(void)setDataSource:(id<MCDNowPlayingViewControllerDataSource>)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reloadData;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)updateViewConstraints;
-(NSArray *)activeConstraints;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(MCDProgressView *)progressView;
-(long long)layoutType;
-(void)setLayoutType:(long long)arg1 ;
-(BOOL)isCompactHeight;
-(UIImageView *)artworkView;
-(BOOL)isCompactWidth;
-(void)setAlbumArtAllowed:(BOOL)arg1 ;
-(MCDSongDetailsView *)songDetailsView;
-(void)_handleWillAppear;
-(MCDTransportControlView *)transportControlView;
-(void)updateLayoutStyle;
-(void)_repeatButtonTouchUp:(id)arg1 ;
-(void)_shuffleButtonTouchUp:(id)arg1 ;
-(void)_moreButtonTouchUp:(id)arg1 ;
-(void)_addToLibraryButtonTouchUp:(id)arg1 ;
-(void)_playbackButtonTouchUp:(id)arg1 ;
-(void)_leftNudgePress:(id)arg1 ;
-(void)setLeftNudgePressRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)leftNudgePressRecognizer;
-(void)_rightNudgePress:(id)arg1 ;
-(void)setRightNudgePressRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)rightNudgePressRecognizer;
-(void)_leftButtonLongPress:(id)arg1 ;
-(void)setLeftNudgeLongPressRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)leftNudgeLongPressRecognizer;
-(void)_fastForwardButtonLongPress:(id)arg1 ;
-(void)setRightNudgeLongPressRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)rightNudgeLongPressRecognizer;
-(UIFocusContainerGuide *)controlsFocusContainerGuide;
-(void)_updateBackgroundEffect;
-(void)_initializeTransportControls;
-(void)_recalculateLayout:(BOOL)arg1 ;
-(BOOL)_showsButtonSelectionsForTouch;
-(id)constraintsForLayoutType:(long long)arg1 ;
-(MCDShadowImageView *)artworkViewBrick;
-(void)updatePlayControls;
-(double)_artBrickScale;
-(void)_updateTransportControl:(id)arg1 withDefaultImage:(id)arg2 actionType:(long long)arg3 ;
-(void)_updatePlayModesState;
-(void)_updateShuffleStateWithType:(long long)arg1 ;
-(void)_updateRepeatStateWithType:(long long)arg1 ;
-(void)_updatePlaybackRate;
-(void)_sendAction:(long long)arg1 withState:(long long)arg2 ;
-(void)_respondToHeldAction;
-(void)_sendHeldAction;
-(void)_playPauseButtonTouchDown:(id)arg1 ;
-(void)_playPauseButtonTouchUp:(id)arg1 ;
-(void)_leftButtonTouchDown:(id)arg1 ;
-(void)_leftButtonTouchUp:(id)arg1 ;
-(void)_fastForwardButtonTouchDown:(id)arg1 ;
-(void)_fastForwardButtonTouchUp:(id)arg1 ;
-(void)setLeftButtonLongPressRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)leftButtonLongPressRecognizer;
-(void)setFastForwardButtonLongPressRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)fastForwardButtonLongPressRecognizer;
-(void)updateLayoutStyle:(BOOL)arg1 ;
-(BOOL)isAlbumArtAllowed;
-(MCDPlayModeControlView *)playModeControlView;
-(void)setNowPlayingLayout:(long long)arg1 forceChange:(BOOL)arg2 ;
-(CGRect)nowPlayingContentRect;
-(void)layoutStyleDidChange;
-(void)_invalidateConstraintCache;
-(void)_didUpdateSupportedCommandsNotification:(id)arg1 ;
-(UITapGestureRecognizer *)knobPressRecognizer;
-(UITapGestureRecognizer *)backPressRecognizer;
-(void)setControlsFocusContainerGuide:(UIFocusContainerGuide *)arg1 ;
-(NSString *)previousTransportButtonImageIdentifier;
-(void)setPreviousTransportButtonImageIdentifier:(NSString *)arg1 ;
-(NSString *)forwardTransportButtonImageIdentifier;
-(void)setForwardTransportButtonImageIdentifier:(NSString *)arg1 ;
-(NSString *)playPauseTransportButtonImageIdentifier;
-(void)setPlayPauseTransportButtonImageIdentifier:(NSString *)arg1 ;
-(void)setNowPlayingContentRect:(CGRect)arg1 ;
@end

