/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol AVTPaddleViewDelegate;
@class UIView, AVTCircularButton, AVPlayer, AVPlayerLooper, AVPlayerViewController, NSArray, AVTTouchDownGestureRecognizer, AVTUILogger;

@interface AVTPaddleView : UIView {

	BOOL _automaticallyStartsPlaying;
	double _padding;
	id<AVTPaddleViewDelegate> _delegate;
	UIView* _videoViewContainer;
	UIView* _addButtonViewContainer;
	AVTCircularButton* _addButton;
	AVPlayer* _player;
	AVPlayerLooper* _looper;
	AVPlayerViewController* _videoController;
	NSArray* _activeConstraints;
	long long _layoutDirection;
	AVTTouchDownGestureRecognizer* _tapGestureRecognizer;
	AVTTouchDownGestureRecognizer* _dismissGestureRecognizer;
	AVTUILogger* _logger;
	/*^block*/id _preCommitBlock;

}

@property (nonatomic,retain) UIView * videoViewContainer;                                           //@synthesize videoViewContainer=_videoViewContainer - In the implementation block
@property (nonatomic,retain) UIView * addButtonViewContainer;                                       //@synthesize addButtonViewContainer=_addButtonViewContainer - In the implementation block
@property (nonatomic,retain) AVTCircularButton * addButton;                                         //@synthesize addButton=_addButton - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                                     //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVPlayerLooper * looper;                                               //@synthesize looper=_looper - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * videoController;                              //@synthesize videoController=_videoController - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;                                           //@synthesize activeConstraints=_activeConstraints - In the implementation block
@property (nonatomic,readonly) long long layoutDirection;                                           //@synthesize layoutDirection=_layoutDirection - In the implementation block
@property (nonatomic,retain) AVTTouchDownGestureRecognizer * tapGestureRecognizer;                  //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) AVTTouchDownGestureRecognizer * dismissGestureRecognizer;              //@synthesize dismissGestureRecognizer=_dismissGestureRecognizer - In the implementation block
@property (nonatomic,retain) AVTUILogger * logger;                                                  //@synthesize logger=_logger - In the implementation block
@property (nonatomic,copy) id preCommitBlock;                                                       //@synthesize preCommitBlock=_preCommitBlock - In the implementation block
@property (assign,nonatomic) BOOL automaticallyStartsPlaying;                                       //@synthesize automaticallyStartsPlaying=_automaticallyStartsPlaying - In the implementation block
@property (assign,nonatomic) double padding;                                                        //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic,__weak) id<AVTPaddleViewDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
+(double)defaultPadding;
+(id)videoItem;
-(void)dealloc;
-(id<AVTPaddleViewDelegate>)delegate;
-(void)setDelegate:(id<AVTPaddleViewDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(AVTUILogger *)logger;
-(void)setPadding:(double)arg1 ;
-(BOOL)isRTL;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)dismissAnimated:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)drawRect:(CGRect)arg1 ;
-(double)padding;
-(long long)layoutDirection;
-(void)setDismissGestureRecognizer:(AVTTouchDownGestureRecognizer *)arg1 ;
-(AVTTouchDownGestureRecognizer *)dismissGestureRecognizer;
-(void)setLogger:(AVTUILogger *)arg1 ;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVTTouchDownGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(AVTTouchDownGestureRecognizer *)arg1 ;
-(void)handleTapGesture;
-(NSArray *)activeConstraints;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(AVTCircularButton *)addButton;
-(void)playVideo;
-(id)preCommitBlock;
-(void)setPreCommitBlock:(id)arg1 ;
-(id)initWithLayoutDirection:(long long)arg1 symbolConfiguration:(id)arg2 ;
-(void)_configureWithSymbolConfiguration:(id)arg1 ;
-(void)stopPlayingIfNecessary;
-(void)startPlayingIfNecessary;
-(void)handleDismissGesture;
-(UIView *)videoViewContainer;
-(CGRect)frameForVideoInCoordinateSpace:(id)arg1 ;
-(AVPlayerViewController *)videoController;
-(UIView *)addButtonViewContainer;
-(CGRect)frameForAddButtonInCoordinateSpace:(id)arg1 ;
-(BOOL)isPointInsideTransparentRegion:(CGPoint)arg1 ;
-(BOOL)automaticallyStartsPlaying;
-(id)initWithLayoutDirection:(long long)arg1 ;
-(void)updateLayoutFromPlusButtonView:(id)arg1 videoView:(id)arg2 ;
-(void)handleTapAddButton;
-(void)attachVideoController:(id)arg1 looper:(id)arg2 ;
-(void)showAnimated:(BOOL)arg1 ;
-(void)pauseVideo;
-(void)setAutomaticallyStartsPlaying:(BOOL)arg1 ;
-(void)setVideoViewContainer:(UIView *)arg1 ;
-(void)setAddButtonViewContainer:(UIView *)arg1 ;
-(void)setAddButton:(AVTCircularButton *)arg1 ;
-(AVPlayerLooper *)looper;
-(void)setLooper:(AVPlayerLooper *)arg1 ;
-(void)setVideoController:(AVPlayerViewController *)arg1 ;
@end

