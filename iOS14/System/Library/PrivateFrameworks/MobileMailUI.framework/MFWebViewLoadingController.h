/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(WKWebView *)webView;
-(void)setRemoteObjectInterface:(_WKRemoteObjectInterface *)arg1 ;
-(id)init;
-(_WKRemoteObjectInterface *)remoteObjectInterface;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id<MFMailWebProcessDelegate>)webProcessDelegate;
-(void)setWebProcessDelegate:(id<MFMailWebProcessDelegate>)arg1 ;
-(void)reload;
-(void)stopLoading;
-(void)setWebView:(WKWebView *)arg1 ;
-(EMContentRepresentation *)contentRepresentation;
-(void)setContentRepresentation:(EMContentRepresentation *)arg1 ;
-(void)dealloc;
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

