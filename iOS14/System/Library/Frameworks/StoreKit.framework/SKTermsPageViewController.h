/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UINavigationBarDelegate.h>

@protocol SKTermsPageViewControllerDelegate;
@class UINavigationBar, NSString, UIToolbar, UIWebView;

@interface SKTermsPageViewController : UIViewController <UINavigationBarDelegate> {

	UINavigationBar* _navbar;
	NSString* _terms;
	UIToolbar* _toolbar;
	UIWebView* _webview;
	id<SKTermsPageViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKTermsPageViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SKTermsPageViewControllerDelegate>)delegate;
-(long long)positionForBar:(id)arg1 ;
-(void)setDelegate:(id<SKTermsPageViewControllerDelegate>)arg1 ;
-(unsigned long long)edgesForExtendedLayout;
-(void)viewDidLoad;
-(void)_dismissViewController;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)_dismissViewControllerAnimated:(BOOL)arg1 ;
-(id)initWithTerms:(id)arg1 ;
-(id)_markupTermsWithHTML:(id)arg1 ;
-(void)_loadSubviews;
-(void)_dismissViewControllerAnimated:(BOOL)arg1 withAcceptance:(BOOL)arg2 ;
-(void)_buttonAccept:(id)arg1 ;
-(void)_buttonDecline:(id)arg1 ;
@end

