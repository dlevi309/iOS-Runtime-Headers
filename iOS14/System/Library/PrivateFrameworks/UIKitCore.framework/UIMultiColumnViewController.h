/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol UIMultiColumnViewControllerDelegate;
@class UIBarButtonItem, NSMutableArray, NSArray, UIImage;

@interface UIMultiColumnViewController : UIViewController {

	unsigned long long _lastColumnCount;
	unsigned long long _animatingTargetColumnCount;
	UIBarButtonItem* _showSecondColumnBarButtonItem;
	UIBarButtonItem* _hideSecondColumnBarButtonItem;
	struct {
		unsigned updatingNavControllerChildren : 1;
		unsigned animatingItem1LeftBarButton : 1;
		unsigned lastColumnCountIsValid : 1;
		unsigned animatingSplitToWidth : 1;
	}  _mcvcFlags;
	NSMutableArray* _borderViews;
	CGRect _lastFrameInWindow;
	CGSize _containerSizeAtLastUpdate;
	NSArray* _possibleStatesAtLastUpdate;
	id<UIMultiColumnViewControllerDelegate> _delegate;
	NSArray* _viewControllers;
	NSArray* _navControllers;
	double _keyboardInset;
	NSArray* _columnWidths;
	UIImage* __columnToggleButtonImage;

}

@property (nonatomic,retain) NSArray * viewControllers;                                                           //@synthesize viewControllers=_viewControllers - In the implementation block
@property (nonatomic,retain) NSArray * navControllers;                                                            //@synthesize navControllers=_navControllers - In the implementation block
@property (nonatomic,retain) NSArray * columnWidths;                                                              //@synthesize columnWidths=_columnWidths - In the implementation block
@property (assign,nonatomic) double keyboardInset;                                                                //@synthesize keyboardInset=_keyboardInset - In the implementation block
@property (setter=_setColumnToggleButtonImage:,nonatomic,retain) UIImage * _columnToggleButtonImage;              //@synthesize _columnToggleButtonImage=__columnToggleButtonImage - In the implementation block
@property (assign,nonatomic,__weak) id<UIMultiColumnViewControllerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long columnCount; 
-(void)viewWillLayoutSubviews;
-(void)showViewController:(id)arg1 sender:(id)arg2 ;
-(void)_collapseSecondaryViewController:(id)arg1 forSplitViewController:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)setViewControllers:(NSArray *)arg1 ;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3 ;
-(NSArray *)viewControllers;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(id<UIMultiColumnViewControllerDelegate>)delegate;
-(id)_splitViewControllerImageForDisplayModeButtonToShowPrimary:(id)arg1 ;
-(void)_splitViewControllerWillCollapseOntoPrimaryViewController:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)separateSecondaryViewControllerForSplitViewController:(id)arg1 ;
-(id)_liveVCs;
-(id)initWithNavController:(id)arg1 viewControllers:(id)arg2 columnWidths:(id)arg3 ;
-(BOOL)_allowMultipleColumnsForPossibleStates:(id)arg1 containerSize:(CGSize)arg2 ;
-(void)_willShowColumnCount:(unsigned long long)arg1 ;
-(UIImage *)_columnToggleButtonImage;
-(id)initWithNavController:(id)arg1 viewControllers:(id)arg2 ;
-(void)_navigationControllerChangedViewControllers:(id)arg1 ;
-(unsigned long long)_columnCountForPossibleStates:(id)arg1 containerSize:(CGSize)arg2 ;
-(double)_unsafeAreaPaddingForFirstVisibleColumn;
-(void)_adjustNonOverlayScrollViewsForKeyboardInfo:(id)arg1 ;
-(void)_moveViewControllersForColumnCount:(unsigned long long)arg1 ;
-(id)_sideBarImage;
-(void)_updateButtonsForColumnCount:(unsigned long long)arg1 animatingChange:(BOOL)arg2 ;
-(id)_contentSizesForColumnWidths:(id)arg1 ;
-(void)setNavControllers:(NSArray *)arg1 ;
-(BOOL)sizeMightAllowMultipleColumns:(CGSize)arg1 ;
-(void)_showSecondColumn:(id)arg1 ;
-(void)_setColumnToggleButtonImage:(id)arg1 ;
-(id)_secondColumnBarButtonItem:(long long)arg1 createIfNecessary:(BOOL)arg2 ;
-(id)_removeSecondColumnBarButton:(long long)arg1 fromNavItem:(id)arg2 ;
-(id)_addSecondColumnBarButton:(long long)arg1 toNavItem:(id)arg2 ;
-(void)requestColumnCount:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_splitViewControllerDidUpdate:(id)arg1 withSize:(CGSize)arg2 ;
-(void)setDelegate:(id<UIMultiColumnViewControllerDelegate>)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)description;
-(double)keyboardInset;
-(unsigned long long)columnCount;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(NSArray *)columnWidths;
-(NSArray *)navControllers;
-(void)_setAllowNestedNavigationControllers:(BOOL)arg1 ;
-(BOOL)_canShowColumnIndex:(unsigned long long)arg1 ;
-(void)setColumnWidths:(NSArray *)arg1 ;
-(void)setKeyboardInset:(double)arg1 ;
-(id)_possibleContentSizes;
-(id)_effectiveColumnWidths;
-(id)_preferredContentSizes;
-(id)title;
-(id)_navigationBarForDragAffordance;
-(void)dealloc;
-(void)_hideSecondColumn:(id)arg1 ;
@end

