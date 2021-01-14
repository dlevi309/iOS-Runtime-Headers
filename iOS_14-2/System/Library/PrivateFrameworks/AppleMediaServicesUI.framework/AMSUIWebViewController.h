/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AMSUICommonViewController.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/AMSURLProtocolDelegate.h>
#import <libobjc.A.dylib/AMSUIWebActionRunnerDelegate.h>
#import <libobjc.A.dylib/AMSUIWebPageViewControllerDelegate.h>
#import <libobjc.A.dylib/AMSUIWebProtocolDelegate.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSUIWebDelegate;
@class AMSUIWebClientContext, UIViewController, NSURL, AMSUIWebContainerViewController, AMSUIWebPageViewController, ACAccount, AMSUIWebAppearance, AMSProcessInfo, NSDictionary, NSString;

@interface AMSUIWebViewController : AMSUICommonViewController <NSURLSessionDelegate, AMSURLProtocolDelegate, AMSUIWebActionRunnerDelegate, AMSUIWebPageViewControllerDelegate, AMSUIWebProtocolDelegate, AMSBagConsumer> {

	BOOL _hasAppeared;
	BOOL _hasStarted;
	id<AMSUIWebDelegate> _delegate;
	AMSUIWebClientContext* _context;
	UIViewController* _childViewController;
	long long _currentLoadState;
	NSURL* _lastLoadedURL;
	AMSUIWebContainerViewController* _rootContainer;
	AMSUIWebPageViewController* _webPage;

}

@property (nonatomic,readonly) AMSUIWebClientContext * context;                              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIViewController * childViewController;                         //@synthesize childViewController=_childViewController - In the implementation block
@property (assign,nonatomic) long long currentLoadState;                                     //@synthesize currentLoadState=_currentLoadState - In the implementation block
@property (assign,nonatomic) BOOL hasAppeared;                                               //@synthesize hasAppeared=_hasAppeared - In the implementation block
@property (assign,nonatomic) BOOL hasStarted;                                                //@synthesize hasStarted=_hasStarted - In the implementation block
@property (nonatomic,retain) NSURL * lastLoadedURL;                                          //@synthesize lastLoadedURL=_lastLoadedURL - In the implementation block
@property (nonatomic,readonly) AMSUIWebContainerViewController * rootContainer;              //@synthesize rootContainer=_rootContainer - In the implementation block
@property (nonatomic,readonly) AMSUIWebPageViewController * webPage;                         //@synthesize webPage=_webPage - In the implementation block
@property (nonatomic,retain) ACAccount * account; 
@property (nonatomic,retain) AMSUIWebAppearance * appearance; 
@property (nonatomic,retain) id<AMSBagProtocol> bag; 
@property (nonatomic,retain) AMSProcessInfo * clientInfo; 
@property (nonatomic,retain) NSDictionary * clientOptions; 
@property (assign,nonatomic,__weak) id<AMSUIWebDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL loadUsingWebKit; 
@property (nonatomic,retain) NSDictionary * metricsOverlay; 
@property (nonatomic,retain) NSDictionary * clientData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
-(ACAccount *)account;
-(void)viewWillLayoutSubviews;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSDictionary *)metricsOverlay;
-(void)setMetricsOverlay:(NSDictionary *)arg1 ;
-(BOOL)hasAppeared;
-(AMSProcessInfo *)clientInfo;
-(id<AMSUIWebDelegate>)delegate;
-(void)setClientOptions:(NSDictionary *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIViewController *)childViewController;
-(void)setHasStarted:(BOOL)arg1 ;
-(void)setAppearance:(AMSUIWebAppearance *)arg1 ;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(void)setChildViewController:(UIViewController *)arg1 ;
-(AMSUIWebClientContext *)context;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)hasStarted;
-(id<AMSBagProtocol>)bag;
-(id)initWithBag:(id)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)_dismiss;
-(void)setHasAppeared:(BOOL)arg1 ;
-(void)setDelegate:(id<AMSUIWebDelegate>)arg1 ;
-(id)loadRequest:(id)arg1 ;
-(AMSUIWebPageViewController *)webPage;
-(AMSUIWebContainerViewController *)rootContainer;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(void)setClientData:(NSDictionary *)arg1 ;
-(NSDictionary *)clientData;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)loadView;
-(id)loadURL:(id)arg1 ;
-(AMSUIWebAppearance *)appearance;
-(id)initWithBag:(id)arg1 account:(id)arg2 clientInfo:(id)arg3 ;
-(NSDictionary *)clientOptions;
-(id)loadBagValue:(id)arg1 ;
-(id)action:(id)arg1 pauseTimeouts:(BOOL)arg2 handleAuthenticateRequest:(id)arg3 ;
-(id)action:(id)arg1 pauseTimeouts:(BOOL)arg2 handleDialogRequest:(id)arg3 ;
-(void)actionDidFinishPurchaseWithResult:(id)arg1 error:(id)arg2 ;
-(id)runJSRequest:(id)arg1 ;
-(BOOL)loadUsingWebKit;
-(void)setLoadUsingWebKit:(BOOL)arg1 ;
-(id)action:(id)arg1 handleActionObject:(id)arg2 ;
-(void)action:(id)arg1 didEncodeNetworkRequest:(id)arg2 ;
-(void)webPageViewController:(id)arg1 didEncodeNetworkRequest:(id)arg2 ;
-(void)protocolHandler:(id)arg1 didEncodeNetworkRequest:(id)arg2 ;
-(id)_rootNavigationController;
-(id)_loadRequest:(id)arg1 bagValue:(id)arg2 ;
-(id)_handleAuthenticateRequest:(id)arg1 pauseTimeouts:(BOOL)arg2 ;
-(id)_handleDialogRequest:(id)arg1 pauseTimeouts:(BOOL)arg2 ;
-(void)_handleDidEncodeNetworkRequest:(id)arg1 ;
-(long long)currentLoadState;
-(void)setCurrentLoadState:(long long)arg1 ;
-(NSURL *)lastLoadedURL;
-(void)setLastLoadedURL:(NSURL *)arg1 ;
-(id)_parseWebPropertiesFromRequest:(id)arg1 ;
-(id)_lazyPromiseForBagSnapshot;
-(id)_lazyPromiseForLoadingSession;
-(id)_lazyPromiseForLoadingRequest:(id)arg1 bagValue:(id)arg2 ;
-(id)_lazyPromiseForPageLoad;
-(id)_stringForLoadState:(long long)arg1 ;
-(void)_showErrorViewWithError:(id)arg1 request:(id)arg2 bagValue:(id)arg3 ;
@end

