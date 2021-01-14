/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMinimumInterItemSpace:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)buttonContainer;
-(id<TUIAssistantButtonBarViewDelegate>)delegate;
-(void)setBounds:(CGRect)arg1 ;
-(void)setAppearanceDelegate:(id<_UIButtonBarAppearanceDelegate>)arg1 ;
-(id<_UIButtonBarAppearanceDelegate>)appearanceDelegate;
-(void)setDelegate:(id<TUIAssistantButtonBarViewDelegate>)arg1 ;
-(void)setVisualProvider:(_UIButtonBarButtonVisualProvider *)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)setButtonContainer:(UIView *)arg1 ;
-(NSMutableOrderedSet *)groupViews;
-(void)configureButtonBarItemView:(id)arg1 forItem:(id)arg2 group:(id)arg3 ;
-(CGSize)preferredSizeForButtonBarItem:(id)arg1 ;
-(void)preferredSizeDidChangeForButtonBarItem:(id)arg1 ;
-(void)setEffectiveInterItemSpacing:(double)arg1 ;
-(void)setButtonGroups:(NSArray *)arg1 ;
-(id)_visibleGroups;
-(id)_groupViewForBarButtonItemGroup:(id)arg1 ;
-(void)_updateBarButtonItemHiddenState;
-(CGSize)_totalGroupSizeThatFits:(CGSize)arg1 ;
-(double)_interItemSpacingThatFits:(CGSize)arg1 forGroupSize:(CGSize)arg2 ;
-(UIEdgeInsets)_insetsForHorizontalMargin;
-(id)_visibleGroupViews;
-(long long)buttonAlignment;
-(id)_uncollapsedGroupViews;
-(id)_allVisibleBarItemViews;
-(void)_collapseGroupsIfNecessaryForWidth:(double)arg1 ;
-(void)validateButtonGroups;
-(void)_uncollapseAllGroupsForNewSizeIfNecessary:(CGSize)arg1 ;
-(BOOL)_containsFlexibleGroupViews;
-(id)_itemViewForSender:(id)arg1 ;
-(NSArray *)buttonGroups;
-(CGSize)_preferredTitleSizeForBarButtonItem:(id)arg1 ;
-(void)_didTapButtonBarButton:(id)arg1 withEvent:(id)arg2 ;
-(void)_checkBarButtonItemState:(id)arg1 ;
-(void)setButtonAlignment:(long long)arg1 ;
-(BOOL)constrainedHorizontally;
-(void)setConstrainedHorizontally:(BOOL)arg1 ;
-(double)horizontalMargins;
-(void)setHorizontalMargins:(double)arg1 ;
-(double)effectiveInterItemSpacing;
-(void)setGroupViews:(NSMutableOrderedSet *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)minimumInterItemSpace;
-(double)minimumInterGroupSpace;
-(_UIButtonBarButtonVisualProvider *)visualProvider;
-(void)setMinimumInterGroupSpace:(double)arg1 ;
@end

