/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)videoItem;
+(double)defaultPadding;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayerLooper *)looper;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<AVTPaddleViewDelegate>)delegate;
-(BOOL)isRTL;
-(void)setTapGestureRecognizer:(AVTTouchDownGestureRecognizer *)arg1 ;
-(AVTTouchDownGestureRecognizer *)dismissGestureRecognizer;
-(void)setDismissGestureRecognizer:(AVTTouchDownGestureRecognizer *)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)playVideo;
-(void)handleTapGesture;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<AVTPaddleViewDelegate>)arg1 ;
-(id)preCommitBlock;
-(void)setPreCommitBlock:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithLayoutDirection:(long long)arg1 symbolConfiguration:(id)arg2 ;
-(void)stopPlayingIfNecessary;
-(void)_configureWithSymbolConfiguration:(id)arg1 ;
-(void)startPlayingIfNecessary;
-(void)handleDismissGesture;
-(UIView *)videoViewContainer;
-(CGRect)frameForVideoInCoordinateSpace:(id)arg1 ;
-(AVPlayerViewController *)videoController;
-(UIView *)addButtonViewContainer;
-(CGRect)frameForAddButtonInCoordinateSpace:(id)arg1 ;
-(void)pauseVideo;
-(AVTCircularButton *)addButton;
-(BOOL)isPointInsideTransparentRegion:(CGPoint)arg1 ;
-(BOOL)automaticallyStartsPlaying;
-(id)initWithLayoutDirection:(long long)arg1 ;
-(void)handleTapAddButton;
-(void)didMoveToWindow;
-(void)updateLayoutFromPlusButtonView:(id)arg1 videoView:(id)arg2 ;
-(void)attachVideoController:(id)arg1 looper:(id)arg2 ;
-(void)showAnimated:(BOOL)arg1 ;
-(void)setAutomaticallyStartsPlaying:(BOOL)arg1 ;
-(void)setVideoViewContainer:(UIView *)arg1 ;
-(void)setAddButtonViewContainer:(UIView *)arg1 ;
-(void)setLooper:(AVPlayerLooper *)arg1 ;
-(void)setVideoController:(AVPlayerViewController *)arg1 ;
-(NSArray *)activeConstraints;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(void)setLogger:(AVTUILogger *)arg1 ;
-(AVTUILogger *)logger;
-(AVTTouchDownGestureRecognizer *)tapGestureRecognizer;
-(double)padding;
-(void)setAddButton:(AVTCircularButton *)arg1 ;
-(void)setPadding:(double)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)layoutDirection;
-(void)dealloc;
@end

