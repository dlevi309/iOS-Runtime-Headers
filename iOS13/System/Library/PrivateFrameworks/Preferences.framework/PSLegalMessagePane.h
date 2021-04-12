/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSEditingPane.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, NSString;

@interface PSLegalMessagePane : PSEditingPane <UIWebViewDelegate> {

	UIWebView* _webView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(BOOL)shouldInsetContent;
-(void)layoutInsetContent:(CGRect)arg1 ;
-(void)viewDidBecomeVisible;
-(BOOL)handlesDoneButton;
-(id)scrollViewToBeInsetted;
-(id)markupString;
-(id)htmlFileLocation;
@end

