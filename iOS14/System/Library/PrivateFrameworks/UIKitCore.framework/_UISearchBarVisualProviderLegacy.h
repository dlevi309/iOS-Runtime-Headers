/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISearchBarVisualProviding.h>

@protocol _UISearchBarVisualProvidingDelegate_UINavigationBarAugmentedTitleViewUITextInputTraits_Private, _UINavigationBarTitleViewDataSource;
@class _UISearchBarAppearanceStorage, UIBarButtonItem, UINavigationItem, UIView, UISearchBarTextField, UISearchBarBackground, _UIBackdropView, UIVisualEffectView, UIButton, NSString, UINavigationButton, UILabel, UIImageView, UISegmentedControl, _UISearchBarScopeBarBackground, NSArray, UIColor, _UINavigationBarTitleViewOverlayRects, UITextField, UIImage;

@interface _UISearchBarVisualProviderLegacy : NSObject <_UISearchBarVisualProviding> {

	UIEdgeInsets _effectiveContentInset;
	_UISearchBarAppearanceStorage* _appearanceStorage;
	UIBarButtonItem* _animatedAppearanceBarButtonItem;
	UINavigationItem* _searchNavigationItem;
	id _searchDisplayController;
	struct {
		unsigned barStyle : 3;
		unsigned searchBarStyle : 3;
		unsigned barTranslucence : 3;
		unsigned searchFieldLeftViewMode : 2;
		unsigned centerPlaceholder : 1;
		unsigned disabled : 1;
		unsigned reliesOnNavigationBarBackdrop : 1;
		unsigned drawsBackgroundInPalette : 1;
		unsigned hideBackground : 1;
		unsigned backgroundLayoutNeedsUpdate : 1;
		unsigned usesEmbeddedAppearance : 1;
		unsigned showsCancelButton : 1;
		unsigned autoDisableCancelButton : 1;
		unsigned cancelButtonWantsLetterpress : 1;
		unsigned showsDeleteButton : 1;
		unsigned showsSearchResultsButton : 1;
		unsigned searchResultsButtonSelected : 1;
		unsigned showsBookmarkButton : 1;
		unsigned isPlacedInNavigationBar : 1;
		unsigned isPlacedInToolbar : 1;
		unsigned isInNavigationPalette : 1;
		unsigned isHostedByNavigationBar : 1;
		unsigned showsScopeBar : 1;
		unsigned allowsInlineScopeBar : 1;
		unsigned isAnimatingScopeBarIn : 1;
		unsigned isAnimatingScopeBarOut : 1;
	}  _searchBarVisualProviderFlags;
	UIView*<_UISearchBarVisualProvidingDelegate>*<_UINavigationBarAugmentedTitleView>*<UITextInputTraits_Private> _delegate;
	UISearchBarTextField* _searchField;
	UISearchBarBackground* _searchBarBackground;
	_UIBackdropView* _backdrop;
	UIVisualEffectView* _backdropVisualEffectView;
	UIView* _searchBarClippingView;
	UIButton* _cancelButton;
	UIBarButtonItem* _cancelBarButtonItem;
	NSString* _cancelButtonText;
	UINavigationButton* _leftButton;
	UILabel* _promptLabel;
	UIImageView* _separator;
	UISegmentedControl* _scopeBar;
	UIView* _scopeBarContainerView;
	_UISearchBarScopeBarBackground* _scopeBarBackgroundView;
	NSArray* _scopeTitles;
	long long _selectedScope;
	unsigned long long _backdropStyle;
	UIColor* _barTintColor;
	long long _barPosition;
	unsigned long long _scopeBarPosition;
	double _tableViewIndexWidth;
	long long _navBarTitleViewLocation;
	_UINavigationBarTitleViewOverlayRects* _navBarTitleViewOverlayRects;
	id<_UINavigationBarTitleViewDataSource> _navBarTitleViewDataSource;
	UIImageView* _shadowView;
	UIEdgeInsets _minimumContentInsetPrivate;

}

@property (nonatomic,copy,readonly) NSArray * runtimeOnlyViews; 
@property (assign,nonatomic) UIView*<_UISearchBarVisualProvidingDelegate>*<_UINavigationBarAugmentedTitleView>*<UITextInputTraits_Private> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UISearchBarTextField * searchField;                                                                                                  //@synthesize searchField=_searchField - In the implementation block
@property (nonatomic,readonly) UITextField * searchFieldIfExists; 
@property (nonatomic,retain) UISearchBarBackground * searchBarBackground;                                                                                         //@synthesize searchBarBackground=_searchBarBackground - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdrop;                                                                                                          //@synthesize backdrop=_backdrop - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backdropVisualEffectView;                                                                                       //@synthesize backdropVisualEffectView=_backdropVisualEffectView - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                                                                                             //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * cancelBarButtonItem;                                                                                             //@synthesize cancelBarButtonItem=_cancelBarButtonItem - In the implementation block
@property (nonatomic,readonly) UINavigationButton * leftButton;                                                                                                   //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,retain) UILabel * promptLabel;                                                                                                               //@synthesize promptLabel=_promptLabel - In the implementation block
@property (nonatomic,retain) UIImageView * separator;                                                                                                             //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) UISegmentedControl * scopeBar;                                                                                                       //@synthesize scopeBar=_scopeBar - In the implementation block
@property (nonatomic,readonly) UIView * scopeBarContainerView;                                                                                                    //@synthesize scopeBarContainerView=_scopeBarContainerView - In the implementation block
@property (nonatomic,retain) _UISearchBarScopeBarBackground * scopeBarBackgroundView;                                                                             //@synthesize scopeBarBackgroundView=_scopeBarBackgroundView - In the implementation block
@property (nonatomic,readonly) UIView * searchBarClippingView;                                                                                                    //@synthesize searchBarClippingView=_searchBarClippingView - In the implementation block
@property (nonatomic,readonly) UIImageView * shadowView;                                                                                                          //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,copy) NSString * prompt; 
@property (nonatomic,copy) NSArray * scopeTitles;                                                                                                                 //@synthesize scopeTitles=_scopeTitles - In the implementation block
@property (nonatomic,copy) NSString * cancelButtonText;                                                                                                           //@synthesize cancelButtonText=_cancelButtonText - In the implementation block
@property (assign,nonatomic) long long barStyle; 
@property (assign,nonatomic) unsigned long long searchBarStyle; 
@property (assign,nonatomic) long long barTranslucence; 
@property (assign,nonatomic) unsigned long long backdropStyle;                                                                                                    //@synthesize backdropStyle=_backdropStyle - In the implementation block
@property (nonatomic,retain) UIColor * barTintColor;                                                                                                              //@synthesize barTintColor=_barTintColor - In the implementation block
@property (assign,nonatomic) long long barPosition;                                                                                                               //@synthesize barPosition=_barPosition - In the implementation block
@property (assign,nonatomic) unsigned long long scopeBarPosition;                                                                                                 //@synthesize scopeBarPosition=_scopeBarPosition - In the implementation block
@property (assign,nonatomic) long long searchFieldLeftViewMode; 
@property (assign,nonatomic) BOOL centerPlaceholder; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) BOOL reliesOnNavigationBarBackdrop; 
@property (assign,nonatomic) BOOL drawsBackground; 
@property (assign,nonatomic) BOOL usesEmbeddedAppearance; 
@property (assign,nonatomic) BOOL showsCancelButton; 
@property (assign,nonatomic) BOOL autoDisableCancelButton; 
@property (assign,nonatomic) BOOL cancelButtonWantsLetterpress; 
@property (assign,nonatomic) BOOL showsSearchResultsButton; 
@property (assign,getter=isSearchResultsButtonSelected,nonatomic) BOOL searchResultsButtonSelected; 
@property (assign,nonatomic) BOOL showsBookmarkButton; 
@property (assign,nonatomic) BOOL showsScopeBar; 
@property (nonatomic,readonly) BOOL scopeBarIsVisible; 
@property (assign,nonatomic) long long selectedScope;                                                                                                             //@synthesize selectedScope=_selectedScope - In the implementation block
@property (assign,getter=isPlacedInNavigationBar,nonatomic) BOOL placedInNavigationBar; 
@property (assign,getter=isPlacedInToolbar,nonatomic) BOOL placedInToolbar; 
@property (assign,getter=isInNavigationPalette,nonatomic) BOOL inNavigationPalette; 
@property (assign,getter=isHostedByNavigationBar,nonatomic) BOOL hostedByNavigationBar; 
@property (nonatomic,retain) UIImage * separatorImage; 
@property (nonatomic,retain) UIImage * scopeBarBackgroundImage; 
@property (assign,nonatomic) UIOffset searchFieldBackgroundPositionAdjustment; 
@property (nonatomic,readonly) UIColor * textColor; 
@property (assign,nonatomic) UIEdgeInsets minimumContentInset;                                                                                                    //@synthesize minimumContentInsetPrivate=_minimumContentInsetPrivate - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets effectiveContentInset;                                                                                                //@synthesize effectiveContentInset=_effectiveContentInset - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets scopeBarInsets; 
@property (nonatomic,readonly) BOOL alwaysUsesLayoutMarginsForHorizontalContentInset; 
@property (assign,nonatomic) double tableViewIndexWidth;                                                                                                          //@synthesize tableViewIndexWidth=_tableViewIndexWidth - In the implementation block
@property (nonatomic,readonly) double searchFieldHeight; 
@property (nonatomic,readonly) double scopeBarHeight; 
@property (nonatomic,readonly) CGSize intrinsicContentSize; 
@property (assign,nonatomic,__weak) id<_UINavigationBarTitleViewDataSource> navBarTitleViewDataSource;                                                            //@synthesize navBarTitleViewDataSource=_navBarTitleViewDataSource - In the implementation block
@property (assign,nonatomic) long long navBarTitleViewLocation;                                                                                                   //@synthesize navBarTitleViewLocation=_navBarTitleViewLocation - In the implementation block
@property (nonatomic,retain) _UINavigationBarTitleViewOverlayRects * navBarTitleViewOverlayRects;                                                                 //@synthesize navBarTitleViewOverlayRects=_navBarTitleViewOverlayRects - In the implementation block
@property (getter=isLegacy,nonatomic,readonly) BOOL legacy; 
@property (assign,nonatomic) BOOL drawsBackgroundInPalette; 
@property (nonatomic,readonly) BOOL backgroundLayoutNeedsUpdate; 
@property (assign,nonatomic) BOOL allowsInlineScopeBar; 
@property (nonatomic,readonly) UIBarButtonItem * animatedAppearanceBarButtonItem;                                                                                 //@synthesize animatedAppearanceBarButtonItem=_animatedAppearanceBarButtonItem - In the implementation block
@property (nonatomic,readonly) UINavigationItem * searchNavigationItem; 
@property (assign,nonatomic,__weak) id searchDisplayController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPrompt:(NSString *)arg1 ;
-(void)setSearchFieldBackgroundPositionAdjustment:(UIOffset)arg1 ;
-(NSString *)prompt;
-(UINavigationButton *)leftButton;
-(UISegmentedControl *)scopeBar;
-(void)_setShowsScopeBar:(BOOL)arg1 ;
-(UILabel *)promptLabel;
-(unsigned long long)searchBarStyle;
-(void)invalidateLayout;
-(UIButton *)cancelButton;
-(id)internalImageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2 ;
-(void)updateRightView;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(double)defaultHeight;
-(void)setShowsDeleteButton:(BOOL)arg1 ;
-(void)_setSearchResultsButtonSelected:(BOOL)arg1 ;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(double)availableBoundsWidth;
-(CGSize)intrinsicContentSize;
-(void)setPlacedInToolbar:(BOOL)arg1 ;
-(UIColor *)textColor;
-(long long)barStyle;
-(void)setClippingViewBounds:(CGRect)arg1 ;
-(void)updateForSemanticContext;
-(BOOL)showsCancelButton;
-(UIView *)scopeBarContainerView;
-(void)destroyCancelButton;
-(void)setSelectedScope:(long long)arg1 ;
-(void)setSearchField:(UISearchBarTextField *)arg1 ;
-(_UIBackdropView *)backdrop;
-(BOOL)isTranslucent;
-(id)makeShadowView;
-(void)setUpLeftButton;
-(void)setCenterPlaceholder:(BOOL)arg1 ;
-(void)setDrawsBackground:(BOOL)arg1 ;
-(void)updateEffectiveContentInset;
-(UISearchBarTextField *)searchField;
-(BOOL)showsScopeBar;
-(BOOL)isLegacy;
-(BOOL)showsBookmarkButton;
-(BOOL)wouldCombineLandscapeBarsForSize:(CGSize)arg1 ;
-(UIVisualEffectView *)backdropVisualEffectView;
-(void)setNavBarTitleViewLocation:(long long)arg1 ;
-(void)setShowsSearchResultsButton:(BOOL)arg1 ;
-(UIView*<_UISearchBarVisualProvidingDelegate>*<_UINavigationBarAugmentedTitleView>*<UITextInputTraits_Private>)delegate;
-(void)setBarTranslucence:(long long)arg1 ;
-(void)updateIfNecessaryForOldSize:(CGSize)arg1 ;
-(id)searchFieldBackgroundImageForState:(unsigned long long)arg1 ;
-(UIEdgeInsets)effectiveContentInset;
-(long long)navBarTitleViewLocation;
-(id)colorForComponent:(unsigned long long)arg1 disabled:(BOOL)arg2 ;
-(void)displayNavBarCancelButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIOffset)searchFieldBackgroundPositionAdjustment;
-(void)setTableViewIndexWidth:(double)arg1 ;
-(void)setInNavigationPalette:(BOOL)arg1 ;
-(void)applySearchBarStyle;
-(double)defaultHeightForOrientation:(long long)arg1 ;
-(void)updateDictationButton;
-(void)layoutBackgroundViewConsideringTopBarStatusAndChangedHeight:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setHelperPlaceholderHidden:(BOOL)arg1 ;
-(UIBarButtonItem *)animatedAppearanceBarButtonItem;
-(id)effectiveBarTintColor;
-(double)searchFieldHeight;
-(void)setHostedByNavigationBar:(BOOL)arg1 ;
-(void)updateForDrawsBackgroundInPalette;
-(void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3 ;
-(void)setHelperPlaceholder:(id)arg1 ;
-(void)_setShowsBookmarkButton:(BOOL)arg1 ;
-(void)setSearchBarBackground:(UISearchBarBackground *)arg1 ;
-(id)searchDisplayController;
-(void)setSearchDisplayController:(id)arg1 ;
-(void)setSearchFieldLeftViewMode:(long long)arg1 ;
-(double)tableViewIndexWidth;
-(void)setUpScopeBar;
-(_UINavigationBarTitleViewOverlayRects *)navBarTitleViewOverlayRects;
-(void)updateNeedForBackdrop;
-(UIImageView *)shadowView;
-(double)navigationBarContentHeight;
-(unsigned long long)scopeBarPosition;
-(void)setScopeTitles:(NSArray *)arg1 ;
-(BOOL)reliesOnNavigationBarBackdrop;
-(void)setBackdrop:(_UIBackdropView *)arg1 ;
-(void)setDrawsBackgroundInPalette:(BOOL)arg1 ;
-(void)setScopeBarBackgroundImage:(UIImage *)arg1 ;
-(void)setUpPromptLabel;
-(void)setUpSearchNavigationItemWithSizingOption:(unsigned long long)arg1 ;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(void)destroyPromptLabel;
-(BOOL)isAtTop;
-(BOOL)usesEmbeddedAppearance;
-(BOOL)backgroundLayoutNeedsUpdate;
-(UIImageView *)separator;
-(void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setDelegate:(UIView*<_UISearchBarVisualProvidingDelegate>*<_UINavigationBarAugmentedTitleView>*<UITextInputTraits_Private>)arg1 ;
-(void)_setAutoDisableCancelButton:(BOOL)arg1 ;
-(void)setShowsScopeBar:(BOOL)arg1 ;
-(BOOL)isInNavigationPalette;
-(void)setAllowsInlineScopeBar:(BOOL)arg1 ;
-(void)setOverrideContentInsets:(UIEdgeInsets)arg1 forRectEdges:(unsigned long long)arg2 ;
-(void)setShowsBookmarkButton:(BOOL)arg1 ;
-(void)setUpSearchField;
-(id<_UINavigationBarTitleViewDataSource>)navBarTitleViewDataSource;
-(void)setUsesEmbeddedAppearance:(BOOL)arg1 ;
-(void)updateScopeBarBackground;
-(void)_setShowsSearchResultsButton:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setDisableDictationButton:(BOOL)arg1 ;
-(id)currentSeparatorImage;
-(void)_setHideBackground:(BOOL)arg1 ;
-(NSString *)cancelButtonText;
-(void)getTopInset:(double*)arg1 bottomInset:(double*)arg2 forBarMetrics:(long long)arg3 barPosition:(long long)arg4 ;
-(id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(UITextField *)searchFieldIfExists;
-(NSArray *)runtimeOnlyViews;
-(BOOL)scopeBarIsVisible;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)allowCursorToAppear:(BOOL)arg1 ;
-(BOOL)isInBarButNotHosted;
-(void)setScopeBarBackgroundView:(_UISearchBarScopeBarBackground *)arg1 ;
-(double)barHeightForBarMetrics:(long long)arg1 withEffectiveInsets:(UIEdgeInsets)arg2 ;
-(BOOL)containsScopeBar;
-(long long)barPosition;
-(void)setShadowVisibleIfNecessary:(BOOL)arg1 ;
-(long long)barTranslucence;
-(BOOL)showsSearchResultsButton;
-(void)_setBarTintColor:(id)arg1 ;
-(void)setSearchDisplayControllerShowsCancelButton:(BOOL)arg1 ;
-(long long)barMetricsForOrientation:(long long)arg1 ;
-(UIEdgeInsets)minimumContentInset;
-(void)prepareFromAbandonedVisualProvider:(id)arg1 ;
-(void)updateMagnifyingGlassView;
-(void)_setShowsCancelButton:(BOOL)arg1 ;
-(void)setBarTintColor:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(void)updateBackgroundToBackdropStyle:(long long)arg1 ;
-(id)internalImageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2 customImage:(BOOL*)arg3 ;
-(void)setAutoDisableCancelButton:(BOOL)arg1 ;
-(void)updateSearchBarOpacity;
-(BOOL)alwaysUsesLayoutMarginsForHorizontalContentInset;
-(long long)searchFieldLeftViewMode;
-(void)setSearchResultsButtonSelected:(BOOL)arg1 ;
-(double)barHeightForBarMetrics:(long long)arg1 barPosition:(long long)arg2 ;
-(void)setScopeBarPosition:(unsigned long long)arg1 ;
-(BOOL)drawsBackgroundInPalette;
-(void)setBarPosition:(long long)arg1 ;
-(void)setPlacedInNavigationBar:(BOOL)arg1 ;
-(double)availableBoundsWidthForSize:(CGSize)arg1 ;
-(void)setScopeBar:(UISegmentedControl *)arg1 ;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setBarStyle:(long long)arg1 ;
-(void)updateNavigationBarLayoutInsertDataForSearchBar:(id)arg1 collapsibleScopeBar:(id)arg2 forLayoutState:(long long)arg3 ;
-(void)setSeparator:(UIImageView *)arg1 ;
-(BOOL)drawsBackground;
-(void)setSearchBarStyle:(unsigned long long)arg1 ;
-(void)setNavBarTitleViewDataSource:(id<_UINavigationBarTitleViewDataSource>)arg1 ;
-(void)updateScopeBarFrame;
-(void)_removeLegacyBackdropView;
-(void)_removeBackdropVisualEffectView;
-(void)setNavBarTitleViewOverlayRects:(_UINavigationBarTitleViewOverlayRects *)arg1 ;
-(void)teardown;
-(void)navigationBarTransitionCompleted:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(UINavigationItem *)searchNavigationItem;
-(void)setBackdropVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)getScopeBarHeight:(double*)arg1 containerHeight:(double*)arg2 ;
-(void)getOverrideContentInsets:(UIEdgeInsets*)arg1 overriddenEdges:(unsigned long long*)arg2 ;
-(BOOL)useRelaxedScopeLayout;
-(double)_defaultWidth;
-(BOOL)searchFieldWidthShouldBeFlexible;
-(BOOL)isPlacedInNavigationBar;
-(double)landscapeSearchFieldWidth;
-(double)landscapeScopeBarWidth;
-(id)navigationBarForShadow;
-(BOOL)shouldDisplayShadow;
-(BOOL)shouldCombineLandscapeBarsForOrientation:(long long)arg1 ;
-(void)setReliesOnNavigationBarBackdrop:(BOOL)arg1 ;
-(void)updateSearchFieldArt;
-(long long)selectedScope;
-(BOOL)_getNavigationTitleLeadingInset:(double*)arg1 trailingInset:(double*)arg2 isRTL:(BOOL)arg3 ;
-(void)setSeparatorImage:(UIImage *)arg1 ;
-(BOOL)isPlacedInToolbar;
-(BOOL)isEnabled;
-(UIImage *)scopeBarBackgroundImage;
-(void)setBackgroundLayoutNeedsUpdate;
-(UISearchBarBackground *)searchBarBackground;
-(void)setImage:(id)arg1 forSearchBarIcon:(long long)arg2 state:(unsigned long long)arg3 ;
-(void)setShowsSeparator:(BOOL)arg1 ;
-(id)imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2 ;
-(void)_setBarTranslucence:(long long)arg1 ;
-(void)effectiveBarTintColorDidChange:(BOOL)arg1 ;
-(BOOL)isSearchResultsButtonSelected;
-(BOOL)wantsDictationButton;
-(BOOL)centerPlaceholder;
-(void)setShowsScopeBar:(BOOL)arg1 animateOpacity:(BOOL)arg2 ;
-(UIBarButtonItem *)cancelBarButtonItem;
-(_UISearchBarScopeBarBackground *)scopeBarBackgroundView;
-(BOOL)isHostedByNavigationBar;
-(void)updateScopeBarForSelectedScope;
-(void)setHelperPlaceholderOverride:(id)arg1 ;
-(void)setUpCancelButtonWithAppearance:(id)arg1 ;
-(UIImage *)separatorImage;
-(void)updatePlaceholderColor;
-(UIEdgeInsets)scopeBarInsets;
-(BOOL)hasDarkUIAppearance;
-(void)prepare;
-(double)barHeightForBarMetrics:(long long)arg1 ;
-(void)setUpCancelButton;
-(BOOL)allowsInlineScopeBar;
-(void)navigationBarTransitionWillBegin:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(void)setPromptLabel:(UILabel *)arg1 ;
-(void)setCancelButtonText:(NSString *)arg1 ;
-(void)setCancelButtonWantsLetterpress:(BOOL)arg1 ;
-(unsigned long long)backdropStyle;
-(UIView *)searchBarClippingView;
-(void)layoutSubviewsInBounds:(CGRect)arg1 ;
-(UIColor *)barTintColor;
-(BOOL)autoDisableCancelButton;
-(void)setShowsCancelButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setClippingViewActive:(BOOL)arg1 ;
-(double)scopeBarHeight;
-(void)setBackdropStyle:(unsigned long long)arg1 ;
-(void)setMinimumContentInset:(UIEdgeInsets)arg1 ;
-(NSArray *)scopeTitles;
-(void)updateForDynamicType;
-(BOOL)cancelButtonWantsLetterpress;
@end

