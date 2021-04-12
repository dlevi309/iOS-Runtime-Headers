/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIView, UIViewController, UIInputViewSetPlacement;


@protocol UISplitKeyboardSource <_UIRemoteKeyboardViewSource,UIInputViewSetPlacementOwner>
@property (nonatomic,retain,readonly) UIView * view; 
@property (nonatomic,readonly) BOOL isChangingPlacement; 
@property (nonatomic,readonly) CGPoint positionConstraintConstant; 
@property (nonatomic,retain,readonly) UIViewController * _inputViewController; 
@property (nonatomic,retain,readonly) UIInputViewSetPlacement * placement; 
@property (nonatomic,retain,readonly) id<UIInputViewSetPlacementApplicator> applicator; 
@required
-(UIView *)view;
-(UIViewController *)_inputViewController;
-(UIInputViewSetPlacement *)placement;
-(void)setInterfaceAutorotationDisabled:(BOOL)arg1;
-(void)prepareForSplitTransition;
-(void)finishSplitTransition;
-(id<UIInputViewSetPlacementApplicator>)applicator;
-(BOOL)isChangingPlacement;
-(id)constructNotificationInfoForScrollWithMode:(unsigned long long)arg1;
-(CGPoint)positionConstraintConstant;

@end

