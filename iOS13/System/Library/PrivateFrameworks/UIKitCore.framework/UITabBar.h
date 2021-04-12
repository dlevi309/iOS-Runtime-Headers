/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIShadowedView.h>
#import <UIKit/UIBarPositioning.h>

@protocol UITabBarDelegate;
@class UITabBarCustomizeView, NSArray, UITabBarItem, _UITabBarAppearanceStorage, _UITabBarVisualProvider, _UITabBarAccessoryView, UITabBarAppearance, UIView, NSString, UIColor, UIImage;

@interface UITabBar : UIView <_UIShadowedView, UIBarPositioning> {

	UITabBarCustomizeView* _customizeView;
	id<UITabBarDelegate> _delegate;
	NSArray* _items;
	UITabBarItem* _selectedItem;
	NSArray* _customizationItems;
	long long _barOrientation;
	struct {
		unsigned wasEnabled : 1;
		unsigned customized : 1;
		unsigned downButtonSentAction : 1;
		unsigned isLocked : 1;
		unsigned barStyle : 3;
		unsigned barTranslucence : 3;
		unsigned backgroundNeedsUpdate : 1;
		unsigned hiddenAwaitingFocus : 1;
		unsigned focusedItemHighlightShouldBeVisible : 1;
		unsigned hasVibrantLabels : 1;
		unsigned disableBlurTinting : 1;
		unsigned pendingFocusAction : 1;
		unsigned springLoaded : 1;
	}  _tabBarFlags;
	_UITabBarAppearanceStorage* _appearanceStorage;
	_UITabBarVisualProvider* _visualProvider;
	_UITabBarAccessoryView* _leadingBarAccessoryView;
	_UITabBarAccessoryView* _trailingBarAccessoryView;
	BOOL _hidesShadow;
	BOOL _showsHighlightedState;
	BOOL _scrollsItems;
	long long _itemPositioning;
	double _itemDimension;
	double _itemSpacing;
	long long _barMetrics;
	long long _imageStyle;
	long long _tabBarSizing;
	UITabBarAppearance* _standardAppearance;
	unsigned long long _preferredFocusHeading;
	UIView* __expectedSuperviewFollowingAnimation;
	long long _displayStyle;
	NSArray* _backgroundEffects;

}

@property (assign,setter=_setNextSelectionSlideDuration:,nonatomic) double _nextSelectionSlideDuration; 
@property (assign,setter=_setTabButtonWidth:,nonatomic) double _tabButtonWidth; 
@property (assign,setter=_setInterTabButtonSpacing:,nonatomic) double _interTabButtonSpacing; 
@property (assign,setter=_setHidesShadow:,nonatomic) BOOL _hidesShadow;                                                                                                          //@synthesize hidesShadow=_hidesShadow - In the implementation block
@property (assign,setter=_setTabBarSizing:,nonatomic) long long _tabBarSizing;                                                                                                   //@synthesize tabBarSizing=_tabBarSizing - In the implementation block
@property (assign,getter=isLocked,nonatomic) BOOL locked; 
@property (assign,setter=_setBarOrientation:,nonatomic) long long _barOrientation; 
@property (assign,setter=_setShowsHighlightedState:,nonatomic) BOOL _showsHighlightedState;                                                                                      //@synthesize showsHighlightedState=_showsHighlightedState - In the implementation block
@property (setter=_setAccessoryView:,nonatomic,retain) UIView * _accessoryView; 
@property (assign,setter=_setBackgroundNeedsUpdate:,nonatomic) BOOL _backgroundNeedsUpdate; 
@property (setter=_setBackdropViewLayerGroupName:,getter=_backdropViewLayerGroupName,nonatomic,retain) NSString * backdropViewLayerGroupName; 
@property (assign,setter=_setBarMetrics:,nonatomic) long long _barMetrics;                                                                                                       //@synthesize barMetrics=_barMetrics - In the implementation block
@property (assign,setter=_setImageStyle:,nonatomic) long long _imageStyle;                                                                                                       //@synthesize imageStyle=_imageStyle - In the implementation block
@property (assign,setter=_setScrollsItems:,nonatomic) BOOL _scrollsItems;                                                                                                        //@synthesize scrollsItems=_scrollsItems - In the implementation block
@property (assign,setter=_setFocusedItemHightlightShouldBeVisible:,getter=_focusedItemHighlightShouldBeVisible,nonatomic) BOOL focusedItemHighlightShouldBeVisible; 
@property (assign,setter=_setHiddenAwaitingFocus:,getter=_isHiddenAwaitingFocus,nonatomic) BOOL hiddenAwaitingFocus; 
@property (assign,setter=_setPreferredFocusHeading:,getter=_preferredFocusHeading,nonatomic) unsigned long long preferredFocusHeading;                                           //@synthesize preferredFocusHeading=_preferredFocusHeading - In the implementation block
@property (assign,setter=_setPendingFocusAction:,getter=_pendingFocusAction,nonatomic) BOOL pendingFocusAction; 
@property (getter=_focusedTabBarItem,nonatomic,readonly) UITabBarItem * focusedTabBarItem; 
@property (getter=_focusedIndex,nonatomic,readonly) long long focusedIndex; 
@property (assign,setter=_setDeferViewUpdateToFocusUpdate:,getter=_deferViewUpdateToFocusUpdate,nonatomic) BOOL deferViewUpdateToFocusUpdate; 
@property (getter=_useVibrantItems,nonatomic,readonly) BOOL useVibrantItems; 
@property (nonatomic,readonly) _UITabBarAccessoryView * _leadingBarAccessoryView; 
@property (nonatomic,readonly) _UITabBarAccessoryView * _trailingBarAccessoryView; 
@property (nonatomic,retain) UIView * _expectedSuperviewFollowingAnimation;                                                                                                      //@synthesize _expectedSuperviewFollowingAnimation=__expectedSuperviewFollowingAnimation - In the implementation block
@property (nonatomic,readonly) UIView * _externalViewForSafeAreaInsets; 
@property (setter=_setBackgroundView:,nonatomic,retain) UIView * _backgroundView; 
@property (assign,setter=_setVibrantLabels:,nonatomic) BOOL _vibrantLabels; 
@property (assign,setter=_setBlurEnabled:,nonatomic) BOOL _blurEnabled; 
@property (assign,setter=_setDisplayStyle:,getter=_displayStyle,nonatomic) long long displayStyle;                                                                               //@synthesize displayStyle=_displayStyle - In the implementation block
@property (assign,setter=_setDisableBlurTinting:,nonatomic) BOOL _disableBlurTinting; 
@property (nonatomic,copy) NSArray * backgroundEffects;                                                                                                                          //@synthesize backgroundEffects=_backgroundEffects - In the implementation block
@property (assign,setter=_setMinimumWidthForHorizontalLayout:,nonatomic) double _minimumWidthForHorizontalLayout; 
@property (setter=_setBackdropGroupName:,nonatomic,copy) NSString * _backdropGroupName; 
@property (assign,nonatomic,__weak) id<UITabBarDelegate> delegate;                                                                                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * items; 
@property (assign,nonatomic,__weak) UITabBarItem * selectedItem;                                                                                                                 //@synthesize selectedItem=_selectedItem - In the implementation block
@property (getter=isCustomizing,nonatomic,readonly) BOOL customizing; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) UIColor * barTintColor; 
@property (nonatomic,copy) UIColor * unselectedItemTintColor; 
@property (nonatomic,retain) UIColor * selectedImageTintColor; 
@property (nonatomic,retain) UIImage * backgroundImage; 
@property (nonatomic,retain) UIImage * selectionIndicatorImage; 
@property (nonatomic,retain) UIImage * shadowImage; 
@property (assign,nonatomic) long long itemPositioning;                                                                                                                          //@synthesize itemPositioning=_itemPositioning - In the implementation block
@property (assign,nonatomic) double itemWidth;                                                                                                                                   //@synthesize itemDimension=_itemDimension - In the implementation block
@property (assign,nonatomic) double itemSpacing;                                                                                                                                 //@synthesize itemSpacing=_itemSpacing - In the implementation block
@property (assign,nonatomic) long long barStyle; 
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent; 
@property (nonatomic,copy) UITabBarAppearance * standardAppearance;                                                                                                              //@synthesize standardAppearance=_standardAppearance - In the implementation block
@property (nonatomic,readonly) UIView * leadingAccessoryView; 
@property (nonatomic,readonly) UIView * trailingAccessoryView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long barPosition; 
+(void)_initializeForIdiom:(long long)arg1 ;
+(id)_unselectedTabTintColorForView:(id)arg1 ;
+(id)_visualProviderForTabBar:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<UITabBarDelegate>)delegate;
-(void)setDelegate:(id<UITabBarDelegate>)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setLocked:(BOOL)arg1 ;
-(BOOL)isLocked;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIView *)_backgroundView;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusedView;
-(BOOL)canBecomeFocused;
-(BOOL)_isEligibleForFocusInteraction;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_setAccessoryView:(id)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setSpringLoaded:(BOOL)arg1 ;
-(BOOL)isSpringLoaded;
-(void)addConstraint:(id)arg1 ;
-(id)_shadowView;
-(void)setBackgroundEffects:(NSArray *)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)removeConstraint:(id)arg1 ;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(NSArray *)backgroundEffects;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)_accessibilityButtonShapesParametersDidChange;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(void)setBarStyle:(long long)arg1 ;
-(id)_appearanceStorage;
-(long long)barStyle;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(BOOL)_hidesShadow;
-(void)_sendAction:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isTranslucent;
-(void)setTranslucent:(BOOL)arg1 ;
-(UIView *)_externalViewForSafeAreaInsets;
-(long long)barPosition;
-(void)_installDefaultAppearance;
-(id)_effectiveBarTintColor;
-(void)setItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setBackgroundView:(id)arg1 ;
-(double)_shadowAlpha;
-(void)_setShadowAlpha:(double)arg1 ;
-(BOOL)_disableBlurTinting;
-(void)_setDisableBlurTinting:(BOOL)arg1 ;
-(id)_backdropViewLayerGroupName;
-(void)_setBackdropViewLayerGroupName:(id)arg1 ;
-(UITabBarAppearance *)standardAppearance;
-(void)setStandardAppearance:(UITabBarAppearance *)arg1 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(void)_setHidesShadow:(BOOL)arg1 ;
-(BOOL)_subclassImplementsDrawRect;
-(UIColor *)barTintColor;
-(NSString *)_backdropGroupName;
-(long long)_barMetrics;
-(UIView *)_accessoryView;
-(UIImage *)selectionIndicatorImage;
-(void)setSelectionIndicatorImage:(UIImage *)arg1 ;
-(UIColor *)selectedImageTintColor;
-(void)setSelectedImageTintColor:(UIColor *)arg1 ;
-(void)_configureTabBarReplacingItem:(id)arg1 withNewItem:(id)arg2 swapping:(BOOL)arg3 ;
-(void)_positionAllItems;
-(UIColor *)unselectedItemTintColor;
-(void)_setBackgroundNeedsUpdate:(BOOL)arg1 ;
-(void)setItemWidth:(double)arg1 ;
-(double)itemWidth;
-(void)setItemSpacing:(double)arg1 ;
-(double)itemSpacing;
-(void)_setBarMetrics:(long long)arg1 ;
-(void)_setImageStyle:(long long)arg1 ;
-(void)_setShowsHighlightedState:(BOOL)arg1 ;
-(void)_setScrollsItems:(BOOL)arg1 ;
-(void)setItemPositioning:(long long)arg1 ;
-(void)_accessibilityButtonShapesEnabledDidChangeNotification:(id)arg1 ;
-(void)_doCommonTabBarPreInit;
-(void)setSelectedItem:(UITabBarItem *)arg1 ;
-(void)setUnselectedItemTintColor:(UIColor *)arg1 ;
-(void)_doCommonTabBarInit;
-(long long)_effectiveBarOrientation;
-(UIView *)_expectedSuperviewFollowingAnimation;
-(unsigned long long)_edgesPropagatingSafeAreaInsetsToDescendants;
-(void)_customizeWithAvailableItems:(id)arg1 ;
-(void)_dismissCustomizeSheet:(BOOL)arg1 ;
-(UITabBarItem *)selectedItem;
-(void)_useModernAppearance;
-(id)_normalInheritedTintColor;
-(void)_effectiveBarTintColorDidChange;
-(id)_effectiveUnselectedTintColor;
-(BOOL)_isHiddenAwaitingFocus;
-(id)_focusedTabBarItem;
-(void)_buttonDownDelayed:(id)arg1 ;
-(void)_adjustButtonSelection:(id)arg1 ;
-(void)_customizeDoneButtonAction:(id)arg1 ;
-(double)_totalDimensionForItems:(id)arg1 spacing:(double)arg2 dimension:(double)arg3 scaleFactor:(double)arg4 ;
-(void)_setBackgroundImage:(id)arg1 ;
-(void)_setSelectionIndicatorImage:(id)arg1 ;
-(void)_setLabelFont:(id)arg1 ;
-(void)_setLabelTextColor:(id)arg1 selectedTextColor:(id)arg2 ;
-(void)_setLabelShadowColor:(id)arg1 ;
-(void)_setLabelShadowOffset:(CGSize)arg1 ;
-(BOOL)_useVibrantItems;
-(void)_setVibrantLabels:(BOOL)arg1 ;
-(BOOL)_vibrantLabels;
-(void)_setBlurEnabled:(BOOL)arg1 ;
-(BOOL)_blurEnabled;
-(double)_nextSelectionSlideDuration;
-(void)_setNextSelectionSlideDuration:(double)arg1 ;
-(double)_minimumWidthForHorizontalLayout;
-(void)_setMinimumWidthForHorizontalLayout:(double)arg1 ;
-(BOOL)_backgroundNeedsUpdate;
-(long long)_imageStyle;
-(void)_setTabBarSizing:(long long)arg1 ;
-(id)_effectiveUnselectedTabTintColorConsideringView:(id)arg1 ;
-(void)_setBackdropGroupName:(id)arg1 ;
-(void)_setTabButtonWidth:(double)arg1 ;
-(double)_tabButtonWidth;
-(void)_setInterTabButtonSpacing:(double)arg1 ;
-(double)_interTabButtonSpacing;
-(id)_tabBarItemForButtonAtPoint:(CGPoint)arg1 ;
-(double)_heightForCustomizingItems;
-(long long)_barOrientation;
-(void)_setBarOrientation:(long long)arg1 ;
-(BOOL)_isTranslucent;
-(void)beginCustomizingItems:(id)arg1 ;
-(BOOL)endCustomizingAnimated:(BOOL)arg1 ;
-(BOOL)isCustomizing;
-(void)_makeCurrentButtonFirstResponder;
-(void)_setDisplayStyle:(long long)arg1 ;
-(id)_effectiveUnselectedLabelTintColor;
-(id)_defaultUnselectedTintColorForDefaultTV;
-(void)_setDividerImage:(id)arg1 forLeftButtonState:(unsigned long long)arg2 rightButtonState:(unsigned long long)arg3 ;
-(id)_dividerImageForLeftButtonState:(unsigned long long)arg1 rightButtonState:(unsigned long long)arg2 ;
-(void)_setHiddenAwaitingFocus:(BOOL)arg1 ;
-(BOOL)_focusedItemHighlightShouldBeVisible;
-(void)_setFocusedItemHightlightShouldBeVisible:(BOOL)arg1 ;
-(BOOL)_pendingFocusAction;
-(void)_setPendingFocusAction:(BOOL)arg1 ;
-(long long)_focusedIndex;
-(BOOL)_deferViewUpdateToFocusUpdate;
-(void)_setDeferViewUpdateToFocusUpdate:(BOOL)arg1 ;
-(void)_tabBarFinishedAnimating;
-(void)dismissCustomizeSheet:(BOOL)arg1 ;
-(void)_buttonDown:(id)arg1 ;
-(void)_buttonUp:(id)arg1 ;
-(void)_buttonCancel:(id)arg1 ;
-(double)_scaleFactorForItems:(id)arg1 spacing:(double)arg2 dimension:(double)arg3 maxWidth:(double)arg4 ;
-(void)_ensureUnfocusedItemsAreNotSelected;
-(void)_updateTabBarItemView:(id)arg1 ;
-(_UITabBarAccessoryView *)_leadingBarAccessoryView;
-(_UITabBarAccessoryView *)_trailingBarAccessoryView;
-(UIView *)leadingAccessoryView;
-(UIView *)trailingAccessoryView;
-(long long)itemPositioning;
-(BOOL)_showsHighlightedState;
-(long long)_tabBarSizing;
-(BOOL)_scrollsItems;
-(unsigned long long)_preferredFocusHeading;
-(void)_setPreferredFocusHeading:(unsigned long long)arg1 ;
-(void)set_expectedSuperviewFollowingAnimation:(UIView *)arg1 ;
-(long long)_displayStyle;
-(BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long*)arg1 ;
-(double)_defaultAutolayoutSpacing;
-(double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(BOOL)arg4 ;
@end

