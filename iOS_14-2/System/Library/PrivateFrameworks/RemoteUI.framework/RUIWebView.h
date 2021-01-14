/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RUIElement.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, NSString, NSURL;

@interface RUIWebView : RUIElement <UIWebViewDelegate> {

	UIWebView* _webView;
	NSString* _html;
	NSURL* _baseURL;
	id _delegate;

}

@property (assign,nonatomic,__weak) id delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * html;                         //@synthesize html=_html - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                       //@synthesize baseURL=_baseURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)webView;
-(id)sourceURL;
-(NSURL *)baseURL;
-(NSString *)html;
-(id)delegate;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)setHtml:(NSString *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)dealloc;
-(BOOL)_isScrollEnabled;
-(id)userStyleSheet;
@end

