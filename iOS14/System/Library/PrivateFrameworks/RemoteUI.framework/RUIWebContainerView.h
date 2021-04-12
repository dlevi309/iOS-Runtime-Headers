/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol RUIWebContainerViewDelegate;
@class NSURL, UIWebView, NSString;

@interface RUIWebContainerView : UIView <UIWebViewDelegate> {

	BOOL _highlighted;
	BOOL _reallyHighlighted;
	NSURL* _baseURL;
	UIWebView* _webView;
	id<RUIWebContainerViewDelegate> _delegate;

}

@property (nonatomic,readonly) UIWebView * webView;                                        //@synthesize webView=_webView - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic,__weak) id<RUIWebContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIWebView *)webView;
-(double)heightForWidth:(double)arg1 ;
-(id<RUIWebContainerViewDelegate>)delegate;
-(BOOL)uiWebView:(id)arg1 previewIsAllowedForPosition:(CGPoint)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)setDelegate:(id<RUIWebContainerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setUserStyleSheet:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithContent:(id)arg1 baseURL:(id)arg2 ;
-(void)updateContent:(id)arg1 ;
-(void)_setHighlightedNow;
@end

