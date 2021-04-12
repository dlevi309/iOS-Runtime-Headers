/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TSTabBarSplitViewAutoObserver.h>
#import <libobjc.A.dylib/NANavigationControl.h>

@interface NewsArticles.ArticleViewerViewController : UIViewController <TSTabBarSplitViewAutoObserver, NANavigationControl> {

	 navigationItemStyle;
	 observableScrollView;
	 styler;
	 eventHandler;
	 pageViewController;
	 pageBlueprintProvider;
	 blueprintProvider;
	 coverViewManager;
	 eventManager;
	 prewarm;
	 barCompressionManager;
	 articleViewerImpressionManager;
	 interstitialAdManager;
	 paidAccessChecker;
	 featureManager;
	 toolbarManager;
	 featureTransitions;
	 hasPresentedFirstPage;
	 pageSheetPresentationObserver;
	 commands;

}

@property (readonly,nonatomic) long long preferredStatusBarStyle; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)tabBarSplitViewWillChangeDisplayModeToDisplayMode:(long long)arg1 ;
-(void)tabBarSplitViewWillObsureView;
-(void)tabBarSplitViewDidUnobsureView;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)enableNavigation:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

