/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WKUIDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol HUInlineWebContainerViewDelegate;
@class WKWebView, NSString, UIFont, WKUserContentController;

@interface HUInlineWebContainerView : UIView <WKUIDelegate, WKNavigationDelegate> {

	WKWebView* _webView;
	NSString* _HTMLContent;
	UIFont* _font;
	id<HUInlineWebContainerViewDelegate> _delegate;
	double _estimatedHeight;
	WKUserContentController* _contentController;

}

@property (assign,nonatomic) double estimatedHeight;                                            //@synthesize estimatedHeight=_estimatedHeight - In the implementation block
@property (nonatomic,readonly) WKUserContentController * contentController;                     //@synthesize contentController=_contentController - In the implementation block
@property (nonatomic,readonly) WKWebView * webView;                                             //@synthesize webView=_webView - In the implementation block
@property (nonatomic,copy) NSString * HTMLContent;                                              //@synthesize HTMLContent=_HTMLContent - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                     //@synthesize font=_font - In the implementation block
@property (assign,nonatomic,__weak) id<HUInlineWebContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKWebView *)webView;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)heightForWidth:(double)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(id<HUInlineWebContainerViewDelegate>)delegate;
-(void)setFont:(UIFont *)arg1 ;
-(void)setDelegate:(id<HUInlineWebContainerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(BOOL)webView:(id)arg1 shouldPreviewElement:(id)arg2 ;
-(double)estimatedHeight;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(WKUserContentController *)contentController;
-(UIFont *)font;
-(void)setHTMLContent:(NSString *)arg1 ;
-(void)setUserStyleSheet;
-(void)setEstimatedHeight:(double)arg1 ;
-(NSString *)HTMLContent;
@end

