/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIWebView *)webView;
-(NSData *)content;
-(double)heightForWidth:(double)arg1 ;
-(id)init;
-(void)setContent:(NSData *)arg1 ;
-(BOOL)uiWebView:(id)arg1 previewIsAllowedForPosition:(CGPoint)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)layoutSubviews;
-(void)setUserStyleSheet:(id)arg1 ;
@end

