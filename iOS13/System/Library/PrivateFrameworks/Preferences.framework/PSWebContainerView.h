/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, NSData, NSString;

@interface PSWebContainerView : UIView <UIWebViewDelegate> {

	UIWebView* _webView;
	NSData* _content;

}

@property (nonatomic,readonly) UIWebView * webView;                 //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) NSData * content;                      //@synthesize content=_content - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSData *)content;
-(UIWebView *)webView;
-(void)layoutSubviews;
-(void)setContent:(NSData *)arg1 ;
-(void)setUserStyleSheet:(id)arg1 ;
-(BOOL)uiWebView:(id)arg1 previewIsAllowedForPosition:(CGPoint)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(double)heightForWidth:(double)arg1 ;
@end

