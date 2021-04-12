/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HeartRhythmUI/HeartRhythmUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@class NSURL, WKWebView, NSString;

@interface HRWebViewController : UIViewController <WKNavigationDelegate> {

	NSURL* _fileURL;
	WKWebView* _webView;
	UIEdgeInsets _bodyInsets;

}

@property (nonatomic,retain) NSURL * fileURL;                       //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic) UIEdgeInsets bodyInsets;               //@synthesize bodyInsets=_bodyInsets - In the implementation block
@property (nonatomic,retain) WKWebView * webView;                   //@synthesize webView=_webView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(WKWebView *)webView;
-(void)viewDidLoad;
-(void)setWebView:(WKWebView *)arg1 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(id)initWithURL:(id)arg1 bodyInsets:(UIEdgeInsets)arg2 ;
-(UIEdgeInsets)bodyInsets;
-(void)_adjustWebView:(id)arg1 bodyInsets:(UIEdgeInsets)arg2 ;
-(void)setBodyInsets:(UIEdgeInsets)arg1 ;
@end
