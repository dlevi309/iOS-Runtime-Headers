/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIViewController *)_inputViewController;
-(UIInputViewSetPlacement *)placement;
-(id<UIInputViewSetPlacementApplicator>)applicator;
-(void)prepareForSplitTransition;
-(UIView *)view;
-(id)constructNotificationInfoForScrollWithMode:(unsigned long long)arg1;
-(BOOL)isChangingPlacement;
-(void)finishSplitTransition;
-(void)setInterfaceAutorotationDisabled:(BOOL)arg1;
-(CGPoint)positionConstraintConstant;

@end

