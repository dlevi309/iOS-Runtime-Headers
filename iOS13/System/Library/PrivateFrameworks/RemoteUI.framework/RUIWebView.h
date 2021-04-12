/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(NSURL *)baseURL;
-(id)webView;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(id)sourceURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSString *)html;
-(void)setHtml:(NSString *)arg1 ;
-(id)userStyleSheet;
@end

