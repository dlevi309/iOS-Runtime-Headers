/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKitCore/_UIKeyboardAutoRespondingScrollViewController.h>
#import <UIKit/UICollectionViewFocusDelegate_Legacy.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Deprecated.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@class UICollectionViewLayout, UICollectionView, UILongPressGestureRecognizer, UIAutoRespondingScrollViewControllerKeyboardSupport, NSString;

@interface UICollectionViewController : UIViewController <_UIKeyboardAutoRespondingScrollViewController, UICollectionViewFocusDelegate_Legacy, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Deprecated, UICollectionViewDelegate, UICollectionViewDataSource> {

	UICollectionViewLayout* _layout;
	UICollectionView* _collectionView;
	UILongPressGestureRecognizer* _reorderingGesture;
	UIAutoRespondingScrollViewControllerKeyboardSupport* _keyboardSupport;
	struct {
		unsigned clearsSelectionOnViewWillAppear : 1;
		unsigned useLayoutToLayoutNavigationTransitions : 1;
		unsigned installsStandardReorderingGesture : 1;
	}  _collectionViewControllerFlags;

}

@property (nonatomic,retain) UICollectionView * collectionView; 
@property (assign,nonatomic) BOOL clearsSelectionOnViewWillAppear; 
@property (assign,nonatomic) BOOL useLayoutToLayoutNavigationTransitions; 
@property (nonatomic,readonly) UICollectionViewLayout * collectionViewLayout; 
@property (assign,nonatomic) BOOL installsStandardGestureForInteractiveMovement; 
@property (getter=_scrollView,nonatomic,retain,readonly) UIScrollView*<_UIKeyboardAutoRespondingScrollView> scrollView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(id)preferredFocusedView;
-(id)_scrollView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)willPresentPreviewViewController:(id)arg1 forPosition:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(id)_animatorForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(id)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_setUseLayoutToLayoutNavigationTransitions:(BOOL)arg1 withCheck:(BOOL)arg2 ;
-(id)_newCollectionViewWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)setInstallsStandardGestureForInteractiveMovement:(BOOL)arg1 ;
-(void)willPresentPreviewViewController:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(UICollectionView *)collectionView;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)dataSource;
-(void)setView:(id)arg1 ;
-(id)_wrappingView;
-(void)viewWillUnload;
-(id)_uiCollectionView;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)useLayoutToLayoutNavigationTransitions;
-(void)_updateCollectionViewLayoutAndDelegate:(id)arg1 ;
-(void)_installReorderingGestureIfNecessary;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_shouldRespondToPreviewingMethods;
-(id)previewViewControllerForLocation:(CGPoint)arg1 inSourceView:(id)arg2 ;
-(id)previewViewControllerForItemAtIndexPath:(id)arg1 ;
-(void)_handleReorderingGesture:(id)arg1 ;
-(void)setClearsSelectionOnViewWillAppear:(BOOL)arg1 ;
-(BOOL)clearsSelectionOnViewWillAppear;
-(void)_setSharedCollectionView:(id)arg1 ;
-(BOOL)shouldCrossFadeNavigationBar;
-(BOOL)shouldCrossFadeBottomBars;
-(void)setUseLayoutToLayoutNavigationTransitions:(BOOL)arg1 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(BOOL)installsStandardGestureForInteractiveMovement;
-(void)__viewDidAppear:(BOOL)arg1 ;
-(UICollectionViewLayout *)collectionViewLayout;
-(void)loadView;
-(id)contentScrollView;
-(void)__viewWillAppear:(BOOL)arg1 ;
-(void)_clearSharedView;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

