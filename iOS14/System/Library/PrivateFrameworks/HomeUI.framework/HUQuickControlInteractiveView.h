/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

