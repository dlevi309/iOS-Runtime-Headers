/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol TUIButtonBarViewProvider;
@class NSMutableArray, UIBarButtonItemGroup, _UIButtonBarButtonVisualProvider, NSArray;

@interface TUIAssistantButtonBarGroupView : UIView {

	NSMutableArray* _visibleButtons;
	BOOL _collapsed;
	UIBarButtonItemGroup* _barButtonItemGroup;
	double _itemSpacing;
	id<TUIButtonBarViewProvider> _buttonProvider;
	_UIButtonBarButtonVisualProvider* _visualProvider;

}

@property (assign,nonatomic,__weak) id<TUIButtonBarViewProvider> buttonProvider;              //@synthesize buttonProvider=_buttonProvider - In the implementation block
@property (nonatomic,retain) _UIButtonBarButtonVisualProvider * visualProvider;               //@synthesize visualProvider=_visualProvider - In the implementation block
@property (nonatomic,retain) UIBarButtonItemGroup * barButtonItemGroup;                       //@synthesize barButtonItemGroup=_barButtonItemGroup - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;                               //@synthesize collapsed=_collapsed - In the implementation block
@property (nonatomic,readonly) NSArray * visibleButtons; 
@property (assign,nonatomic) double itemSpacing;                                              //@synthesize itemSpacing=_itemSpacing - In the implementation block
@property (nonatomic,readonly) BOOL containsFlexibleItems; 
-(CGSize)intrinsicContentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(_UIButtonBarButtonVisualProvider *)visualProvider;
-(void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2 ;
-(void)_itemStandardViewNeedsUpdate:(id)arg1 ;
-(void)_itemDidChangeWidth:(id)arg1 ;
-(void)_itemDidChangeSelectionState:(id)arg1 ;
-(void)_itemDidChangeHiddenState:(id)arg1 ;
-(void)_itemDidChangeEnabledState:(id)arg1 ;
-(void)setVisualProvider:(_UIButtonBarButtonVisualProvider *)arg1 ;
-(BOOL)isCollapsed;
-(void)setCollapsed:(BOOL)arg1 ;
-(void)setItemSpacing:(double)arg1 ;
-(double)itemSpacing;
-(id)_visibleItems;
-(NSArray *)visibleButtons;
-(id)initWithBarButtonItemGroup:(id)arg1 visualProvider:(id)arg2 buttonProvider:(id)arg3 ;
-(BOOL)_canBeCollapsed;
-(void)setBarButtonItemGroup:(UIBarButtonItemGroup *)arg1 ;
-(id)_visibleItemsAllowingCollapse:(BOOL)arg1 ;
-(BOOL)containsFlexibleItems;
-(CGSize)_preferredSizeForItems:(id)arg1 fittingWidth:(double)arg2 ;
-(void)_ensureVisibleButtonsForVisibleItems;
-(id)_buttonBarItemViewForBarButtonItem:(id)arg1 ;
-(UIBarButtonItemGroup *)barButtonItemGroup;
-(id<TUIButtonBarViewProvider>)buttonProvider;
-(void)setButtonProvider:(id<TUIButtonBarViewProvider>)arg1 ;
@end

