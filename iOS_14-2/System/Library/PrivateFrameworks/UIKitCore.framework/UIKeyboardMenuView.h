/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _showingCapsLockSwitcher;
	long long _indexForSelectedFastSwitchMode;
	long long _indexForUnselectedFastSwitchMode;
	UIKBTree* _referenceKey;
	UIKeyboardLayoutStar* _layout;

}

@property (assign,nonatomic) long long mode; 
@property (readonly) BOOL usesTable; 
@property (assign,nonatomic) BOOL usesStraightLeftEdge;                               //@synthesize usesStraightLeftEdge=_usesStraightLeftEdge - In the implementation block
@property (assign,nonatomic) BOOL usesDarkTheme;                                      //@synthesize usesDarkTheme=_usesDarkTheme - In the implementation block
@property (assign,nonatomic) BOOL showingCapsLockSwitcher;                            //@synthesize showingCapsLockSwitcher=_showingCapsLockSwitcher - In the implementation block
@property (assign,nonatomic) long long indexForSelectedFastSwitchMode;                //@synthesize indexForSelectedFastSwitchMode=_indexForSelectedFastSwitchMode - In the implementation block
@property (assign,nonatomic) long long indexForUnselectedFastSwitchMode;              //@synthesize indexForUnselectedFastSwitchMode=_indexForUnselectedFastSwitchMode - In the implementation block
@property (assign,nonatomic) UIKBTree * referenceKey;                                 //@synthesize referenceKey=_referenceKey - In the implementation block
@property (assign,nonatomic) UIKeyboardLayoutStar * layout;                           //@synthesize layout=_layout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dimmingViewWasTapped:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)clear;
-(void)fade;
-(id)table;
-(long long)mode;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)usesDarkTheme;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)didShow;
-(void)removeFromSuperview;
-(id)indexPathForInputSwitcherCellIncludingInteractiveInsetsAtPoint:(CGPoint)arg1 ;
-(unsigned long long)numberOfItems;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setNeedsDisplay;
-(void)applicationWillSuspend:(id)arg1 ;
-(CGSize)preferredSize;
-(void)show;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)inputView;
-(void)willFade;
-(void)willShow;
-(void)setMode:(long long)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)showAsHUD;
-(id)containerView;
-(void)setFrame:(CGRect)arg1 ;
-(void)fadeWithDelay:(double)arg1 ;
-(BOOL)usesTable;
-(CGRect)popupRect;
-(BOOL)shouldShow;
-(BOOL)isVisible;
-(id)subtitleFont;
-(void)hide;
-(void)setShowingCapsLockSwitcher:(BOOL)arg1 ;
-(BOOL)usesStraightLeftEdge;
-(void)setUsesDarkTheme:(BOOL)arg1 ;
-(void)setUsesStraightLeftEdge:(BOOL)arg1 ;
-(void)highlightRow:(unsigned long long)arg1 ;
-(unsigned long long)defaultSelectedIndex;
-(BOOL)showingCapsLockSwitcher;
-(long long)indexForSelectedFastSwitchMode;
-(BOOL)shouldShowSelectionExtraViewForIndexPath:(id)arg1 ;
-(BOOL)launchedFromKeyboard;
-(void)setIndexForSelectedFastSwitchMode:(long long)arg1 ;
-(void)setIndexForUnselectedFastSwitchMode:(long long)arg1 ;
-(void)returnToKeyboardIfNeeded;
-(void)willFadeForSelectionAtIndex:(unsigned long long)arg1 ;
-(void)fadeWithDelay:(double)arg1 forSelectionAtIndex:(unsigned long long)arg2 ;
-(void)showAsPopupForKey:(id)arg1 inLayout:(id)arg2 ;
-(id)subtitleForItemAtIndex:(unsigned long long)arg1 ;
-(void)customizeCell:(id)arg1 forItemAtIndex:(unsigned long long)arg2 ;
-(long long)indexForUnselectedFastSwitchMode;
-(void)didSelectItemAtIndex:(unsigned long long)arg1 ;
-(CGRect)interactiveBounds;
-(void)showAsHUDFromLocation:(CGPoint)arg1 withInputView:(id)arg2 touchBegan:(double)arg3 ;
-(void)selectItemAtPoint:(CGPoint)arg1 ;
-(BOOL)shouldSelectItemAtIndex:(unsigned long long)arg1 ;
-(id)titleForItemAtIndex:(unsigned long long)arg1 ;
-(id)localizedTitleForItemAtIndex:(unsigned long long)arg1 ;
-(id)fontForItemAtIndex:(unsigned long long)arg1 ;
-(id)subtitleFontForItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)usesDeviceLanguageForItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)usesDimmingView;
-(void)setKeyboardDimmed:(BOOL)arg1 ;
-(BOOL)centerPopUpOverKey;
-(void)performShowAnimation;
-(id)maskForShadowViewBlurredBackground;
-(void)_delayedFade;
-(BOOL)usesShadowView;
-(void)setupBackgroundKeyViewWithSize:(CGSize)arg1 ;
-(void)insertSelExtraView;
-(void)setReferenceKey:(UIKBTree *)arg1 ;
-(unsigned long long)_internationalKeyRoundedCornerInLayout:(id)arg1 ;
-(void)stopAnyAutoscrolling;
-(void)setNeedsDisplayForCell:(id)arg1 ;
-(void)setNeedsDisplayForTopBottomCells;
-(void)autoscrollTimerFired:(id)arg1 ;
-(void)setHighlightForRowAtIndexPath:(id)arg1 highlight:(BOOL)arg2 ;
-(void)setupShadowViewWithSize:(CGSize)arg1 ;
-(double)minYOfLastTableCellForSelectionExtraView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)updateSelectionWithPoint:(CGPoint)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setRenderConfig:(id)arg1 ;
-(id)dimmingView;
-(id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setLayout:(UIKeyboardLayoutStar *)arg1 ;
-(UIKBTree *)referenceKey;
-(id)_renderConfig;
-(void)dealloc;
-(id)font;
-(void)endScrolling:(id)arg1 ;
-(UIKeyboardLayoutStar *)layout;
@end

