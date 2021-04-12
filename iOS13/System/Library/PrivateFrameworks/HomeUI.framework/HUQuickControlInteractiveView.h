/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HUQuickControlInteractiveView <HUQuickControlControllableView>
@property (assign,nonatomic,__weak) id<HUQuickControlViewInteractionDelegate> interactionDelegate; 
@property (getter=isUserInteractionActive,nonatomic,readonly) BOOL userInteractionActive; 
@required
-(void)setInteractionDelegate:(id)arg1;
-(id<HUQuickControlViewInteractionDelegate>)interactionDelegate;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
-(BOOL)isUserInteractionActive;

@end

