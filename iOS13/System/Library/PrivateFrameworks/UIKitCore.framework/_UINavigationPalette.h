/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIView, UINavigationController;


@protocol _UINavigationPalette <NSObject>
@property (setter=_setBackgroundView:,nonatomic,retain) UIView * _backgroundView; 
@property (assign,setter=_setPaletteOverridesPinningBar:,nonatomic) BOOL _paletteOverridesPinningBar; 
@property (nonatomic,readonly) UINavigationController * navController; 
@property (nonatomic,readonly) unsigned long long boundaryEdge; 
@property (assign,getter=isPinned,nonatomic) BOOL pinned; 
@property (assign,nonatomic) BOOL pinningBarShadowWasHidden; 
@property (assign,nonatomic) BOOL pinningBarShadowIsHidden; 
@property (assign,nonatomic) BOOL paletteShadowIsHidden; 
@property (assign,getter=isVisibleWhenPinningBarIsHidden,nonatomic) BOOL visibleWhenPinningBarIsHidden; 
@property (assign,nonatomic) UIEdgeInsets preferredContentInsets; 
@required
-(UIView *)_backgroundView;
-(BOOL)_paletteOverridesPinningBar;
-(BOOL)paletteShadowIsHidden;
-(void)_setBackgroundView:(id)arg1;
-(void)_setTopConstraintConstant:(double)arg1;
-(void)_setLeftConstraintConstant:(double)arg1;
-(void)setFrame:(CGRect)arg1 isAnimating:(BOOL)arg2;
-(BOOL)isAttached;
-(BOOL)paletteIsHidden;
-(void)_setPaletteOverridesPinningBar:(BOOL)arg1;
-(UINavigationController *)navController;
-(unsigned long long)boundaryEdge;
-(BOOL)isPinned;
-(void)setPinned:(BOOL)arg1;
-(BOOL)pinningBarShadowWasHidden;
-(void)setPinningBarShadowWasHidden:(BOOL)arg1;
-(BOOL)pinningBarShadowIsHidden;
-(void)setPinningBarShadowIsHidden:(BOOL)arg1;
-(void)setPaletteShadowIsHidden:(BOOL)arg1;
-(BOOL)isVisibleWhenPinningBarIsHidden;
-(void)setVisibleWhenPinningBarIsHidden:(BOOL)arg1;
-(UIEdgeInsets)preferredContentInsets;
-(void)setPreferredContentInsets:(UIEdgeInsets)arg1;

@end

