/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <NewsArticles/NewsArticles-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TSTabBarSplitViewAutoObserver.h>
#import <libobjc.A.dylib/NULoadingDelegate.h>
#import <libobjc.A.dylib/NUArticleViewControllerLoadingListener.h>
#import <libobjc.A.dylib/NAArticleFooterDelegate.h>
#import <libobjc.A.dylib/NUArticleHardPaywallPresentationReporting.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/NAZoomable.h>
#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>
#import <libobjc.A.dylib/NUURLHandlerDelegate.h>

@class NSArray;

@interface NewsArticles.ArticleViewController : UIViewController <TSTabBarSplitViewAutoObserver, NULoadingDelegate, NUArticleViewControllerLoadingListener, NAArticleFooterDelegate, NUArticleHardPaywallPresentationReporting, UIScrollViewDelegate, NAZoomable, FCBundleSubscriptionChangeObserver, NUURLHandlerDelegate> {

	 model;
	 observableScrollView;
	 modalHostStyle;
	 isImpressionable;
	 pageDelegate;
	 contentBackgroundColor;
	 headline;
	 styler;
	 eventHandler;
	 articleViewController;
	 presentationContext;
	 keyCommandManager;
	 documentSectionBlueprintProvider;
	 hardPaywallViewController;
	 deferredHardPaywallViewController;
	 footerProvider;
	 footers;
	 headerProvider;
	 headers;
	 urlHandler;
	 paywallPreparationEventManager;
	 deferredHardPaywallIsVisible;
	 deferredHardPaywallHeightProvider;
	 destinationViewSize;
	 viewingSessionID;
	 scrollDebounce;
	 commands;
	 coverViewManager;
	 keyboardInputMonitor;

}

@property (readonly,nonatomic) NSArray * keyCommands; 
@property (readonly,nonatomic) BOOL canBecomeFirstResponder; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)viewWillLayoutSubviews;
-(NSArray *)keyCommands;
-(BOOL)isPreviewing;
-(void)zoomIn;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)zoomOut;
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(void)tabBarSplitViewDidChangeFocusToFocus:(long long)arg1 action:(long long)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)shouldOccludeAccessibilityElement:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)URLHandler:(id)arg1 wantsToPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)resetZoom;
-(void)footerNeedsLayout:(id)arg1 ;
-(void)footerResignsAsFirstResponder:(id)arg1 ;
-(BOOL)canIncreaseTextSize;
-(BOOL)canDecreaseTextSize;
-(BOOL)canZoomIn;
-(BOOL)canZoomOut;
-(void)increaseTextSize;
-(void)decreaseTextSize;
-(BOOL)canResetZoom;
-(void)handleKeyCommandWithKeyCommand:(id)arg1 ;
-(void)loadingDidFinishWithError:(id)arg1 ;
-(void)didLoadArticle:(id)arg1 withContext:(id)arg2 ;
-(BOOL)isShowingHardPaywall;
-(BOOL)accessibilityShouldScroll:(id)arg1 defaultValue:(BOOL)arg2 ;
-(BOOL)accessibilityShouldScroll:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

