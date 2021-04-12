/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIBackdropView, UIView, _UINavigationBarAppearanceStorage, UIColor, NSString;

@interface SKUITabBarBackgroundView : UIView {

	_UIBackdropView* _backdropView;
	UIView* _borderView;
	BOOL barWantsAdaptiveBackdrop;
	BOOL translucent;
	_UINavigationBarAppearanceStorage* appearanceStorage;
	long long barStyle;
	UIColor* barTintColor;
	UIView* _shadowView;
	long long _backdropStyle;

}

@property (nonatomic,retain) _UINavigationBarAppearanceStorage * appearanceStorage; 
@property (assign,nonatomic) long long barStyle; 
@property (nonatomic,retain) UIColor * barTintColor; 
@property (assign,nonatomic) BOOL barWantsAdaptiveBackdrop; 
@property (setter=_setShadowView:,nonatomic,retain) UIView * _shadowView;                        //@synthesize shadowView=_shadowView - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent; 
@property (nonatomic,copy) NSString * backdropGroupName; 
@property (assign,nonatomic) long long backdropStyle;                                            //@synthesize backdropStyle=_backdropStyle - In the implementation block
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
-(NSString *)backdropGroupName;
-(void)_setShadowView:(id)arg1 ;
-(id)_currentCustomBackground;
-(_UINavigationBarAppearanceStorage *)appearanceStorage;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(UIView *)_shadowView;
-(long long)backdropStyle;
-(UIColor *)barTintColor;
-(void)setBackdropStyle:(long long)arg1 ;
-(id)_currentCustomBackgroundRespectOversize_legacy:(BOOL*)arg1 ;
-(BOOL)barWantsAdaptiveBackdrop;
@end

