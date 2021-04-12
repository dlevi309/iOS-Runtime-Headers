/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIBackdropView, UIView, UIColor, _UINavigationBarAppearanceStorage;

@interface SUNavigationBarBackgroundView : UIView {

	_UIBackdropView* _backdropView;
	UIView* _borderView;
	BOOL _separatorOnTop;
	BOOL translucent;
	BOOL barWantsAdaptiveBackdrop;
	long long barStyle;
	UIColor* barTintColor;
	_UINavigationBarAppearanceStorage* appearanceStorage;
	UIView* _shadowView;

}

@property (readonly) _UIBackdropView * backdropView;                                             //@synthesize backdropView=_backdropView - In the implementation block
@property (assign,nonatomic) long long backdropStyle; 
@property (assign,nonatomic) BOOL separatorOnTop;                                                //@synthesize separatorOnTop=_separatorOnTop - In the implementation block
@property (assign,nonatomic) long long barStyle; 
@property (nonatomic,retain) UIColor * barTintColor; 
@property (nonatomic,retain) _UINavigationBarAppearanceStorage * appearanceStorage; 
@property (setter=_setShadowView:,nonatomic,retain) UIView * _shadowView;                        //@synthesize shadowView=_shadowView - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent; 
@property (assign,nonatomic) BOOL barWantsAdaptiveBackdrop; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)_shadowView;
-(_UIBackdropView *)backdropView;
-(_UINavigationBarAppearanceStorage *)appearanceStorage;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(BOOL)isTranslucent;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(UIColor *)barTintColor;
-(void)setBackdropStyle:(long long)arg1 ;
-(long long)backdropStyle;
-(void)_setShadowView:(id)arg1 ;
-(id)_currentCustomBackground;
-(id)_currentCustomBackgroundRespectOversize_legacy:(BOOL*)arg1 ;
-(void)_setFrame:(CGRect)arg1 forceUpdateBackgroundImage:(BOOL)arg2 ;
-(void)_setIsContainedInPopover:(BOOL)arg1 ;
-(void)updateBackgroundImage;
-(void)setAppearanceStorage:(_UINavigationBarAppearanceStorage *)arg1 ;
-(BOOL)barWantsAdaptiveBackdrop;
-(void)setBarWantsAdaptiveBackdrop:(BOOL)arg1 ;
-(void)setSeparatorOnTop:(BOOL)arg1 ;
-(BOOL)separatorOnTop;
@end

