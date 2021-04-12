/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HUQuickControlControllableView, HUQuickControlInteractionCoordinatorDelegate;
@class UIView;

@interface HUQuickControlInteractionCoordinator : NSObject {

	BOOL _viewVisible;
	BOOL _userInteractionEnabled;
	UIView*<HUQuickControlControllableView> _controlView;
	id<HUQuickControlInteractionCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic) BOOL viewVisible;                                                              //@synthesize viewVisible=_viewVisible - In the implementation block
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled;                   //@synthesize userInteractionEnabled=_userInteractionEnabled - In the implementation block
@property (getter=isUserInteractionActive,nonatomic,readonly) BOOL userInteractionActive; 
@property (nonatomic,retain) id value; 
@property (nonatomic,readonly) UIView*<HUQuickControlControllableView> controlView;                         //@synthesize controlView=_controlView - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlInteractionCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<HUQuickControlInteractionCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<HUQuickControlInteractionCoordinatorDelegate>)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)isUserInteractionEnabled;
-(UIView*<HUQuickControlControllableView>)controlView;
-(void)setViewVisible:(BOOL)arg1 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(id)initWithControlView:(id)arg1 delegate:(id)arg2 ;
-(BOOL)isUserInteractionActive;
-(void)recordInteractionStart;
-(BOOL)viewVisible;
@end

