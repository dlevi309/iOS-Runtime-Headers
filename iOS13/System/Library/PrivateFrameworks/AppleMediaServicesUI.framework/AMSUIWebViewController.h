/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/AMSURLProtocolDelegate.h>
#import <libobjc.A.dylib/AMSUIWebActionRunnerDelegate.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSUIWebDelegate;
@class ACAccount, AMSProcessInfo, AMSUIWebClientContext, NSURL, AMSUIWebContainerViewController, AMSUIWebPageViewController, AMSUIWebAppearance, NSString;

@interface AMSUIWebViewController : UIViewController <NSURLSessionDelegate, AMSURLProtocolDelegate, AMSUIWebActionRunnerDelegate, AMSBagConsumer> {

	BOOL _hasAppeared;
	BOOL _showingCancelButton;
	ACAccount* _account;
	AMSProcessInfo* _clientInfo;
	id<AMSUIWebDelegate> _delegate;
	AMSUIWebClientContext* _context;
	long long _currentLoadState;
	NSURL* _lastLoadedURL;
	AMSUIWebContainerViewController* _rootContainer;
	AMSUIWebPageViewController* _webPage;

}

@property (nonatomic,readonly) AMSUIWebClientContext * context;                              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) long long currentLoadState;                                     //@synthesize currentLoadState=_currentLoadState - In the implementation block
@property (assign,nonatomic) BOOL hasAppeared;                                               //@synthesize hasAppeared=_hasAppeared - In the implementation block
@property (nonatomic,retain) NSURL * lastLoadedURL;                                          //@synthesize lastLoadedURL=_lastLoadedURL - In the implementation block
@property (nonatomic,readonly) AMSUIWebContainerViewController * rootContainer;              //@synthesize rootContainer=_rootContainer - In the implementation block
@property (assign,nonatomic) BOOL showingCancelButton;                                       //@synthesize showingCancelButton=_showingCancelButton - In the implementation block
@property (nonatomic,readonly) AMSUIWebPageViewController * webPage;                         //@synthesize webPage=_webPage - In the implementation block
@property (nonatomic,readonly) ACAccount * account;                                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) AMSUIWebAppearance * appearance; 
@property (nonatomic,readonly) AMSProcessInfo * clientInfo;                                  //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,nonatomic,__weak) id<AMSUIWebDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL loadUsingWebKit; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
-(id<AMSUIWebDelegate>)delegate;
-(void)setDelegate:(id<AMSUIWebDelegate>)arg1 ;
-(AMSUIWebClientContext *)context;
-(ACAccount *)account;
-(void)loadView;
-(AMSUIWebAppearance *)appearance;
-(void)setAppearance:(AMSUIWebAppearance *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)_dismiss;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(AMSUIWebContainerViewController *)rootContainer;
-(id)loadRequest:(id)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(id)initWithBag:(id)arg1 ;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)loadURL:(id)arg1 ;
-(id)initWithBag:(id)arg1 account:(id)arg2 clientInfo:(id)arg3 ;
-(BOOL)hasAppeared;
-(void)setHasAppeared:(BOOL)arg1 ;
-(AMSUIWebPageViewController *)webPage;
-(id)loadBagValue:(id)arg1 ;
-(id)action:(id)arg1 pauseTimeouts:(BOOL)arg2 handleAuthenticateRequest:(id)arg3 ;
-(id)runJSRequest:(id)arg1 ;
-(void)_applyAppearance;
-(BOOL)loadUsingWebKit;
-(void)setLoadUsingWebKit:(BOOL)arg1 ;
-(id)action:(id)arg1 handleActionObject:(id)arg2 ;
-(id)action:(id)arg1 pauseTimeouts:(BOOL)arg2 handleDialogRequest:(id)arg3 ;
-(id)_loadRequest:(id)arg1 bagValue:(id)arg2 ;
-(id)_lazyPromiseForLoadingSession;
-(id)_lazyPromiseForLoadingRequest:(id)arg1 bagValue:(id)arg2 ;
-(id)_lazyPromiseForPageRefresh;
-(long long)currentLoadState;
-(id)_stringForLoadState:(long long)arg1 ;
-(void)_showErrorViewWithError:(id)arg1 request:(id)arg2 bagValue:(id)arg3 ;
-(id)_handleAuthenticateRequest:(id)arg1 pauseTimeouts:(BOOL)arg2 ;
-(id)_handleDialogRequest:(id)arg1 pauseTimeouts:(BOOL)arg2 ;
-(void)setCurrentLoadState:(long long)arg1 ;
-(NSURL *)lastLoadedURL;
-(void)setLastLoadedURL:(NSURL *)arg1 ;
-(BOOL)showingCancelButton;
-(void)setShowingCancelButton:(BOOL)arg1 ;
-(void)_showCancelButtonIfNeeded;
@end

