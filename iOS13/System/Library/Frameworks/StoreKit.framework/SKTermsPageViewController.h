/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDelegate:(id<SKTermsPageViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(long long)positionForBar:(id)arg1 ;
-(unsigned long long)edgesForExtendedLayout;
-(void)_dismissViewController;
-(id)initWithTerms:(id)arg1 ;
-(id)_markupTermsWithHTML:(id)arg1 ;
-(void)_loadSubviews;
-(void)_dismissViewControllerAnimated:(BOOL)arg1 ;
-(void)_dismissViewControllerAnimated:(BOOL)arg1 withAcceptance:(BOOL)arg2 ;
-(void)_buttonAccept:(id)arg1 ;
-(void)_buttonDecline:(id)arg1 ;
@end

