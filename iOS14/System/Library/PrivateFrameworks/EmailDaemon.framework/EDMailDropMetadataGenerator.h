/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/WKNavigationDelegate.h>

@class WKWebView, NSMutableArray, EFPromise, NSString;

@interface EDMailDropMetadataGenerator : NSObject <WKNavigationDelegate> {

	WKWebView* _webView;
	NSMutableArray* _scriptHandlers;
	EFPromise* _activePromise;

}

@property (nonatomic,retain) WKWebView * webView;                          //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) NSMutableArray * scriptHandlers;              //@synthesize scriptHandlers=_scriptHandlers - In the implementation block
@property (nonatomic,retain) EFPromise * activePromise;                    //@synthesize activePromise=_activePromise - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKWebView *)webView;
-(void)generateMailDropMetadataForContentURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)insertMailDropAttachmentViewForContentURL:(id)arg1 HTMLByContentID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg1 ;
-(void)setWebView:(WKWebView *)arg1 ;
-(void)dealloc;
-(void)tearDownWebView;
-(void)_findMailDropNodesInFileURL:(id)arg1 promise:(id)arg2 ;
-(id)withTimeout:(double)arg1 do:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setActivePromise:(EFPromise *)arg1 ;
-(NSMutableArray *)scriptHandlers;
-(BOOL)_shouldSearchForMailDropNodesInFileURL:(id)arg1 ;
-(void)_addScriptHandlerForKey:(id)arg1 handler:(/*^block*/id)arg2 ;
-(EFPromise *)activePromise;
-(void)setScriptHandlers:(NSMutableArray *)arg1 ;
@end

