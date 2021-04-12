/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegatePrivate.h>

@protocol MFMailWebProcessDelegate;
@class WKWebView, MFWebViewDictionary, _WKRemoteObjectInterface, EMContentRepresentation, NSURL, NSError, NSString;

@interface MFWebViewLoadingController : NSObject <WKNavigationDelegate, WKNavigationDelegatePrivate> {

	BOOL _webProcessPluginNeedsUpdate;
	WKWebView* _webView;
	MFWebViewDictionary* _webViewConstants;
	id<MFMailWebProcessDelegate> _webProcessDelegate;
	_WKRemoteObjectInterface* _remoteObjectInterface;
	EMContentRepresentation* _contentRepresentation;
	NSURL* _loadingURL;
	NSError* _error;

}

@property (nonatomic,retain) WKWebView * webView;                                                 //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) _WKRemoteObjectInterface * remoteObjectInterface;                    //@synthesize remoteObjectInterface=_remoteObjectInterface - In the implementation block
@property (nonatomic,retain) EMContentRepresentation * contentRepresentation;                     //@synthesize contentRepresentation=_contentRepresentation - In the implementation block
@property (nonatomic,retain) NSURL * loadingURL;                                                  //@synthesize loadingURL=_loadingURL - In the implementation block
@property (nonatomic,retain) NSError * error;                                                     //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL webProcessPluginNeedsUpdate;                                    //@synthesize webProcessPluginNeedsUpdate=_webProcessPluginNeedsUpdate - In the implementation block
@property (nonatomic,readonly) MFWebViewDictionary * webViewConstants;                            //@synthesize webViewConstants=_webViewConstants - In the implementation block
@property (assign,nonatomic,__weak) id<MFMailWebProcessDelegate> webProcessDelegate;              //@synthesize webProcessDelegate=_webProcessDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSError *)error;
-(void)setRemoteObjectInterface:(_WKRemoteObjectInterface *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(_WKRemoteObjectInterface *)remoteObjectInterface;
-(void)reload;
-(void)stopLoading;
-(WKWebView *)webView;
-(void)setWebView:(WKWebView *)arg1 ;
-(id<MFMailWebProcessDelegate>)webProcessDelegate;
-(void)setWebProcessDelegate:(id<MFMailWebProcessDelegate>)arg1 ;
-(EMContentRepresentation *)contentRepresentation;
-(void)setContentRepresentation:(EMContentRepresentation *)arg1 ;
-(MFWebViewDictionary *)webViewConstants;
-(void)requestWebViewLoadWithError:(id)arg1 ;
-(void)requestWebViewLoadWithContentRepresentation:(id)arg1 ;
-(void)requestWebViewLoadWithContext:(id)arg1 ;
-(void)requestWebViewLoadWithoutShowingMessageWithContext:(id)arg1 ;
-(void)requestWebViewLoadWithoutShowingMessageWithRepresentation:(id)arg1 ;
-(void)webProcessBrowserContextControllerDidBecomeAvailable;
-(void)slapWebView;
-(void)_reconveneWebProcessBundle;
-(void)_unregisterWebProcessDelegate:(id)arg1 ;
-(void)_registerWebProcessDelegate:(id)arg1 ;
-(NSURL *)loadingURL;
-(void)_doIssueLoadRequest;
-(void)setLoadingURL:(NSURL *)arg1 ;
-(BOOL)webProcessPluginNeedsUpdate;
-(void)setWebProcessPluginNeedsUpdate:(BOOL)arg1 ;
@end

