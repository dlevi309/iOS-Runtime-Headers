/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/Social-Structs.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, NSString;

@interface SLURLPreviewGenerator : NSObject <UIWebViewDelegate> {

	/*^block*/id _completion;
	UIWebView* _webView;

}

@property (retain) UIWebView * webView;                             //@synthesize webView=_webView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)uiWebView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4 ;
-(void)loadURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_callCompletionWithPreview:(id)arg1 ;
@end

