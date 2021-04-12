/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIInputViewSetPlacement, UIInputViewSet, UIView;


@protocol UIInputViewSetPlacementOwner <NSObject>
@property (readonly) BOOL keyboardController; 
@property (retain,readonly) UIInputViewSetPlacement * placement; 
@property (nonatomic,retain,readonly) id<UIInputViewSetPlacementApplicator> applicator; 
@property (retain,readonly) UIInputViewSet * inputViewSet; 
@property (retain,readonly) UIView * hostView; 
@property (retain,readonly) UIView * containerView; 
@property (assign) BOOL hideInputViewBackdrops; 
@property (readonly) long long inputViewBackdropStyle; 
@required
-(UIView *)containerView;
-(UIInputViewSetPlacement *)placement;
-(UIInputViewSet *)inputViewSet;
-(UIView *)hostView;
-(id<UIInputViewSetPlacementApplicator>)applicator;
-(BOOL)keyboardController;
-(void)setHideInputViewBackdrops:(BOOL)arg1;
-(long long)inputViewBackdropStyle;
-(BOOL)hideInputViewBackdrops;

@end

