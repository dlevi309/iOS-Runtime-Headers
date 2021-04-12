/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setTopConstraintConstant:(double)arg1;
-(BOOL)isAttached;
-(void)setVisibleWhenPinningBarIsHidden:(BOOL)arg1;
-(void)setPaletteShadowIsHidden:(BOOL)arg1;
-(UINavigationController *)navController;
-(BOOL)pinningBarShadowWasHidden;
-(BOOL)isVisibleWhenPinningBarIsHidden;
-(BOOL)_paletteOverridesPinningBar;
-(void)setFrame:(CGRect)arg1 isAnimating:(BOOL)arg2;
-(BOOL)paletteIsHidden;
-(unsigned long long)boundaryEdge;
-(void)_setPaletteOverridesPinningBar:(BOOL)arg1;
-(BOOL)pinningBarShadowIsHidden;
-(void)setPreferredContentInsets:(UIEdgeInsets)arg1;
-(void)_setBackgroundView:(id)arg1;
-(BOOL)isPinned;
-(void)_setLeftConstraintConstant:(double)arg1;
-(void)setPinned:(BOOL)arg1;
-(UIEdgeInsets)preferredContentInsets;
-(UIView *)_backgroundView;
-(void)setPinningBarShadowWasHidden:(BOOL)arg1;
-(BOOL)paletteShadowIsHidden;
-(void)setPinningBarShadowIsHidden:(BOOL)arg1;

@end

