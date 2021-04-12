/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class NSString;

@interface PSAboutHTMLSheetViewController : UIViewController <UIWebViewDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)presentAboutSheetTitled:(id)arg1 HTMLContent:(id)arg2 fromViewController:(id)arg3 ;
-(void)viewDidBecomeVisible;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)donePressed;
-(void)setHTMLContent:(id)arg1 isFragment:(BOOL)arg2 ;
-(void)loadView;
-(void)dealloc;
@end

