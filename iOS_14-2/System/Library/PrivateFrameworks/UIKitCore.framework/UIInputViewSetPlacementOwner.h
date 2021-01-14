/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIInputViewSet *)inputViewSet;
-(UIInputViewSetPlacement *)placement;
-(id<UIInputViewSetPlacementApplicator>)applicator;
-(void)setHideInputViewBackdrops:(BOOL)arg1;
-(BOOL)hideInputViewBackdrops;
-(UIView *)containerView;
-(BOOL)keyboardController;
-(UIView *)hostView;
-(long long)inputViewBackdropStyle;

@end

