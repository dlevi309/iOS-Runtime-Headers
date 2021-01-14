/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <UIKit/UIPageViewControllerDataSource.h>
#import <libobjc.A.dylib/NUPageViewControllerDelegate.h>
#import <libobjc.A.dylib/NUPageViewControllerDataSource.h>
#import <libobjc.A.dylib/NUArticleBarButtonItemManagerDelegate.h>
#import <libobjc.A.dylib/NUInterstitialAdManagerDelegate.h>
#import <libobjc.A.dylib/NUNavigationControl.h>
#import <libobjc.A.dylib/NULoadingDelegate.h>

@protocol NUArticleContainerViewControllerDelegate, NUPagingFactory, NUPaging, NURouter;
@class NUArticleNavigationController, NUPageViewController, NUInterstitialAdManager, NUArticleBarButtonItemManager, NSString;

@interface NUArticleContainerViewController : UIViewController <UIPageViewControllerDelegate, UIPageViewControllerDataSource, NUPageViewControllerDelegate, NUPageViewControllerDataSource, NUArticleBarButtonItemManagerDelegate, NUInterstitialAdManagerDelegate, NUNavigationControl, NULoadingDelegate> {

	BOOL _linkPreviewing;
	id<NUArticleContainerViewControllerDelegate> _delegate;
	NUArticleNavigationController* _navigationController;
	NUPageViewController* _pageViewController;
	id<NUPagingFactory> _pagingFactory;
	NUInterstitialAdManager* _interstitialAdManager;
	id<NUPaging> _paging;
	NUArticleBarButtonItemManager* _barButtonItemManager;
	id<NURouter> _router;

}

@property (nonatomic,readonly) NUArticleNavigationController * navigationController;                    //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,readonly) NUPageViewController * pageViewController;                               //@synthesize pageViewController=_pageViewController - In the implementation block
@property (nonatomic,readonly) id<NUPagingFactory> pagingFactory;                                       //@synthesize pagingFactory=_pagingFactory - In the implementation block
@property (nonatomic,readonly) NUInterstitialAdManager * interstitialAdManager;                         //@synthesize interstitialAdManager=_interstitialAdManager - In the implementation block
@property (nonatomic,retain) id<NUPaging> paging;                                                       //@synthesize paging=_paging - In the implementation block
@property (nonatomic,readonly) NUArticleBarButtonItemManager * barButtonItemManager;                    //@synthesize barButtonItemManager=_barButtonItemManager - In the implementation block
@property (nonatomic,readonly) id<NURouter> router;                                                     //@synthesize router=_router - In the implementation block
@property (assign,nonatomic,__weak) id<NUArticleContainerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isLinkPreviewing,nonatomic) BOOL linkPreviewing;                               //@synthesize linkPreviewing=_linkPreviewing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<NUArticleContainerViewControllerDelegate>)delegate;
-(void)pageViewController:(id)arg1 didChangeVisibleViewControllerFromViewController:(id)arg2 direction:(unsigned long long)arg3 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(id<NURouter>)router;
-(id<NUPaging>)paging;
-(void)setDelegate:(id<NUArticleContainerViewControllerDelegate>)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(NUPageViewController *)pageViewController;
-(id)childViewControllerForStatusBarHidden;
-(void)setLinkPreviewing:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(NUArticleNavigationController *)navigationController;
-(void)loadingDidFinishWithError:(id)arg1 ;
-(void)loadingWillStart;
-(void)enableNavigation:(BOOL)arg1 ;
-(NUArticleBarButtonItemManager *)barButtonItemManager;
-(id)viewControllerPageableForViewController:(id)arg1 ;
-(id<NUPagingFactory>)pagingFactory;
-(void)setPaging:(id<NUPaging>)arg1 ;
-(void)styleNavigationForPage:(id)arg1 ;
-(NUInterstitialAdManager *)interstitialAdManager;
-(BOOL)isLinkPreviewing;
-(void)pageViewController:(id)arg1 viewController:(id)arg2 changedVisibilityFactor:(double)arg3 ;
-(void)articleBarButtonItemManager:(id)arg1 performDoneActionForBarButtonItem:(id)arg2 ;
-(void)articleBarButtonItemManager:(id)arg1 performNextActionForBarButtonItem:(id)arg2 ;
-(void)articleBarButtonItemManager:(id)arg1 performShareActionForBarButtonItem:(id)arg2 ;
-(void)articleBarButtonItemManagerDidLayoutBarButtonItems:(id)arg1 ;
-(void)interstitialAdManager:(id)arg1 didLoadInterstitialPage:(id)arg2 ;
-(void)interstitialAdManager:(id)arg1 didUnloadInterstitialPage:(id)arg2 ;
-(id)interstitialAdManager:(id)arg1 pageAfterPage:(id)arg2 ;
-(id)initWithPagingFactory:(id)arg1 interstitialAdManager:(id)arg2 router:(id)arg3 ;
-(void)loadWithArticleIDs:(id)arg1 ;
@end

