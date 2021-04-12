/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TSTabBarSplitViewAutoObserver.h>

@class NSArray;

@interface NewsArticles.PDFReplicaViewerViewController : UIViewController <TSTabBarSplitViewAutoObserver> {

	 styler;
	 renderer;
	 eventHandler;
	 sessionManager;
	 issue;
	 pageViewController;
	 pageBlueprintProvider;
	 toolbarCoverFactory;
	 paywallFactory;
	 navigationItemStyle;
	 titleView;
	 paywallViewController;
	 paidAccessChecker;
	 eventManager;
	 featureAvailability;
	 sharingActivityItemFactory;
	 subscriptionController;
	 toolbarManager;
	 backButton;
	 nextButton;
	 barVisibilityAnimator;
	 pageSheetPresentationObserver;
	 commands;

}

@property (readonly,nonatomic) NSArray * keyCommands; 
@property (readonly,nonatomic) BOOL prefersStatusBarHidden; 
@property (readonly,nonatomic) long long preferredStatusBarUpdateAnimation; 
@property (readonly,nonatomic) BOOL prefersHomeIndicatorAutoHidden; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSArray *)keyCommands;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)tabBarSplitViewWillChangeDisplayModeToDisplayMode:(long long)arg1 ;
-(void)tabBarSplitViewDidChangeFocusToFocus:(long long)arg1 action:(long long)arg2 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)previousPageKeyCommand;
-(void)nextPageKeyCommand;
-(BOOL)prefersStatusBarHidden;
-(id)initWithCoder:(id)arg1 ;
-(long long)preferredStatusBarUpdateAnimation;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

