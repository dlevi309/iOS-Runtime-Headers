/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIScrollViewDelegate.h>

@protocol UIScrollViewDelegate;
@class UIWebView, NSString;

@interface _UIWebViewScrollViewDelegateForwarder : NSObject <UIScrollViewDelegate> {

	id<UIScrollViewDelegate> _delegate;
	UIWebView* _webView;

}

@property (assign,nonatomic) id<UIScrollViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIWebView * webView;                            //@synthesize webView=_webView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIWebView *)webView;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id<UIScrollViewDelegate>)delegate;
-(void)setDelegate:(id<UIScrollViewDelegate>)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

