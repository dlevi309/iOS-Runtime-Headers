/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CPUIPlayModeControlViewDelegate.h>

@protocol CPUINowPlayingViewControllerDataSource, CPUINowPlayingViewControllerDelegate;
@class NSString, CPUINowPlayingView, NSOperationQueue, UIVisualEffectView, UIImage, UIImageView, UILabel, UIBarButtonItem, UIActivityIndicatorView, UITapGestureRecognizer, UILongPressGestureRecognizer, NSArray, CPUITransportControlView, CPUIPlayModeControlView;

@interface CPUINowPlayingViewController : UIViewController <CPUIPlayModeControlViewDelegate> {

	long long _heldAction;
	id<CPUINowPlayingViewControllerDataSource> _dataSource;
	id<CPUINowPlayingViewControllerDelegate> _delegate;
	NSString* _bundleIdentifier;
	CPUINowPlayingView* _nowPlayingView;
	NSOperationQueue* _artworkOperationQueue;
	UIVisualEffectView* _artworkVisualEffectView;
	UIImage* _artworkImage;
	UIImageView* _artworkView;
	UILabel* _rightTitleLabel;
	UIBarButtonItem* _rightTitleLabelBarButtonItem;
	UIBarButtonItem* _playbackQueueBarButtonItem;
	UIBarButtonItem* _backButton;
	UIActivityIndicatorView* _activityIndicator;
	UIBarButtonItem* _activityIndicatorBarButtonItem;
	UITapGestureRecognizer* _knobPressRecognizer;
	UITapGestureRecognizer* _backPressRecognizer;
	UITapGestureRecognizer* _leftNudgePressRecognizer;
	UITapGestureRecognizer* _rightNudgePressRecognizer;
	UILongPressGestureRecognizer* _leftNudgeLongPressRecognizer;
	UILongPressGestureRecognizer* _rightNudgeLongPressRecognizer;
	UILongPressGestureRecognizer* _leftButtonLongPressRecognizer;
	UILongPressGestureRecognizer* _fastForwardButtonLongPressRecognizer;
	NSString* _previousTransportButtonImageIdentifier;
	NSString* _forwardTransportButtonImageIdentifier;
	NSString* _playPauseTransportButtonImageIdentifier;
	NSArray* _nowPlayingSizeConstraints;

}

@property (nonatomic,retain) CPUINowPlayingView * nowPlayingView;                                              //@synthesize nowPlayingView=_nowPlayingView - In the implementation block
@property (nonatomic,retain) NSOperationQueue * artworkOperationQueue;                                         //@synthesize artworkOperationQueue=_artworkOperationQueue - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * artworkVisualEffectView;                                     //@synthesize artworkVisualEffectView=_artworkVisualEffectView - In the implementation block
@property (nonatomic,retain) UIImage * artworkImage;                                                           //@synthesize artworkImage=_artworkImage - In the implementation block
@property (nonatomic,retain) UIImageView * artworkView;                                                        //@synthesize artworkView=_artworkView - In the implementation block
@property (nonatomic,retain) UILabel * rightTitleLabel;                                                        //@synthesize rightTitleLabel=_rightTitleLabel - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * rightTitleLabelBarButtonItem;                                   //@synthesize rightTitleLabelBarButtonItem=_rightTitleLabelBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * playbackQueueBarButtonItem;                                     //@synthesize playbackQueueBarButtonItem=_playbackQueueBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * backButton;                                                     //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                                      //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * activityIndicatorBarButtonItem;                                 //@synthesize activityIndicatorBarButtonItem=_activityIndicatorBarButtonItem - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * knobPressRecognizer;                                   //@synthesize knobPressRecognizer=_knobPressRecognizer - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * backPressRecognizer;                                   //@synthesize backPressRecognizer=_backPressRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * leftNudgePressRecognizer;                                //@synthesize leftNudgePressRecognizer=_leftNudgePressRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * rightNudgePressRecognizer;                               //@synthesize rightNudgePressRecognizer=_rightNudgePressRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * leftNudgeLongPressRecognizer;                      //@synthesize leftNudgeLongPressRecognizer=_leftNudgeLongPressRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * rightNudgeLongPressRecognizer;                     //@synthesize rightNudgeLongPressRecognizer=_rightNudgeLongPressRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * leftButtonLongPressRecognizer;                     //@synthesize leftButtonLongPressRecognizer=_leftButtonLongPressRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * fastForwardButtonLongPressRecognizer;              //@synthesize fastForwardButtonLongPressRecognizer=_fastForwardButtonLongPressRecognizer - In the implementation block
@property (nonatomic,retain) NSString * previousTransportButtonImageIdentifier;                                //@synthesize previousTransportButtonImageIdentifier=_previousTransportButtonImageIdentifier - In the implementation block
@property (nonatomic,retain) NSString * forwardTransportButtonImageIdentifier;                                 //@synthesize forwardTransportButtonImageIdentifier=_forwardTransportButtonImageIdentifier - In the implementation block
@property (nonatomic,retain) NSString * playPauseTransportButtonImageIdentifier;                               //@synthesize playPauseTransportButtonImageIdentifier=_playPauseTransportButtonImageIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * nowPlayingSizeConstraints;                                              //@synthesize nowPlayingSizeConstraints=_nowPlayingSizeConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<CPUINowPlayingViewControllerDataSource> dataSource;                     //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<CPUINowPlayingViewControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CPUITransportControlView * transportControlView; 
@property (nonatomic,readonly) CPUIPlayModeControlView * playModeControlView; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                                               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIActivityIndicatorView *)activityIndicator;
-(void)setBackButton:(UIBarButtonItem *)arg1 ;
-(id)preferredFocusEnvironments;
-(UIImageView *)artworkView;
-(id<CPUINowPlayingViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSString *)bundleIdentifier;
-(id<CPUINowPlayingViewControllerDataSource>)dataSource;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<CPUINowPlayingViewControllerDelegate>)arg1 ;
-(void)setDataSource:(id<CPUINowPlayingViewControllerDataSource>)arg1 ;
-(void)reloadData;
-(void)viewDidLoad;
-(UIBarButtonItem *)backButton;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setRightTitle:(id)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setArtworkView:(UIImageView *)arg1 ;
-(UIImage *)artworkImage;
-(id)initWithBundleIdentifier:(id)arg1 dataSource:(id)arg2 delegate:(id)arg3 ;
-(CPUIPlayModeControlView *)playModeControlView;
-(CPUITransportControlView *)transportControlView;
-(void)playModeControlView:(id)arg1 didSelectButton:(id)arg2 ;
-(void)_albumArtistButtonTapped:(id)arg1 ;
-(void)_reloadDataForcingLayout:(BOOL)arg1 ;
-(id)_installedFullBackgroundArtworkViewBelowView:(id)arg1 ;
-(void)setRightTitleLabel:(UILabel *)arg1 ;
-(UILabel *)rightTitleLabel;
-(void)_adjustRightTitleLabelToFit;
-(void)setActivityIndicatorBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setRightTitleLabelBarButtonItem:(UIBarButtonItem *)arg1 ;
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
-(void)_initializeTransportControls;
-(CPUINowPlayingView *)nowPlayingView;
-(void)_recalculateLayout:(BOOL)arg1 ;
-(void)_updateTransportControl:(id)arg1 withDefaultImage:(id)arg2 actionType:(long long)arg3 ;
-(void)_updatePlayModesState;
-(void)_updateShuffleStateWithType:(long long)arg1 ;
-(void)_updateRepeatStateWithType:(long long)arg1 ;
-(void)_updatePlaybackRate;
-(BOOL)_showsButtonSelectionsForTouch;
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
-(NSOperationQueue *)artworkOperationQueue;
-(void)upNextButtonTapped:(id)arg1 ;
-(void)_updateArtworkIfNeeded:(id)arg1 placeholder:(id)arg2 ;
-(id)_upNextBarButtonItem;
-(void)setPlaybackQueueBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)rightTitleLabelBarButtonItem;
-(UIBarButtonItem *)activityIndicatorBarButtonItem;
-(void)updatePlayControls;
-(void)setNowPlayingView:(CPUINowPlayingView *)arg1 ;
-(void)setArtworkOperationQueue:(NSOperationQueue *)arg1 ;
-(UIVisualEffectView *)artworkVisualEffectView;
-(void)setArtworkVisualEffectView:(UIVisualEffectView *)arg1 ;
-(UIBarButtonItem *)playbackQueueBarButtonItem;
-(UITapGestureRecognizer *)knobPressRecognizer;
-(UITapGestureRecognizer *)backPressRecognizer;
-(NSString *)previousTransportButtonImageIdentifier;
-(void)setPreviousTransportButtonImageIdentifier:(NSString *)arg1 ;
-(NSString *)forwardTransportButtonImageIdentifier;
-(void)setForwardTransportButtonImageIdentifier:(NSString *)arg1 ;
-(NSString *)playPauseTransportButtonImageIdentifier;
-(void)setPlayPauseTransportButtonImageIdentifier:(NSString *)arg1 ;
-(NSArray *)nowPlayingSizeConstraints;
-(void)setNowPlayingSizeConstraints:(NSArray *)arg1 ;
@end
