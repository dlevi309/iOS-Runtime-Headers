/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UITargetedPreview, UIView, _UIPortalView, _UIPointerEffectTintView, _UILumaTrackingBackdropView, NSMutableArray, UIPointerShape;

@interface _UIPointerEffectPlatterView : UIView {

	BOOL _tintDisabled;
	BOOL _shouldMaskSpecularHighlight;
	BOOL _useSoftShadow;
	BOOL _geometryFrozen;
	BOOL _pressed;
	UITargetedPreview* _targetedPreview;
	double _shadowAlpha;
	double _backgroundAlpha;
	long long _tintMode;
	UIView* _specularHighlight;
	UIView* _contentSourceView;
	UIView* _shadowView;
	UIView* _backgroundView;
	_UIPortalView* _contentPortalView;
	_UIPointerEffectTintView* _tintView;
	_UILumaTrackingBackdropView* _lumaTrackingView;
	UIView* _specularOverlayView;
	NSMutableArray* _accessoryPortals;
	UIPointerShape* _tintViewShape;

}

@property (nonatomic,retain) UIView * contentSourceView;                                  //@synthesize contentSourceView=_contentSourceView - In the implementation block
@property (nonatomic,retain) UIView * shadowView;                                         //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                     //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) _UIPortalView * contentPortalView;                           //@synthesize contentPortalView=_contentPortalView - In the implementation block
@property (nonatomic,retain) _UIPointerEffectTintView * tintView;                         //@synthesize tintView=_tintView - In the implementation block
@property (nonatomic,retain) _UILumaTrackingBackdropView * lumaTrackingView;              //@synthesize lumaTrackingView=_lumaTrackingView - In the implementation block
@property (nonatomic,retain) UIView * specularOverlayView;                                //@synthesize specularOverlayView=_specularOverlayView - In the implementation block
@property (nonatomic,retain) NSMutableArray * accessoryPortals;                           //@synthesize accessoryPortals=_accessoryPortals - In the implementation block
@property (nonatomic,retain) UIPointerShape * tintViewShape;                              //@synthesize tintViewShape=_tintViewShape - In the implementation block
@property (nonatomic,copy) UITargetedPreview * targetedPreview;                           //@synthesize targetedPreview=_targetedPreview - In the implementation block
@property (assign,nonatomic) double shadowAlpha;                                          //@synthesize shadowAlpha=_shadowAlpha - In the implementation block
@property (assign,nonatomic) double backgroundAlpha;                                      //@synthesize backgroundAlpha=_backgroundAlpha - In the implementation block
@property (assign,getter=isTintDisabled,nonatomic) BOOL tintDisabled;                     //@synthesize tintDisabled=_tintDisabled - In the implementation block
@property (assign,nonatomic) long long tintMode;                                          //@synthesize tintMode=_tintMode - In the implementation block
@property (nonatomic,retain) UIView * specularHighlight;                                  //@synthesize specularHighlight=_specularHighlight - In the implementation block
@property (assign,nonatomic) BOOL shouldMaskSpecularHighlight;                            //@synthesize shouldMaskSpecularHighlight=_shouldMaskSpecularHighlight - In the implementation block
@property (assign,nonatomic) BOOL useSoftShadow;                                          //@synthesize useSoftShadow=_useSoftShadow - In the implementation block
@property (assign,nonatomic) BOOL geometryFrozen;                                         //@synthesize geometryFrozen=_geometryFrozen - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                               //@synthesize pressed=_pressed - In the implementation block
-(double)shadowAlpha;
-(void)setShadowAlpha:(double)arg1 ;
-(_UIPointerEffectTintView *)tintView;
-(void)setPressed:(BOOL)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)_backgroundView;
-(UIView *)backgroundView;
-(void)setTintMode:(long long)arg1 ;
-(void)setUseSoftShadow:(BOOL)arg1 ;
-(void)setTintDisabled:(BOOL)arg1 ;
-(void)setSpecularHighlight:(UIView *)arg1 ;
-(void)setShouldMaskSpecularHighlight:(BOOL)arg1 ;
-(id)initWithTargetedPreview:(id)arg1 tintViewShape:(id)arg2 ;
-(void)setGeometryFrozen:(BOOL)arg1 ;
-(void)setBackgroundAlpha:(double)arg1 ;
-(UIView *)shadowView;
-(void)setBounds:(CGRect)arg1 ;
-(long long)tintMode;
-(double)backgroundAlpha;
-(void)setTargetedPreview:(UITargetedPreview *)arg1 ;
-(void)setTintView:(_UIPointerEffectTintView *)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(BOOL)isPressed;
-(void)setShadowView:(UIView *)arg1 ;
-(BOOL)_ignoreRemoveAllAnimations;
-(BOOL)useSoftShadow;
-(id)_newShadowView;
-(void)setTintViewShape:(UIPointerShape *)arg1 ;
-(void)setContentSourceView:(UIView *)arg1 ;
-(UIView *)contentSourceView;
-(void)_layoutTintView;
-(void)_updateContentMask;
-(void)setContentPortalView:(_UIPortalView *)arg1 ;
-(_UIPortalView *)contentPortalView;
-(BOOL)geometryFrozen;
-(void)setAccessoryPortals:(NSMutableArray *)arg1 ;
-(void)_installAccessoryView:(id)arg1 ;
-(NSMutableArray *)accessoryPortals;
-(id)_newTintView;
-(_UILumaTrackingBackdropView *)lumaTrackingView;
-(void)setLumaTrackingView:(_UILumaTrackingBackdropView *)arg1 ;
-(id)_newLumaTrackingViewForTintView:(id)arg1 ;
-(BOOL)shouldMaskSpecularHighlight;
-(UIView *)specularOverlayView;
-(UIView *)specularHighlight;
-(id)_specularOverlayWithHighlightPortal:(id)arg1 shouldMask:(BOOL)arg2 ;
-(void)setSpecularOverlayView:(UIView *)arg1 ;
-(BOOL)isTintDisabled;
-(UIPointerShape *)tintViewShape;
-(UITargetedPreview *)targetedPreview;
@end

