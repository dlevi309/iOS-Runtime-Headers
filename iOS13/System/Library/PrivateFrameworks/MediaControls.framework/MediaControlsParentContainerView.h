/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>

@class MediaControlsContainerView, UIView, MediaControlsSeparatorView, MediaControlsTransportStackView, MediaControlsTimeControl;

@interface MediaControlsParentContainerView : UIView {

	long long _style;
	long long _selectedMode;
	MediaControlsContainerView* _containerView;
	UIView* _routingView;
	MediaControlsSeparatorView* _topDividerView;
	MediaControlsSeparatorView* _bottomDividerView;
	UIView* _mediaControlsRoutingPickerView;
	long long _routingViewControllerAnimationCount;

}

@property (nonatomic,retain) UIView * mediaControlsRoutingPickerView;                           //@synthesize mediaControlsRoutingPickerView=_mediaControlsRoutingPickerView - In the implementation block
@property (assign,nonatomic) long long routingViewControllerAnimationCount;                     //@synthesize routingViewControllerAnimationCount=_routingViewControllerAnimationCount - In the implementation block
@property (assign,nonatomic) long long style;                                                   //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long selectedMode;                                            //@synthesize selectedMode=_selectedMode - In the implementation block
@property (nonatomic,retain) MediaControlsContainerView * containerView;                        //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) MediaControlsTransportStackView * transportStackView; 
@property (nonatomic,retain) MediaControlsTimeControl * timeControl; 
@property (nonatomic,retain) UIView * routingView;                                              //@synthesize routingView=_routingView - In the implementation block
@property (nonatomic,retain) MediaControlsSeparatorView * topDividerView;                       //@synthesize topDividerView=_topDividerView - In the implementation block
@property (nonatomic,retain) MediaControlsSeparatorView * bottomDividerView;                    //@synthesize bottomDividerView=_bottomDividerView - In the implementation block
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(MediaControlsContainerView *)containerView;
-(void)setContainerView:(MediaControlsContainerView *)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setSelectedMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setSelectedMode:(long long)arg1 ;
-(long long)selectedMode;
-(UIView *)mediaControlsRoutingPickerView;
-(MediaControlsSeparatorView *)topDividerView;
-(MediaControlsSeparatorView *)bottomDividerView;
-(void)handleHoverGestureRecognizer:(id)arg1 ;
-(void)_updateTimeControlVisibility:(id)arg1 ;
-(void)_updateRoutingPickerVisibilityAnimated:(BOOL)arg1 ;
-(void)_toggleRoutingPickerAnimated:(BOOL)arg1 ;
-(MediaControlsTransportStackView *)transportStackView;
-(void)setTransportStackView:(MediaControlsTransportStackView *)arg1 ;
-(MediaControlsTimeControl *)timeControl;
-(void)setTimeControl:(MediaControlsTimeControl *)arg1 ;
-(void)_setInitialFrameForRoutingView:(id)arg1 ;
-(void)setRoutingView:(UIView *)arg1 ;
-(UIView *)routingView;
-(void)setTopDividerView:(MediaControlsSeparatorView *)arg1 ;
-(void)setBottomDividerView:(MediaControlsSeparatorView *)arg1 ;
-(void)setMediaControlsRoutingPickerView:(UIView *)arg1 ;
-(long long)routingViewControllerAnimationCount;
-(void)setRoutingViewControllerAnimationCount:(long long)arg1 ;
@end

