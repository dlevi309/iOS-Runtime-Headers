/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPageViewControllerDataSource.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <libobjc.A.dylib/SKUISlideshowItemViewControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate;
@class SKUIClientContext, UIPageViewController, NSOperationQueue, NSMutableDictionary, NSString;

@interface SKUISlideshowViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, SKUISlideshowItemViewControllerDelegate, UIViewControllerTransitioningDelegate> {

	SKUIClientContext* _clientContext;
	UIPageViewController* _pageViewController;
	NSOperationQueue* _remoteLoadQueue;
	NSMutableDictionary* _itemViewControllersCache;
	BOOL _overlayVisible;
	BOOL _shouldCancelDelayedOverlayVisibilityChange;
	BOOL _overlayVisibilityWillChangeWithDelay;
	BOOL _lockOverlayControlsVisible;
	SCD_Struct_SK29 _savedStatusBarState;
	id<SKUISlideshowViewControllerDataSource> _dataSource;
	id<SKUISlideshowViewControllerDelegate> _delegate;
	long long _currentIndex;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                        //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUISlideshowViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SKUISlideshowViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long currentIndex;                                                   //@synthesize currentIndex=_currentIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SKUISlideshowViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SKUISlideshowViewControllerDelegate>)arg1 ;
-(id<SKUISlideshowViewControllerDataSource>)dataSource;
-(void)setDataSource:(id<SKUISlideshowViewControllerDataSource>)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)reloadData;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2 ;
-(void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(id)animatorForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animatorForDismissedController:(id)arg1 ;
-(long long)currentIndex;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)_doneButtonTapped:(id)arg1 ;
-(void)setCurrentIndex:(long long)arg1 ;
-(void)slideshowItemViewControllerDidBeginPinchGesture:(id)arg1 ;
-(void)slideshowItemViewControllerDidDismissWithPinchGesture:(id)arg1 ratio:(double)arg2 ;
-(id)currentItemViewController;
-(id)_itemViewControllerForIndex:(long long)arg1 ;
-(void)_updateCurrentIndex;
-(void)_contentViewTapped:(id)arg1 ;
-(void)_saveStatusBarAppearanceState;
-(void)_restoreStatusBarAppearanceState;
-(void)_setOverlayVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_fadeOutOverlayAfterDelay:(unsigned long long)arg1 ;
-(void)_updateTitleWithIndex:(long long)arg1 ;
-(void)_toggleFadeOverlay;
@end
