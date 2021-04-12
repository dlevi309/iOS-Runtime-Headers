/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TUIButtonBarViewProvider.h>

@protocol TUIAssistantButtonBarViewDelegate, _UIButtonBarAppearanceDelegate;
@class NSArray, _UIButtonBarButtonVisualProvider, UIView, NSMutableOrderedSet, NSString;

@interface TUIAssistantButtonBarView : UIView <TUIButtonBarViewProvider> {

	BOOL _constrainedHorizontally;
	NSArray* _buttonGroups;
	_UIButtonBarButtonVisualProvider* _visualProvider;
	double _minimumInterItemSpace;
	double _minimumInterGroupSpace;
	long long _buttonAlignment;
	id<TUIAssistantButtonBarViewDelegate> _delegate;
	double _horizontalMargins;
	id<_UIButtonBarAppearanceDelegate> _appearanceDelegate;
	UIView* _buttonContainer;
	double _effectiveInterItemSpacing;
	NSMutableOrderedSet* _groupViews;

}

@property (assign,nonatomic,__weak) id<_UIButtonBarAppearanceDelegate> appearanceDelegate;              //@synthesize appearanceDelegate=_appearanceDelegate - In the implementation block
@property (nonatomic,retain) UIView * buttonContainer;                                                  //@synthesize buttonContainer=_buttonContainer - In the implementation block
@property (assign,nonatomic) double effectiveInterItemSpacing;                                          //@synthesize effectiveInterItemSpacing=_effectiveInterItemSpacing - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * groupViews;                                          //@synthesize groupViews=_groupViews - In the implementation block
@property (nonatomic,retain) NSArray * buttonGroups;                                                    //@synthesize buttonGroups=_buttonGroups - In the implementation block
@property (nonatomic,retain) _UIButtonBarButtonVisualProvider * visualProvider;                         //@synthesize visualProvider=_visualProvider - In the implementation block
@property (assign,nonatomic) double minimumInterItemSpace;                                              //@synthesize minimumInterItemSpace=_minimumInterItemSpace - In the implementation block
@property (assign,nonatomic) double minimumInterGroupSpace;                                             //@synthesize minimumInterGroupSpace=_minimumInterGroupSpace - In the implementation block
@property (assign,nonatomic) long long buttonAlignment;                                                 //@synthesize buttonAlignment=_buttonAlignment - In the implementation block
@property (assign,nonatomic) BOOL constrainedHorizontally;                                              //@synthesize constrainedHorizontally=_constrainedHorizontally - In the implementation block
@property (assign,nonatomic,__weak) id<TUIAssistantButtonBarViewDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double horizontalMargins;                                                  //@synthesize horizontalMargins=_horizontalMargins - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TUIAssistantButtonBarViewDelegate>)delegate;
-(void)setDelegate:(id<TUIAssistantButtonBarViewDelegate>)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(_UIButtonBarButtonVisualProvider *)visualProvider;
-(void)setMinimumInterItemSpace:(double)arg1 ;
-(double)minimumInterItemSpace;
-(void)setVisualProvider:(_UIButtonBarButtonVisualProvider *)arg1 ;
-(void)setMinimumInterGroupSpace:(double)arg1 ;
-(double)minimumInterGroupSpace;
-(void)setAppearanceDelegate:(id<_UIButtonBarAppearanceDelegate>)arg1 ;
-(id<_UIButtonBarAppearanceDelegate>)appearanceDelegate;
-(UIView *)buttonContainer;
-(void)setButtonContainer:(UIView *)arg1 ;
-(void)configureButtonBarItemView:(id)arg1 forItem:(id)arg2 group:(id)arg3 ;
-(CGSize)preferredSizeForButtonBarItem:(id)arg1 ;
-(void)preferredSizeDidChangeForButtonBarItem:(id)arg1 ;
-(void)setEffectiveInterItemSpacing:(double)arg1 ;
-(void)setButtonGroups:(NSArray *)arg1 ;
-(id)_groupViewForBarButtonItemGroup:(id)arg1 ;
-(void)_updateBarButtonItemHiddenState;
-(CGSize)_totalGroupSizeThatFits:(CGSize)arg1 ;
-(double)_interItemSpacingThatFits:(CGSize)arg1 forGroupSize:(CGSize)arg2 ;
-(UIEdgeInsets)_insetsForHorizontalMargin;
-(id)_visibleGroupViews;
-(id)_visibleGroups;
-(id)_uncollapsedGroupViews;
-(id)_allVisibleBarItemViews;
-(void)_collapseGroupsIfNecessaryForWidth:(double)arg1 ;
-(void)_uncollapseAllGroupsForNewSizeIfNecessary:(CGSize)arg1 ;
-(BOOL)_containsFlexibleGroupViews;
-(void)validateButtonGroups;
-(CGSize)_preferredTitleSizeForBarButtonItem:(id)arg1 ;
-(id)_itemViewForSender:(id)arg1 ;
-(void)_didTapButtonBarButton:(id)arg1 withEvent:(id)arg2 ;
-(NSArray *)buttonGroups;
-(long long)buttonAlignment;
-(void)setButtonAlignment:(long long)arg1 ;
-(BOOL)constrainedHorizontally;
-(void)setConstrainedHorizontally:(BOOL)arg1 ;
-(double)horizontalMargins;
-(void)setHorizontalMargins:(double)arg1 ;
-(double)effectiveInterItemSpacing;
-(NSMutableOrderedSet *)groupViews;
-(void)setGroupViews:(NSMutableOrderedSet *)arg1 ;
@end

