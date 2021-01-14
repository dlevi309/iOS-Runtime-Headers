/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed; 
@property (nonatomic,readonly) NSArray * visibleButtons; 
@property (assign,nonatomic) double itemSpacing;                                              //@synthesize itemSpacing=_itemSpacing - In the implementation block
@property (nonatomic,readonly) BOOL containsFlexibleItems; 
-(BOOL)isCollapsed;
-(void)_itemDidChangeSelectionState:(id)arg1 ;
-(void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2 ;
-(void)_itemDidChangeWidth:(id)arg1 ;
-(void)_itemStandardViewNeedsUpdate:(id)arg1 ;
-(void)_itemDidChangeHiddenState:(id)arg1 ;
-(void)_itemDidChangeEnabledState:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(double)itemSpacing;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_visibleItemsAllowingCollapse:(BOOL)arg1 ;
-(NSArray *)visibleButtons;
-(id)initWithBarButtonItemGroup:(id)arg1 visualProvider:(id)arg2 buttonProvider:(id)arg3 ;
-(BOOL)_canBeCollapsed;
-(void)setBarButtonItemGroup:(UIBarButtonItemGroup *)arg1 ;
-(void)setVisualProvider:(_UIButtonBarButtonVisualProvider *)arg1 ;
-(BOOL)containsFlexibleItems;
-(CGSize)_preferredSizeForItems:(id)arg1 fittingWidth:(double)arg2 ;
-(void)_ensureVisibleButtonsForVisibleItems;
-(id)_buttonBarItemViewForBarButtonItem:(id)arg1 ;
-(UIBarButtonItemGroup *)barButtonItemGroup;
-(id<TUIButtonBarViewProvider>)buttonProvider;
-(void)setButtonProvider:(id<TUIButtonBarViewProvider>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setItemSpacing:(double)arg1 ;
-(id)_visibleItems;
-(void)setCollapsed:(BOOL)arg1 ;
-(_UIButtonBarButtonVisualProvider *)visualProvider;
@end

