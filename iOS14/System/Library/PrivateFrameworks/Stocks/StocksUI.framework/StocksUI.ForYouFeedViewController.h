/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/TSTabBarSplitViewAutoObserver.h>

@interface StocksUI.ForYouFeedViewController : UIViewController <UICollectionViewDelegate, TSTabBarSplitViewAutoObserver> {

	 styler;
	 eventHandler;
	 blueprintViewController;
	 blueprintSelectionProvider;
	 cardViewScrollViewCoordinator;
	 statusBarView;
	 collapsingAnimator;
	 sharingActivityProviderFactory;
	 eventManager;
	 keyboardInputMonitor;
	 toolbarManager;
	 toolbarTitleIsHidden;

}

@property (readonly,nonatomic) long long preferredStatusBarStyle; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)tabBarSplitViewWillObsureView;
-(void)tabBarSplitViewDidUnobsureView;
-(void)viewDidLoad;
-(long long)preferredStatusBarStyle;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

