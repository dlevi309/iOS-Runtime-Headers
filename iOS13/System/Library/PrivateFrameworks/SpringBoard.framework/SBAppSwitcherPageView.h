/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>

@protocol SBAppSwitcherPageContentView;
@class UIView, SBWallpaperEffectView, SBAppSwitcherPageShadowView, SBAppSwitcherSettings, NSString;

@interface SBAppSwitcherPageView : UIView <PTSettingsKeyObserver> {

	UIView* _hitTestBlocker;
	UIView* _dimmingView;
	SBWallpaperEffectView* _wallpaperOverlayView;
	UIView* _lighteningView;
	UIView* _viewClippingView;
	UIView*<SBAppSwitcherPageContentView> _view;
	UIView* _overlayClippingView;
	UIView* _overlayView;
	long long _shadowStyle;
	double _shadowAlpha;
	double _shadowOffset;
	UIRectCornerRadii _cornerRadii;
	BOOL _isHighlighted;
	BOOL _isShadowHighlighted;
	SBAppSwitcherPageShadowView* _shadowView;
	SBAppSwitcherSettings* _settings;
	long long _orientation;
	BOOL _shouldClipContentView;
	BOOL _shouldScaleOverlayToFillBounds;
	BOOL _needsBackgroundWallpaperTreatment;
	double _switcherCardScale;
	double _darkeningAlpha;
	double _killingDarkeningAlpha;
	double _wallpaperOverlayAlpha;
	double _lighteningAlpha;
	CGSize _overlayViewSize;
	CGSize _fullyPresentedSize;
	CGRect _contentClippingFrame;

}

@property (nonatomic,readonly) UIView * _overlayClippingView;                                //@synthesize overlayClippingView=_overlayClippingView - In the implementation block
@property (nonatomic,readonly) SBAppSwitcherPageShadowView * _shadowView;                    //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,retain) UIView*<SBAppSwitcherPageContentView> view;                     //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UIView * overlay;                                               //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,nonatomic) long long shadowStyle;                                          //@synthesize shadowStyle=_shadowStyle - In the implementation block
@property (assign,nonatomic) double shadowAlpha;                                             //@synthesize shadowAlpha=_shadowAlpha - In the implementation block
@property (assign,nonatomic) double shadowOffset;                                            //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) double overlayAlpha; 
@property (assign,nonatomic) double contentAlpha; 
@property (assign,nonatomic) double darkeningAlpha;                                          //@synthesize darkeningAlpha=_darkeningAlpha - In the implementation block
@property (assign,nonatomic) double killingDarkeningAlpha;                                   //@synthesize killingDarkeningAlpha=_killingDarkeningAlpha - In the implementation block
@property (assign,nonatomic) BOOL needsBackgroundWallpaperTreatment;                         //@synthesize needsBackgroundWallpaperTreatment=_needsBackgroundWallpaperTreatment - In the implementation block
@property (assign,nonatomic) double wallpaperOverlayAlpha;                                   //@synthesize wallpaperOverlayAlpha=_wallpaperOverlayAlpha - In the implementation block
@property (assign,nonatomic) double lighteningAlpha;                                         //@synthesize lighteningAlpha=_lighteningAlpha - In the implementation block
@property (assign,nonatomic) UIRectCornerRadii cornerRadii;                                  //@synthesize cornerRadii=_cornerRadii - In the implementation block
@property (assign,nonatomic) long long orientation;                                          //@synthesize orientation=_orientation - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,getter=isShadowHighlighted,nonatomic) BOOL shadowHighlighted; 
@property (assign,nonatomic) BOOL shouldClipContentView;                                     //@synthesize shouldClipContentView=_shouldClipContentView - In the implementation block
@property (assign,nonatomic) CGRect contentClippingFrame;                                    //@synthesize contentClippingFrame=_contentClippingFrame - In the implementation block
@property (assign,nonatomic) CGSize overlayViewSize;                                         //@synthesize overlayViewSize=_overlayViewSize - In the implementation block
@property (assign,nonatomic) CGSize fullyPresentedSize;                                      //@synthesize fullyPresentedSize=_fullyPresentedSize - In the implementation block
@property (assign,nonatomic) double switcherCardScale;                                       //@synthesize switcherCardScale=_switcherCardScale - In the implementation block
@property (assign,nonatomic) BOOL shouldScaleOverlayToFillBounds;                            //@synthesize shouldScaleOverlayToFillBounds=_shouldScaleOverlayToFillBounds - In the implementation block
@property (assign,nonatomic) BOOL blocksTouches; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,getter=isVisible,nonatomic) BOOL visible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(long long)orientation;
-(UIView *)overlay;
-(void)setOrientation:(long long)arg1 ;
-(double)shadowOffset;
-(void)setShadowOffset:(double)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(UIView*<SBAppSwitcherPageContentView>)view;
-(void)setView:(UIView*<SBAppSwitcherPageContentView>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(SBAppSwitcherPageShadowView *)_shadowView;
-(void)setCornerRadii:(UIRectCornerRadii)arg1 ;
-(void)_orderSubviews;
-(void)setShadowAlpha:(double)arg1 ;
-(double)shadowAlpha;
-(void)setContentAlpha:(double)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_updateShadow;
-(void)_updateCornerRadius;
-(double)contentAlpha;
-(void)setOverlay:(UIView *)arg1 ;
-(void)_updateDimmingViewAlpha;
-(UIRectCornerRadii)cornerRadii;
-(CGRect)_viewFrame;
-(double)overlayAlpha;
-(void)setOverlayAlpha:(double)arg1 ;
-(void)_layoutOverlayView;
-(void)setSwitcherCardScale:(double)arg1 ;
-(double)switcherCardScale;
-(void)_updateEffectOverlayViews;
-(void)setView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setOverlay:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateWallpaperOverlayAlpha;
-(void)_updateLighteningAlpha;
-(void)_setupShadowView;
-(BOOL)blocksTouches;
-(void)setBlocksTouches:(BOOL)arg1 ;
-(void)setShadowStyle:(long long)arg1 ;
-(void)setDarkeningAlpha:(double)arg1 ;
-(void)setKillingDarkeningAlpha:(double)arg1 ;
-(void)setNeedsBackgroundWallpaperTreatment:(BOOL)arg1 ;
-(void)setWallpaperOverlayAlpha:(double)arg1 ;
-(void)setLighteningAlpha:(double)arg1 ;
-(void)setShadowHighlighted:(BOOL)arg1 ;
-(BOOL)isShadowHighlighted;
-(void)setShouldClipContentView:(BOOL)arg1 ;
-(void)setContentClippingFrame:(CGRect)arg1 ;
-(void)setOverlayViewSize:(CGSize)arg1 ;
-(void)setFullyPresentedSize:(CGSize)arg1 ;
-(long long)shadowStyle;
-(BOOL)shouldClipContentView;
-(CGRect)contentClippingFrame;
-(CGSize)overlayViewSize;
-(CGSize)fullyPresentedSize;
-(BOOL)shouldScaleOverlayToFillBounds;
-(void)setShouldScaleOverlayToFillBounds:(BOOL)arg1 ;
-(UIView *)_overlayClippingView;
-(double)darkeningAlpha;
-(double)killingDarkeningAlpha;
-(BOOL)needsBackgroundWallpaperTreatment;
-(double)wallpaperOverlayAlpha;
-(double)lighteningAlpha;
@end

