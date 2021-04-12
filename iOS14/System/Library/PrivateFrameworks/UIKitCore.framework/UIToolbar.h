/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIAccessibilityHUDGestureDelegate.h>
#import <UIKitCore/_UIBarPositioningInternal.h>
#import <UIKit/UIGestureRecognizerDelegatePrivate.h>
#import <UIKit/UIBarPositioning.h>

@protocol _UIToolbarDelegateInternal;
@class NSArray, UIColor, _UIToolbarVisualProvider, UIAccessibilityHUDGestureManager, UIView, UIToolbarAppearance, UIBarButtonItem, NSString;

@interface UIToolbar : UIView <UIAccessibilityHUDGestureDelegate, _UIBarPositioningInternal, UIGestureRecognizerDelegatePrivate, UIBarPositioning> {

	id<_UIToolbarDelegateInternal> _delegate;
	NSArray* _items;
	UIColor* _barTintColor;
	struct {
		unsigned barStyle : 3;
		unsigned barTranslucence : 3;
		unsigned isLocked : 1;
		unsigned linkedBeforeWhitetailAndInitializedFromCoder : 1;
		unsigned disableBlurTinting : 1;
		unsigned delegateRespondsToInterfaceOrientationWindowSelector : 1;
	}  _toolbarFlags;
	id __appearanceStorage;
	_UIToolbarVisualProvider* _visualProvider;
	UIAccessibilityHUDGestureManager* _axHUDGestureManager;
	unsigned long long _disableAutolayoutWarnings;
	BOOL _autoHidesToolbarInFullscreen;
	BOOL __wantsLetterpressContent;
	BOOL _centerTextButtons;
	UIView* _shadowView;
	long long _barPosition;
	UIToolbarAppearance* _standardAppearance;
	UIToolbarAppearance* _compactAppearance;
	UIBarButtonItem* _centerItem;
	NSArray* _backgroundEffects;

}

@property (assign,setter=_setLocked:,getter=_isLocked,nonatomic) BOOL _locked; 
@property (setter=_setShadowView:,nonatomic,retain) UIView * _shadowView;                                                                                 //@synthesize shadowView=_shadowView - In the implementation block
@property (setter=_setBackdropViewLayerGroupName:,getter=_backdropViewLayerGroupName,nonatomic,copy) NSString * _backdropViewLayerGroupName; 
@property (nonatomic,readonly) long long _barTranslucence; 
@property (nonatomic,retain) UIBarButtonItem * centerItem;                                                                                                //@synthesize centerItem=_centerItem - In the implementation block
@property (assign,nonatomic) BOOL autoHidesToolbarInFullscreen;                                                                                           //@synthesize autoHidesToolbarInFullscreen=_autoHidesToolbarInFullscreen - In the implementation block
@property (setter=_setBackgroundView:,nonatomic,retain) UIView * _backgroundView; 
@property (assign,setter=_setHidesShadow:,nonatomic) BOOL _hidesShadow; 
@property (assign,setter=_setDisableBlurTinting:,nonatomic) BOOL _disableBlurTinting; 
@property (nonatomic,copy) NSArray * backgroundEffects;                                                                                                   //@synthesize backgroundEffects=_backgroundEffects - In the implementation block
@property (assign,setter=_setWantsLetterpressContent:,nonatomic) BOOL _wantsLetterpressContent;                                                           //@synthesize _wantsLetterpressContent=__wantsLetterpressContent - In the implementation block
@property (nonatomic,readonly) BOOL _shouldStretchDuringCrossfadeTransition; 
@property (assign,setter=_setItemDistribution:,nonatomic) long long _itemDistribution; 
@property (assign,nonatomic) BOOL centerTextButtons;                                                                                                      //@synthesize centerTextButtons=_centerTextButtons - In the implementation block
@property (getter=isMinibar,nonatomic,readonly) BOOL minibar; 
@property (assign,nonatomic) long long barStyle; 
@property (nonatomic,copy) NSArray * items;                                                                                                               //@synthesize items=_items - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) UIColor * barTintColor;                                                                                                      //@synthesize barTintColor=_barTintColor - In the implementation block
@property (nonatomic,copy) UIToolbarAppearance * standardAppearance;                                                                                      //@synthesize standardAppearance=_standardAppearance - In the implementation block
@property (nonatomic,copy) UIToolbarAppearance * compactAppearance;                                                                                       //@synthesize compactAppearance=_compactAppearance - In the implementation block
@property (assign,nonatomic,__weak) id<UIToolbarDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long barPosition;                                                                                                     //@synthesize barPosition=_barPosition - In the implementation block
+(double)defaultHeight;
+(BOOL)_forceLegacyVisualProvider;
+(double)defaultHeightForBarSize:(int)arg1 ;
+(id)defaultButtonFont;
+(id)_visualProviderForToolbar:(id)arg1 ;
-(void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(CGPoint)arg2 ;
-(void)_updateBackgroundView;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1 ;
-(id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(CGPoint)arg2 ;
-(void)_setBackgroundView:(id)arg1 ;
-(void)_setVisualAltitudeBias:(CGSize)arg1 ;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)setCenterTextButtons:(BOOL)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(CGSize)defaultSizeForOrientation:(long long)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(long long)_barPosition;
-(CGSize)intrinsicContentSize;
-(long long)barStyle;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isTranslucent;
-(void)_effectiveBarTintColorDidChangeWithPreviousColor:(id)arg1 ;
-(void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3 ;
-(void)_positionToolbarButtonsAndResetFontScaleAdjustment:(BOOL)arg1 ;
-(id<UIToolbarDelegate>)delegate;
-(void)_frameOrBoundsChangedWithVisibleSizeChange:(BOOL)arg1 wasMinibar:(BOOL)arg2 ;
-(UIView *)_backgroundView;
-(void)setBackgroundEffects:(NSArray *)arg1 ;
-(void)_setBarPosition:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)backdropView:(id)arg1 didChangeToGraphicsQuality:(long long)arg2 ;
-(void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned long long)arg3 ;
-(void)_46877859;
-(BOOL)_shouldStretchDuringCrossfadeTransition;
-(void)setItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(NSArray *)items;
-(BOOL)_linkedBeforeWhitetailAndInitializedFromCoder;
-(id)backgroundImageForToolbarPosition:(long long)arg1 barMetrics:(long long)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<UIToolbarDelegate>)arg1 ;
-(NSString *)description;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(UIBarButtonItem *)centerItem;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(void)_customViewChangedForButtonItem:(id)arg1 ;
-(long long)barPosition;
-(BOOL)_hostsLayoutEngineAllowsTAMIC_NO;
-(BOOL)_hidesShadow;
-(BOOL)_isLocked;
-(long long)_itemDistribution;
-(void)_setShadowView:(id)arg1 ;
-(BOOL)centerTextButtons;
-(void)setCenterItem:(UIBarButtonItem *)arg1 ;
-(BOOL)isMinibar;
-(id)initWithCoder:(id)arg1 ;
-(void)_sendAction:(id)arg1 withEvent:(id)arg2 ;
-(void)_setBackdropViewLayerGroupName:(id)arg1 ;
-(void)_setupAXHUDGestureIfNecessary;
-(BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long*)arg1 ;
-(double)_defaultAutolayoutSpacing;
-(double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(BOOL)arg4 ;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)_itemAtPoint:(CGPoint)arg1 ;
-(void)_doCommonToolbarInit;
-(void)_updateBarForStyle;
-(id)__appearanceStorage;
-(void)_setItemDistribution:(long long)arg1 ;
-(CGRect)_frameOfBarButtonItem:(id)arg1 ;
-(void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2 ;
-(id)shadowImageForToolbarPosition:(long long)arg1 ;
-(void)_setForceTopBarAppearance:(BOOL)arg1 ;
-(id)initInView:(id)arg1 withFrame:(CGRect)arg2 withItemList:(id)arg3 ;
-(BOOL)autoHidesToolbarInFullscreen;
-(void)setAutoHidesToolbarInFullscreen:(BOOL)arg1 ;
-(BOOL)_disableBlurTinting;
-(void)_setDisableBlurTinting:(BOOL)arg1 ;
-(NSString *)_backdropViewLayerGroupName;
-(void)_setWantsLetterpressContent:(BOOL)arg1 ;
-(void)setCompactAppearance:(UIToolbarAppearance *)arg1 ;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(long long)_expectedInterfaceOrientation;
-(UIToolbarAppearance *)standardAppearance;
-(void)setStandardAppearance:(UIToolbarAppearance *)arg1 ;
-(BOOL)_subclassImplementsDrawRect;
-(void)_setVisualAltitude:(double)arg1 ;
-(long long)_barTranslucence;
-(void)_setHidesShadow:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)_shadowView;
-(NSArray *)backgroundEffects;
-(void)_largeContentViewerEnabledStatusDidChange:(id)arg1 ;
-(void)_setLocked:(BOOL)arg1 ;
-(void)_installDefaultAppearance;
-(id)_effectiveBarTintColor;
-(void)_setNeedsBackgroundViewUpdate;
-(BOOL)_wantsLetterpressContent;
-(UIColor *)barTintColor;
-(void)dealloc;
-(UIToolbarAppearance *)compactAppearance;
@end

