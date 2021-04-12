/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/HLPHelpTopicViewControllerDelegate.h>
#import <libobjc.A.dylib/HLPHelpLoadingViewDelegate.h>

@protocol HLPHelpTopicViewControllerDelegate;
@class HLPHelpBookController, NSString, NSMutableArray, UIBarButtonItem, NSLayoutConstraint, NSURL, WKWebView, HLPHelpLocale, HLPHelpTopicHistoryItem, HLPHelpLoadingView, HLPHelpUsageController, TPSURLSessionItem, NSCache, NSArray, NSMutableDictionary;

@interface HLPHelpTopicViewController : UIViewController <UIGestureRecognizerDelegate, WKNavigationDelegate, HLPHelpTopicViewControllerDelegate, HLPHelpLoadingViewDelegate> {

	id _interactivePopGestureRecognizerDelegate;
	BOOL _canShowTOC;
	BOOL _webViewLoaded;
	BOOL _RTL;
	HLPHelpBookController* _helpBookController;
	NSString* _assetHostOverride;
	NSMutableArray* _topicHistory;
	UIBarButtonItem* _tocBarButtonItem;
	UIBarButtonItem* _backBarButtonItem;
	UIBarButtonItem* _forwardBarButtonItem;
	NSLayoutConstraint* _loadingViewTopConstraint;
	BOOL _supportsDarkMode;
	BOOL _displayHelpTopicsOnly;
	BOOL _hideDoneButton;
	BOOL _showTopicNameAsTitle;
	id<HLPHelpTopicViewControllerDelegate> _delegate;
	NSURL* _helpBookURL;
	WKWebView* _webView;
	HLPHelpLocale* _locale;
	HLPHelpTopicHistoryItem* _currentTopicHistoryItem;
	HLPHelpLoadingView* _loadingView;
	HLPHelpUsageController* _usageController;
	TPSURLSessionItem* _URLSessionItem;
	NSCache* _topicCache;
	NSArray* _searchTerms;
	NSMutableDictionary* _webViewRequestsMap;

}

@property (nonatomic,retain) TPSURLSessionItem * URLSessionItem;                                  //@synthesize URLSessionItem=_URLSessionItem - In the implementation block
@property (nonatomic,retain) NSCache * topicCache;                                                //@synthesize topicCache=_topicCache - In the implementation block
@property (nonatomic,retain) NSArray * searchTerms;                                               //@synthesize searchTerms=_searchTerms - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * webViewRequestsMap;                            //@synthesize webViewRequestsMap=_webViewRequestsMap - In the implementation block
@property (assign,nonatomic,__weak) id<HLPHelpTopicViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL supportsDarkMode;                                               //@synthesize supportsDarkMode=_supportsDarkMode - In the implementation block
@property (assign,nonatomic) BOOL displayHelpTopicsOnly;                                          //@synthesize displayHelpTopicsOnly=_displayHelpTopicsOnly - In the implementation block
@property (assign,nonatomic) BOOL hideDoneButton;                                                 //@synthesize hideDoneButton=_hideDoneButton - In the implementation block
@property (assign,nonatomic) BOOL showTopicNameAsTitle;                                           //@synthesize showTopicNameAsTitle=_showTopicNameAsTitle - In the implementation block
@property (nonatomic,retain) NSURL * helpBookURL;                                                 //@synthesize helpBookURL=_helpBookURL - In the implementation block
@property (nonatomic,retain) WKWebView * webView;                                                 //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) HLPHelpLocale * locale;                                              //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) HLPHelpBookController * helpBookController;                          //@synthesize helpBookController=_helpBookController - In the implementation block
@property (nonatomic,retain) HLPHelpTopicHistoryItem * currentTopicHistoryItem;                   //@synthesize currentTopicHistoryItem=_currentTopicHistoryItem - In the implementation block
@property (nonatomic,retain) HLPHelpLoadingView * loadingView;                                    //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) HLPHelpUsageController * usageController;                            //@synthesize usageController=_usageController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<HLPHelpTopicViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HLPHelpTopicViewControllerDelegate>)arg1 ;
-(void)setLocale:(HLPHelpLocale *)arg1 ;
-(HLPHelpLocale *)locale;
-(WKWebView *)webView;
-(void)dismiss;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)updateBackgroundColor;
-(void)setWebView:(WKWebView *)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 startURLSchemeTask:(id)arg2 ;
-(void)webView:(id)arg1 stopURLSchemeTask:(id)arg2 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)updateDoneButton;
-(NSArray *)searchTerms;
-(void)setSearchTerms:(NSArray *)arg1 ;
-(void)setLoadingView:(HLPHelpLoadingView *)arg1 ;
-(HLPHelpLoadingView *)loadingView;
-(void)setDisplayHelpTopicsOnly:(BOOL)arg1 ;
-(void)updateNavigationButtons;
-(BOOL)hideDoneButton;
-(NSURL *)helpBookURL;
-(void)setHelpBookController:(HLPHelpBookController *)arg1 ;
-(HLPHelpBookController *)helpBookController;
-(HLPHelpUsageController *)usageController;
-(void)setUsageController:(HLPHelpUsageController *)arg1 ;
-(TPSURLSessionItem *)URLSessionItem;
-(void)setURLSessionItem:(TPSURLSessionItem *)arg1 ;
-(void)setHelpBookURL:(NSURL *)arg1 ;
-(BOOL)displayHelpTopicsOnly;
-(BOOL)supportsDarkMode;
-(void)setSupportsDarkMode:(BOOL)arg1 ;
-(void)setShowTopicNameAsTitle:(BOOL)arg1 ;
-(void)loadHelpTopicItem:(id)arg1 searchTerms:(id)arg2 anchor:(id)arg3 ;
-(void)setHideDoneButton:(BOOL)arg1 ;
-(void)showHelpBookInfo:(id)arg1 ;
-(void)reloadCurrentTopic;
-(void)helpTopicViewControllerShowHelpBookInfo:(id)arg1 ;
-(void)helpTopicViewControllerDoneButtonTapped:(id)arg1 ;
-(void)helpTopicViewController:(id)arg1 topicLoaded:(id)arg2 ;
-(void)helpTopicViewController:(id)arg1 failToLoadWithError:(id)arg2 ;
-(void)helpTopicViewControllerCurrentTopicIsPassionPoint:(id)arg1 ;
-(BOOL)showTopicNameAsTitle;
-(void)showWebViewDelay;
-(void)showTableOfContent;
-(void)backButtonTapped;
-(void)forwardButtonTapped;
-(void)updateScrollPositionForCurrentTopicItem;
-(void)saveCurrentTopicItem;
-(void)loadHelpTopicItem:(id)arg1 searchTerms:(id)arg2 anchor:(id)arg3 topicAccessType:(long long)arg4 ;
-(void)loadHTMLString:(id)arg1 anchor:(id)arg2 ;
-(NSCache *)topicCache;
-(void)updateHTMLStringPath:(id)arg1 tag:(id)arg2 attribute:(id)arg3 ;
-(NSMutableDictionary *)webViewRequestsMap;
-(HLPHelpTopicHistoryItem *)currentTopicHistoryItem;
-(void)setCurrentTopicHistoryItem:(HLPHelpTopicHistoryItem *)arg1 ;
-(void)setTopicCache:(NSCache *)arg1 ;
-(void)setWebViewRequestsMap:(NSMutableDictionary *)arg1 ;
@end

