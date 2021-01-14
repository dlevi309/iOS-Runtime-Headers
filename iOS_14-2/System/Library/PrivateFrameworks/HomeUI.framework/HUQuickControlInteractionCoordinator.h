/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)isUserInteractionEnabled;
-(id<HUQuickControlInteractionCoordinatorDelegate>)delegate;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(void)setDelegate:(id<HUQuickControlInteractionCoordinatorDelegate>)arg1 ;
-(UIView*<HUQuickControlControllableView>)controlView;
-(void)setViewVisible:(BOOL)arg1 ;
-(BOOL)isUserInteractionActive;
-(id)initWithControlView:(id)arg1 delegate:(id)arg2 ;
-(void)recordInteractionStart;
-(BOOL)viewVisible;
@end

