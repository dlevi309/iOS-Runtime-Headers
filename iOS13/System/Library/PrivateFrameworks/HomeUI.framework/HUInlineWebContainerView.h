/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WKUIDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol HUInlineWebContainerViewDelegate;
@class WKWebView, NSString, WKUserContentController;

@interface HUInlineWebContainerView : UIView <WKUIDelegate, WKNavigationDelegate> {

	WKWebView* _webView;
	NSString* _HTMLContent;
	id<HUInlineWebContainerViewDelegate> _delegate;
	double _estimatedHeight;
	WKUserContentController* _contentController;

}

@property (assign,nonatomic) double estimatedHeight;                                            //@synthesize estimatedHeight=_estimatedHeight - In the implementation block
@property (nonatomic,readonly) WKUserContentController * contentController;                     //@synthesize contentController=_contentController - In the implementation block
@property (nonatomic,readonly) WKWebView * webView;                                             //@synthesize webView=_webView - In the implementation block
@property (nonatomic,copy) NSString * HTMLContent;                                              //@synthesize HTMLContent=_HTMLContent - In the implementation block
@property (assign,nonatomic,__weak) id<HUInlineWebContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUInlineWebContainerViewDelegate>)delegate;
-(void)setDelegate:(id<HUInlineWebContainerViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(WKWebView *)webView;
-(void)layoutSubviews;
-(id)_defaultFont;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldPreviewElement:(id)arg2 ;
-(double)heightForWidth:(double)arg1 ;
-(double)estimatedHeight;
-(NSString *)HTMLContent;
-(void)setHTMLContent:(NSString *)arg1 ;
-(WKUserContentController *)contentController;
-(void)setUserStyleSheet;
-(void)setEstimatedHeight:(double)arg1 ;
@end

