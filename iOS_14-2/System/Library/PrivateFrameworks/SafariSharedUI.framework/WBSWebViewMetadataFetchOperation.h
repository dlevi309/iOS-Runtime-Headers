/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <SafariSharedUI/WBSSiteMetadataFetchOperation.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol WBSWebViewMetadataFetchOperationDelegate;
@class WKWebView, WKWebViewConfiguration, NSString;

@interface WBSWebViewMetadataFetchOperation : WBSSiteMetadataFetchOperation <WKNavigationDelegate> {

	id<WBSWebViewMetadataFetchOperationDelegate> _delegate;
	WKWebView* _webView;

}

@property (assign,nonatomic,__weak) id<WBSWebViewMetadataFetchOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WKWebView * webView;                                                     //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) WKWebViewConfiguration * webViewConfiguration; 
@property (nonatomic,readonly) CGSize webViewSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKWebView *)webView;
-(id<WBSWebViewMetadataFetchOperationDelegate>)delegate;
-(void)start;
-(void)_webViewWebProcessDidCrash:(id)arg1 ;
-(void)setDelegate:(id<WBSWebViewMetadataFetchOperationDelegate>)arg1 ;
-(NSString *)description;
-(WKWebViewConfiguration *)webViewConfiguration;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)cancel;
-(void)didCreateWebView;
-(void)dealloc;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)clearWebView;
-(void)willClearWebView;
-(void)didFailFetch;
-(CGSize)webViewSize;
-(void)startOffscreenFetching;
-(void)_setUpWebViewAndStartOffscreenFetching;
@end

