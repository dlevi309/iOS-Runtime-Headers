/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class _UIStatusBarAction, UIView;


@protocol _UIStatusBarActionable <NSObject>
@property (nonatomic,retain) _UIStatusBarAction * action; 
@property (nonatomic,retain) _UIStatusBarAction * hoverAction; 
@property (nonatomic,readonly) UIView * hoverView; 
@property (nonatomic,readonly) CGRect absoluteHoverFrame; 
@property (assign,nonatomic) NSDirectionalEdgeInsets extendedHoverInsets; 
@property (assign,nonatomic) UIEdgeInsets actionInsets; 
@property (nonatomic,readonly) id<UILayoutItem> layoutItem; 
@required
-(_UIStatusBarAction *)action;
-(void)setAction:(id)arg1;
-(id<UILayoutItem>)layoutItem;
-(void)setActionInsets:(UIEdgeInsets)arg1;
-(_UIStatusBarAction *)hoverAction;
-(void)setHoverAction:(id)arg1;
-(UIView *)hoverView;
-(CGRect)absoluteHoverFrame;
-(NSDirectionalEdgeInsets)extendedHoverInsets;
-(void)setExtendedHoverInsets:(NSDirectionalEdgeInsets)arg1;
-(UIEdgeInsets)actionInsets;

@end

