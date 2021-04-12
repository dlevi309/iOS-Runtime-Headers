/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NANavigationControl.h>
#import <libobjc.A.dylib/TSTabBarSplitViewAutoObserver.h>

@class NSArray;

@interface NewsArticles.ArticleViewerViewController : UIViewController <NANavigationControl, TSTabBarSplitViewAutoObserver> {

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
	 hasPresentedFirstPage;
	 articleViewerImpressionManager;
	 featureManager;
	 paidAccessChecker;
	 currentPageContext;
	 pageSheetPresentationObserver;

}

@property (readonly,nonatomic) NSArray * keyCommands; 
@property (readonly,nonatomic) long long preferredStatusBarStyle; 
-(NSArray *)keyCommands;
-(void)showTableOfContentsKeyCommand;
-(void)previousStoryKeyCommand;
-(void)nextStoryKeyCommand;
-(void)closeStoryKeyCommand;
-(void)likeStoryKeyCommand;
-(void)dislikeStoryKeyCommand;
-(void)saveStoryKeyCommand;
-(void)enableNavigation:(BOOL)arg1 ;
-(void)tabBarSplitViewWillChangeDisplayModeToDisplayMode:(long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

