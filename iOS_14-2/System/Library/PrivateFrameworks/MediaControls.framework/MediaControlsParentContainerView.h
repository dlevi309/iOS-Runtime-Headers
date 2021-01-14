/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTopDividerView:(MediaControlsSeparatorView *)arg1 ;
-(MediaControlsSeparatorView *)topDividerView;
-(void)setMediaControlsRoutingPickerView:(UIView *)arg1 ;
-(MediaControlsTimeControl *)timeControl;
-(void)setSelectedMode:(long long)arg1 ;
-(void)setContainerView:(MediaControlsContainerView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setInitialFrameForRoutingView:(id)arg1 ;
-(void)_toggleRoutingPickerAnimated:(BOOL)arg1 ;
-(void)setSelectedMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setRoutingViewControllerAnimationCount:(long long)arg1 ;
-(void)_updateTimeControlVisibility:(id)arg1 ;
-(MediaControlsTransportStackView *)transportStackView;
-(UIView *)mediaControlsRoutingPickerView;
-(void)setTransportStackView:(MediaControlsTransportStackView *)arg1 ;
-(void)layoutSubviews;
-(MediaControlsContainerView *)containerView;
-(void)didMoveToWindow;
-(void)setRoutingView:(UIView *)arg1 ;
-(void)setTimeControl:(MediaControlsTimeControl *)arg1 ;
-(long long)routingViewControllerAnimationCount;
-(UIView *)routingView;
-(MediaControlsSeparatorView *)bottomDividerView;
-(void)handleHoverGestureRecognizer:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)selectedMode;
-(void)setBottomDividerView:(MediaControlsSeparatorView *)arg1 ;
-(void)_updateRoutingPickerVisibilityAnimated:(BOOL)arg1 ;
-(long long)style;
@end

