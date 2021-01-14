/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKBrowserViewController.h>
#import <UIKit/UIPresentationControllerDelegatePrivate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/CKAppManagerViewControllerDelegate.h>

@protocol CKBrowserAppManagerViewControllerDelegate;
@class UINavigationController, CKAppManagerViewController, NSString;

@interface CKBrowserAppManagerViewController : CKBrowserViewController <UIPresentationControllerDelegatePrivate, UIViewControllerTransitioningDelegate, CKAppManagerViewControllerDelegate> {

	UINavigationController* _navController;
	CKAppManagerViewController* _appViewController;
	id<CKBrowserAppManagerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CKBrowserAppManagerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id<CKBrowserAppManagerViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)shouldShowChatChrome;
-(id)parentTransitioningDelegate;
-(long long)browserPresentationStyle;
-(BOOL)wantsDarkUI;
-(BOOL)wantsOpaqueUI;
-(BOOL)supportsQuickView;
-(BOOL)mayBeKeptInViewHierarchy;
-(long long)parentModalPresentationStyle;
-(void)setDelegate:(id<CKBrowserAppManagerViewControllerDelegate>)arg1 ;
-(void)browserAppManagerDidSelectPlugin:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(void)viewDidLoad;
-(void)appManagerViewControllerDidFinish:(id)arg1 ;
-(BOOL)appAllowedByScreenTimeWithBundleIdentifier:(id)arg1 ;
-(void)delegate_BrowserAppManagerDidSelectPlugin:(id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(BOOL)isDismissing;
-(BOOL)isLoaded;
-(void)dismiss;
@end

