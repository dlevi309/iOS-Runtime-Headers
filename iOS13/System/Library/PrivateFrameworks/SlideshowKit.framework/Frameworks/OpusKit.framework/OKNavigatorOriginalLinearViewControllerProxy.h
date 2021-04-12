/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKNavigatorViewController.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <UIKit/UIPageViewControllerDataSource.h>

@class UIPageViewController, NSArray, NSString;

@interface OKNavigatorOriginalLinearViewControllerProxy : OKNavigatorViewController <UIPageViewControllerDelegate, UIPageViewControllerDataSource> {

	UIPageViewController* _pagesViewController;
	NSArray* _orderedPagesNames;
	long long _transitionStyle;
	long long _navigationOrientation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(void)commonInit;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)prepareForDisplay;
-(void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2 ;
-(void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(BOOL)prepareForWarmup;
-(BOOL)prepareForUnload;
-(void)applySettings;
-(void)navigateToPageWithName:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)reloadPagesViewController;
-(void)gotoNext:(id)arg1 ;
-(void)gotoPrevious:(id)arg1 ;
-(void)prepareAdjacentPageViewControllers;
-(void)updatePagesViewController;
-(id)nameForPageBeforePage:(id)arg1 ;
-(id)nameForPageAfterPage:(id)arg1 ;
-(void)setSettingTransition:(unsigned long long)arg1 ;
-(void)setSettingOrientation:(unsigned long long)arg1 ;
@end

