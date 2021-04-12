/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_UIBackdropView *)backdropView;
-(void)setBarWantsAdaptiveBackdrop:(BOOL)arg1 ;
-(void)_setIsContainedInPopover:(BOOL)arg1 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(void)updateBackgroundImage;
-(void)setAppearanceStorage:(_UINavigationBarAppearanceStorage *)arg1 ;
-(void)_setFrame:(CGRect)arg1 forceUpdateBackgroundImage:(BOOL)arg2 ;
-(long long)barStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isTranslucent;
-(void)layoutSubviews;
-(void)_setShadowView:(id)arg1 ;
-(id)_currentCustomBackground;
-(_UINavigationBarAppearanceStorage *)appearanceStorage;
-(UIView *)_shadowView;
-(long long)backdropStyle;
-(UIColor *)barTintColor;
-(void)dealloc;
-(void)setBackdropStyle:(long long)arg1 ;
-(id)_currentCustomBackgroundRespectOversize_legacy:(BOOL*)arg1 ;
-(BOOL)barWantsAdaptiveBackdrop;
-(void)setSeparatorOnTop:(BOOL)arg1 ;
-(BOOL)separatorOnTop;
@end

