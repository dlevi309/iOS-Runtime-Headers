/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <libobjc.A.dylib/SFReaderEventsListener.h>
#import <libobjc.A.dylib/SFReaderContext.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/WKUIDelegatePrivate.h>

@protocol SFReaderWebProcessControllerProtocol, _SFReaderControllerDelegate, WKUIDelegatePrivate;
@class _WKRemoteObjectInterface, WBSReaderFontManager, WBSReaderConfigurationManager, NSMutableDictionary, NSTimer, WKWebView, NSString;

@interface _SFReaderController : NSObject <SFReaderEventsListener, SFReaderContext, WKNavigationDelegate, WKUIDelegatePrivate> {

	id<SFReaderWebProcessControllerProtocol> _readerControllerProxy;
	_WKRemoteObjectInterface* _eventsListenerInterface;
	WBSReaderFontManager* _fontManager;
	WBSReaderConfigurationManager* _configurationManager;
	/*^block*/id _readerMailContentCompletionHandler;
	/*^block*/id _readerPrintContentCompletionHandler;
	NSMutableDictionary* _bookmarkIdentifierToReadingListItemInfoCompletionMap;
	/*^block*/id _actionsDelayedUntilReaderWebViewIsReady;
	NSTimer* _actionsDelayedUntilReaderWebViewIsReadyTimer;
	BOOL _readerAvailable;
	BOOL _contentIsReady;
	WKWebView* _webView;
	WKWebView* _readerWebView;
	id<_SFReaderControllerDelegate> _delegate;
	id<WKUIDelegatePrivate> _webViewUIDelegate;
	NSString* _articleText;

}

@property (__weak,readonly) WKWebView * webView;                                            //@synthesize webView=_webView - In the implementation block
@property (__weak,readonly) WKWebView * readerWebView;                                      //@synthesize readerWebView=_readerWebView - In the implementation block
@property (__weak) id<_SFReaderControllerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (getter=isReaderAvailable) BOOL readerAvailable;                                  //@synthesize readerAvailable=_readerAvailable - In the implementation block
@property (assign,nonatomic) BOOL contentIsReady;                                           //@synthesize contentIsReady=_contentIsReady - In the implementation block
@property (assign,nonatomic,__weak) id<WKUIDelegatePrivate> webViewUIDelegate;              //@synthesize webViewUIDelegate=_webViewUIDelegate - In the implementation block
@property (nonatomic,readonly) NSString * articleText;                                      //@synthesize articleText=_articleText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id<_SFReaderControllerDelegate>)delegate;
-(void)setDelegate:(id<_SFReaderControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(WKWebView *)webView;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(id)initWithWebView:(id)arg1 ;
-(id)_webView:(id)arg1 actionsForElement:(id)arg2 defaultActions:(id)arg3 ;
-(void)_webView:(id)arg1 getAlternateURLFromImage:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<WKUIDelegatePrivate>)webViewUIDelegate;
-(void)_webView:(id)arg1 dataInteractionOperationWasHandled:(BOOL)arg2 forSession:(id)arg3 itemProviders:(id)arg4 ;
-(void)_webView:(id)arg1 dataInteraction:(id)arg2 sessionWillBegin:(id)arg3 ;
-(void)_webView:(id)arg1 dataInteraction:(id)arg2 session:(id)arg3 didEndWithOperation:(unsigned long long)arg4 ;
-(unsigned long long)_webView:(id)arg1 willUpdateDataInteractionOperationToOperation:(unsigned long long)arg2 forSession:(id)arg3 ;
-(BOOL)_webView:(id)arg1 performDataInteractionOperationWithItemProviders:(id)arg2 ;
-(void)_webView:(id)arg1 contextMenuConfigurationForElement:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_webView:(id)arg1 contextMenuWillPresentForElement:(id)arg2 ;
-(void)_webView:(id)arg1 contextMenuForElement:(id)arg2 willCommitWithAnimator:(id)arg3 ;
-(void)_webView:(id)arg1 contextMenuDidEndForElement:(id)arg2 ;
-(void)clearAvailability;
-(WKWebView *)readerWebView;
-(void)loadNewArticle;
-(void)setReaderIsActive:(BOOL)arg1 ;
-(BOOL)isLoadingNextPage;
-(void)prepareReaderPrintingIFrameWithCompletion:(/*^block*/id)arg1 ;
-(void)_setUpReaderActivityListener;
-(void)_updateJavaScriptEnabled;
-(void)didDetermineReaderAvailability:(BOOL)arg1 dueToSameDocumentNavigation:(BOOL)arg2 ;
-(void)didDetermineReaderAvailabilityForDynamicCheck:(BOOL)arg1 ;
-(void)contentDidBecomeReadyWithDetectedLanguage:(id)arg1 ;
-(void)didSetReaderConfiguration:(id)arg1 ;
-(void)didCollectReadingListItemInfo:(id)arg1 bookmarkID:(id)arg2 ;
-(void)didCollectReaderContentForMail:(id)arg1 ;
-(void)didPrepareReaderContentForPrinting:(id)arg1 ;
-(void)readerTextWasExtracted:(id)arg1 withMetadata:(id)arg2 wasDeterminingAvailabilility:(BOOL)arg3 ;
-(void)didCollectArticleContent:(id)arg1 ;
-(void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 isViewingArchive:(BOOL)arg3 ;
-(void)activateFont:(id)arg1 ;
-(void)didFinishPresentationUpdateAfterTransitioningToReader;
-(void)checkReaderAvailability;
-(void)collectArticleContent;
-(void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 isViewingArchive:(BOOL)arg3 scrollOffsetDictionary:(id)arg4 ;
-(id)readerControllerProxy;
-(void)setUpReaderWebViewIfNeededAndPerformBlock:(/*^block*/id)arg1 ;
-(BOOL)_readerWebViewIsReady;
-(void)_performActionsDelayedUntilReaderWebViewIsReady;
-(void)_performActionsDelayedUntilReaderWebViewIsReadyDidTimeout:(id)arg1 ;
-(void)createArticleFinder;
-(void)_collectReaderContentForMailWithCompletion:(/*^block*/id)arg1 ;
-(void)_saveConfigurationAndSendToWebProcess;
-(void)sendConfigurationToWebProcess;
-(void)_sendReaderAvailabilityNotificationForReason:(long long)arg1 ;
-(void)setReaderLanguageTag:(id)arg1 ;
-(BOOL)isReaderAvailable;
-(void)stopLoadingNextPage;
-(void)clearReaderWebView;
-(BOOL)shouldCreateArticleFinder;
-(void)activateReader;
-(void)deactivateReaderNow:(unsigned long long)arg1 ;
-(id)scrollPositionInformation;
-(void)clearUnusedReaderResourcesSoon;
-(id)readerURL;
-(id)configurationManager;
-(id)fontManager;
-(void)collectReaderContentForMailWithCompletion:(/*^block*/id)arg1 ;
-(void)setReaderFont:(id)arg1 ;
-(void)setReaderTheme:(long long)arg1 forAppearance:(long long)arg2 ;
-(BOOL)canIncreaseReaderTextSize;
-(BOOL)canDecreaseReaderTextSize;
-(void)increaseReaderTextSize;
-(void)decreaseReaderTextSize;
-(void)resetReaderTextSize;
-(void)collectReadingListInfoWithBookmarkID:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)didCreateReaderWebView:(id)arg1 ;
-(void)owningWebViewDidCommitNavigation;
-(void)setReaderAvailable:(BOOL)arg1 ;
-(BOOL)contentIsReady;
-(void)setContentIsReady:(BOOL)arg1 ;
-(void)setWebViewUIDelegate:(id<WKUIDelegatePrivate>)arg1 ;
-(NSString *)articleText;
@end

