/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIDimmingViewDelegate.h>

@class UIInputSwitcherTableView, UIInputSwitcherShadowView, UIInputSwitcherSelectionExtraView, NSTimer, UIDimmingView, UIView, UIKBKeyView, UISelectionFeedbackGenerator, UIKBTree, UIKeyboardLayoutStar, NSString;

@interface UIKeyboardMenuView : UIView <UITableViewDataSource, UITableViewDelegate, UIDimmingViewDelegate> {

	UIInputSwitcherTableView* m_table;
	UIInputSwitcherShadowView* m_shadowView;
	UIInputSwitcherSelectionExtraView* m_selExtraView;
	CGRect m_referenceRect;
	double m_pointerOffset;
	BOOL m_scrollable;
	BOOL m_startAutoscroll;
	BOOL m_scrolling;
	BOOL m_shouldFade;
	CGPoint m_point;
	double m_scrollStartTime;
	int m_scrollDirection;
	NSTimer* m_scrollTimer;
	unsigned long long m_visibleRows;
	unsigned long long m_firstVisibleRow;
	long long m_mode;
	UIDimmingView* m_dimmingView;
	UIView* m_inputView;
	CGPoint m_referenceLocation;
	UIKBKeyView* m_backgroundKeyView;
	double m_timeDismissed;
	UISelectionFeedbackGenerator* m_slideBehavior;
	BOOL _usesStraightLeftEdge;
	BOOL _usesDarkTheme;
	BOOL _showsSingleCellOnly;
	long long _indexForSingleCell;
	UIKBTree* _referenceKey;
	UIKeyboardLayoutStar* _layout;

}

@property (assign,nonatomic) long long mode; 
@property (readonly) BOOL usesTable; 
@property (assign,nonatomic) BOOL usesStraightLeftEdge;                  //@synthesize usesStraightLeftEdge=_usesStraightLeftEdge - In the implementation block
@property (assign,nonatomic) BOOL usesDarkTheme;                         //@synthesize usesDarkTheme=_usesDarkTheme - In the implementation block
@property (assign,nonatomic) BOOL showsSingleCellOnly;                   //@synthesize showsSingleCellOnly=_showsSingleCellOnly - In the implementation block
@property (assign,nonatomic) long long indexForSingleCell;               //@synthesize indexForSingleCell=_indexForSingleCell - In the implementation block
@property (assign,nonatomic) UIKBTree * referenceKey;                    //@synthesize referenceKey=_referenceKey - In the implementation block
@property (assign,nonatomic) UIKeyboardLayoutStar * layout;              //@synthesize layout=_layout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)clear;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(UIKeyboardLayoutStar *)layout;
-(void)setLayout:(UIKeyboardLayoutStar *)arg1 ;
-(BOOL)isVisible;
-(id)table;
-(void)removeFromSuperview;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)containerView;
-(CGSize)preferredSize;
-(id)font;
-(void)show;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)dimmingViewWasTapped:(id)arg1 ;
-(id)inputView;
-(void)setNeedsDisplay;
-(void)setRenderConfig:(id)arg1 ;
-(unsigned long long)numberOfItems;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)dimmingView;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)hide;
-(void)fade;
-(void)fadeWithDelay:(double)arg1 ;
-(void)setShowsSingleCellOnly:(BOOL)arg1 ;
-(void)showAsHUD;
-(BOOL)usesStraightLeftEdge;
-(void)setUsesDarkTheme:(BOOL)arg1 ;
-(void)updateSelectionWithPoint:(CGPoint)arg1 ;
-(void)setUsesStraightLeftEdge:(BOOL)arg1 ;
-(BOOL)usesDarkTheme;
-(id)subtitleFont;
-(unsigned long long)defaultSelectedIndex;
-(BOOL)showsSingleCellOnly;
-(long long)indexForSingleCell;
-(BOOL)shouldShowSelectionExtraViewForIndexPath:(id)arg1 ;
-(void)setIndexForSingleCell:(long long)arg1 ;
-(void)highlightRow:(unsigned long long)arg1 ;
-(void)returnToKeyboardIfNeeded;
-(UIKBTree *)referenceKey;
-(id)indexPathForInputSwitcherCellIncludingInteractiveInsetsAtPoint:(CGPoint)arg1 ;
-(BOOL)launchedFromKeyboard;
-(void)willFadeForSelectionAtIndex:(unsigned long long)arg1 ;
-(void)fadeWithDelay:(double)arg1 forSelectionAtIndex:(unsigned long long)arg2 ;
-(void)showAsPopupForKey:(id)arg1 inLayout:(id)arg2 ;
-(id)subtitleForItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)usesTable;
-(void)customizeCell:(id)arg1 forItemAtIndex:(unsigned long long)arg2 ;
-(void)didSelectItemAtIndex:(unsigned long long)arg1 ;
-(void)showAsHUDFromLocation:(CGPoint)arg1 withInputView:(id)arg2 touchBegan:(double)arg3 ;
-(CGRect)interactiveBounds;
-(void)selectItemAtPoint:(CGPoint)arg1 ;
-(BOOL)shouldSelectItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)shouldShow;
-(void)didShow;
-(void)willFade;
-(id)titleForItemAtIndex:(unsigned long long)arg1 ;
-(id)localizedTitleForItemAtIndex:(unsigned long long)arg1 ;
-(id)fontForItemAtIndex:(unsigned long long)arg1 ;
-(id)subtitleFontForItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)usesDeviceLanguageForItemAtIndex:(unsigned long long)arg1 ;
-(void)setKeyboardDimmed:(BOOL)arg1 ;
-(BOOL)centerPopUpOverKey;
-(void)performShowAnimation;
-(void)willShow;
-(BOOL)usesDimmingView;
-(id)maskForShadowViewBlurredBackground;
-(void)applicationWillSuspend:(id)arg1 ;
-(BOOL)usesShadowView;
-(void)setupBackgroundKeyViewWithSize:(CGSize)arg1 ;
-(void)insertSelExtraView;
-(id)_renderConfig;
-(unsigned long long)_internationalKeyRoundedCornerInLayout:(id)arg1 ;
-(void)setReferenceKey:(UIKBTree *)arg1 ;
-(void)_delayedFade;
-(void)stopAnyAutoscrolling;
-(void)setNeedsDisplayForCell:(id)arg1 ;
-(void)setNeedsDisplayForTopBottomCells;
-(void)endScrolling:(id)arg1 ;
-(void)autoscrollTimerFired:(id)arg1 ;
-(void)setHighlightForRowAtIndexPath:(id)arg1 highlight:(BOOL)arg2 ;
-(void)setupShadowViewWithSize:(CGSize)arg1 ;
-(double)minYOfLastTableCellForSelectionExtraView;
-(CGRect)popupRect;
@end

