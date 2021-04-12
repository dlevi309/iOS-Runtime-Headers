/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISearchBarLayoutBase.h>
#import <UIKitCore/_UISearchBarContainerSublayoutDelegate.h>

@class UIView, _UISearchBarScopeContainerView, _UISearchBarSearchContainerView, _UISearchBarPromptContainerView, UIFont, _UISearchBarScopeContainerLayout, _UISearchBarSearchContainerLayout, UISearchBarTextField, NSString;

@interface _UISearchBarLayout : _UISearchBarLayoutBase <_UISearchBarContainerSublayoutDelegate> {

	SCD_Struct_UI20 _searchBarLayoutFlags;
	double _cachedFontValueBeforeScaling;
	double _cachedFontValueAfterScaling;
	UIView* _searchBarBackground;
	UIView* _searchBarBackdrop;
	UIView* _separator;
	_UISearchBarScopeContainerView* _scopeBarContainer;
	_UISearchBarSearchContainerView* _searchFieldContainer;
	_UISearchBarPromptContainerView* _promptContainer;
	double _backgroundExtension;
	double _searchBarReadableWidth;
	unsigned long long _numberOfScopeTitles;
	UIFont* _searchFieldFont;
	long long _representedLayoutState;
	_UISearchBarScopeContainerLayout* _scopeContainerLayout;
	_UISearchBarSearchContainerLayout* _searchContainerLayout;
	UIOffset _searchFieldBackgroundPositionAdjustment;
	CGSize _heightRange;
	CGRect _promptContainerLayoutFrame;
	CGRect _searchFieldContainerLayoutFrame;
	CGRect _scopeBarContainerLayoutFrame;
	CGRect _searchBarBackgroundLayoutFrame;
	CGRect _separatorLayoutFrame;

}

@property (nonatomic,retain) _UISearchBarScopeContainerLayout * scopeContainerLayout;                                //@synthesize scopeContainerLayout=_scopeContainerLayout - In the implementation block
@property (nonatomic,retain) _UISearchBarSearchContainerLayout * searchContainerLayout;                              //@synthesize searchContainerLayout=_searchContainerLayout - In the implementation block
@property (nonatomic,readonly) double naturalSearchBarHeight; 
@property (nonatomic,readonly) double naturalSearchFieldHeight; 
@property (nonatomic,readonly) double naturalScopeBarHeight; 
@property (nonatomic,readonly) UIEdgeInsets scopeContainerSpecificInsets; 
@property (nonatomic,readonly) double naturalPromptContainerHeight; 
@property (nonatomic,readonly) double naturalTotalHeight; 
@property (assign,getter=isProspective,nonatomic) BOOL prospective; 
@property (assign,getter=isHostingNavBarTransitionActive,nonatomic) BOOL hostingNavBarTransitionActive; 
@property (nonatomic,retain) UIView * searchBarBackground;                                                           //@synthesize searchBarBackground=_searchBarBackground - In the implementation block
@property (nonatomic,retain) UIView * searchBarBackdrop;                                                             //@synthesize searchBarBackdrop=_searchBarBackdrop - In the implementation block
@property (nonatomic,retain) UIView * separator;                                                                     //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) _UISearchBarScopeContainerView * scopeBarContainer;                                     //@synthesize scopeBarContainer=_scopeBarContainer - In the implementation block
@property (nonatomic,retain) _UISearchBarSearchContainerView * searchFieldContainer;                                 //@synthesize searchFieldContainer=_searchFieldContainer - In the implementation block
@property (nonatomic,retain) _UISearchBarPromptContainerView * promptContainer;                                      //@synthesize promptContainer=_promptContainer - In the implementation block
@property (nonatomic,retain) UIView * scopeBar; 
@property (nonatomic,retain) UISearchBarTextField * searchField; 
@property (nonatomic,retain) UIView * cancelButton; 
@property (nonatomic,retain) UIView * deleteButton; 
@property (nonatomic,retain) UIView * leftButton; 
@property (assign,nonatomic) BOOL hasCancelButton; 
@property (assign,nonatomic) BOOL hasDeleteButton; 
@property (assign,nonatomic) BOOL hasLeftButton; 
@property (assign,nonatomic) BOOL hasScopeBar; 
@property (assign,nonatomic) BOOL hasPromptLabel; 
@property (assign,nonatomic) BOOL hasSearchBarBackground; 
@property (assign,nonatomic) BOOL hasSearchBarBackdrop; 
@property (assign,nonatomic) BOOL hasSeparator; 
@property (assign,nonatomic) double backgroundExtension;                                                             //@synthesize backgroundExtension=_backgroundExtension - In the implementation block
@property (assign,nonatomic) BOOL allowSearchFieldShrinkage; 
@property (assign,nonatomic) BOOL searchFieldUsesCustomBackgroundImage; 
@property (assign,nonatomic) BOOL searchFieldEffectivelySupportsDynamicType; 
@property (assign,nonatomic) UIOffset searchFieldBackgroundPositionAdjustment;                                       //@synthesize searchFieldBackgroundPositionAdjustment=_searchFieldBackgroundPositionAdjustment - In the implementation block
@property (assign,nonatomic) double searchBarReadableWidth;                                                          //@synthesize searchBarReadableWidth=_searchBarReadableWidth - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfScopeTitles;                                                 //@synthesize numberOfScopeTitles=_numberOfScopeTitles - In the implementation block
@property (nonatomic,retain) UIFont * searchFieldFont;                                                               //@synthesize searchFieldFont=_searchFieldFont - In the implementation block
@property (nonatomic,readonly) CGRect searchFieldContainerLayoutFrame;                                               //@synthesize searchFieldContainerLayoutFrame=_searchFieldContainerLayoutFrame - In the implementation block
@property (nonatomic,readonly) CGRect scopeBarContainerLayoutFrame;                                                  //@synthesize scopeBarContainerLayoutFrame=_scopeBarContainerLayoutFrame - In the implementation block
@property (nonatomic,readonly) CGRect promptContainerLayoutFrame;                                                    //@synthesize promptContainerLayoutFrame=_promptContainerLayoutFrame - In the implementation block
@property (nonatomic,readonly) CGRect searchBarBackgroundLayoutFrame;                                                //@synthesize searchBarBackgroundLayoutFrame=_searchBarBackgroundLayoutFrame - In the implementation block
@property (nonatomic,readonly) CGRect separatorLayoutFrame;                                                          //@synthesize separatorLayoutFrame=_separatorLayoutFrame - In the implementation block
@property (assign,nonatomic) long long representedLayoutState;                                                       //@synthesize representedLayoutState=_representedLayoutState - In the implementation block
@property (nonatomic,readonly) CGSize heightRange;                                                                   //@synthesize heightRange=_heightRange - In the implementation block
@property (assign,nonatomic) double additionalPaddingForCancelButtonAtLeadingEdge; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSearchFieldBackgroundPositionAdjustment:(UIOffset)arg1 ;
-(void)applyLayout;
-(void)setLayoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback:(/*^block*/id)arg1 ;
-(UIView *)leftButton;
-(UIView *)scopeBar;
-(void)setHasLeftButton:(BOOL)arg1 ;
-(void)updateLayout;
-(BOOL)hasSeparator;
-(UIView *)cancelButton;
-(_UISearchBarSearchContainerLayout *)searchContainerLayout;
-(void)setSearchBarReadableWidth:(double)arg1 ;
-(void)setCancelButton:(UIView *)arg1 ;
-(void)setAllowSearchFieldShrinkage:(BOOL)arg1 ;
-(_UISearchBarPromptContainerView *)promptContainer;
-(void)setHasCancelButton:(BOOL)arg1 ;
-(UIFont *)searchFieldFont;
-(double)additionalPaddingForCancelButtonAtLeadingEdge;
-(void)setSearchField:(UISearchBarTextField *)arg1 ;
-(void)prepareSearchContainerLayout;
-(double)naturalPromptContainerHeight;
-(UISearchBarTextField *)searchField;
-(void)prepareBaseConfigurationForSublayout:(id)arg1 ;
-(BOOL)isProspective;
-(void)setSearchBarBackdrop:(UIView *)arg1 ;
-(void)setHasSeparator:(BOOL)arg1 ;
-(double)layout:(id)arg1 fontScaledValueForValue:(double)arg2 ;
-(_UISearchBarSearchContainerView *)searchFieldContainer;
-(unsigned long long)numberOfScopeTitles;
-(void)containerLayoutWillUpdateLayout:(id)arg1 ;
-(UIOffset)searchFieldBackgroundPositionAdjustment;
-(void)setNumberOfScopeTitles:(unsigned long long)arg1 ;
-(void)setDelegateSearchFieldFrameManipulationBlock:(/*^block*/id)arg1 ;
-(void)setSearchBarBackground:(UIView *)arg1 ;
-(void)setDeleteButton:(UIView *)arg1 ;
-(BOOL)searchFieldUsesCustomBackgroundImage;
-(BOOL)searchFieldEffectivelySupportsDynamicType;
-(UIEdgeInsets)scopeContainerSpecificInsets;
-(void)applyScopeContainerSublayout;
-(void)setSearchFieldContainer:(_UISearchBarSearchContainerView *)arg1 ;
-(void)setUpSearchContainerLayout;
-(CGRect)separatorLayoutFrame;
-(BOOL)hasScopeBar;
-(void)setAdditionalPaddingForCancelButtonAtLeadingEdge:(double)arg1 ;
-(double)searchBarReadableWidth;
-(CGRect)scopeBarContainerLayoutFrame;
-(void)setUpScopeContainerLayout;
-(UIView *)separator;
-(BOOL)hasSearchBarBackdrop;
-(double)naturalTotalHeight;
-(void)setHasSearchBarBackground:(BOOL)arg1 ;
-(void)setSearchFieldUsesCustomBackgroundImage:(BOOL)arg1 ;
-(long long)representedLayoutState;
-(BOOL)hasCancelButton;
-(void)setBackgroundExtension:(double)arg1 ;
-(CGRect)searchBarBackgroundLayoutFrame;
-(double)naturalSearchBarHeight;
-(BOOL)isHostingNavBarTransitionActive;
-(void)setPromptContainer:(_UISearchBarPromptContainerView *)arg1 ;
-(BOOL)allowSearchFieldShrinkage;
-(double)minimumLayoutWidth;
-(UIView *)searchBarBackdrop;
-(_UISearchBarScopeContainerView *)scopeBarContainer;
-(_UISearchBarScopeContainerLayout *)scopeContainerLayout;
-(void)setRepresentedLayoutState:(long long)arg1 ;
-(void)setScopeBar:(UIView *)arg1 ;
-(CGRect)searchFieldContainerLayoutFrame;
-(void)setSeparator:(UIView *)arg1 ;
-(double)naturalSearchFieldHeight;
-(void)setProspective:(BOOL)arg1 ;
-(UIView *)deleteButton;
-(void)setHasSearchBarBackdrop:(BOOL)arg1 ;
-(void)setHostingNavBarTransitionActive:(BOOL)arg1 ;
-(void)setSearchFieldEffectivelySupportsDynamicType:(BOOL)arg1 ;
-(UIView *)searchBarBackground;
-(BOOL)hasPromptLabel;
-(void)setScopeContainerLayout:(_UISearchBarScopeContainerLayout *)arg1 ;
-(double)naturalScopeBarHeight;
-(BOOL)hasSearchBarBackground;
-(void)setLeftButton:(UIView *)arg1 ;
-(void)setHasDeleteButton:(BOOL)arg1 ;
-(void)setSearchFieldFont:(UIFont *)arg1 ;
-(void)prepareScopeContainerLayout;
-(void)setHasScopeBar:(BOOL)arg1 ;
-(void)setSearchContainerLayout:(_UISearchBarSearchContainerLayout *)arg1 ;
-(void)setHasPromptLabel:(BOOL)arg1 ;
-(CGRect)promptContainerLayoutFrame;
-(void)ensureCorrectContainerViewOrdering;
-(void)setScopeBarContainer:(_UISearchBarScopeContainerView *)arg1 ;
-(double)backgroundExtension;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)prepareSublayouts;
-(BOOL)hasDeleteButton;
-(BOOL)hasLeftButton;
-(void)cleanUpLayout;
-(CGSize)heightRange;
@end

