/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<CKBrowserAppManagerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CKBrowserAppManagerViewControllerDelegate>)arg1 ;
-(BOOL)isLoaded;
-(void)dismiss;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(long long)preferredStatusBarStyle;
-(BOOL)isDismissing;
-(BOOL)shouldShowChatChrome;
-(id)parentTransitioningDelegate;
-(long long)browserPresentationStyle;
-(BOOL)wantsDarkUI;
-(BOOL)wantsOpaqueUI;
-(BOOL)supportsQuickView;
-(BOOL)mayBeKeptInViewHierarchy;
-(long long)parentModalPresentationStyle;
-(void)browserAppManagerDidSelectPlugin:(id)arg1 ;
-(void)appManagerViewControllerDidFinish:(id)arg1 ;
-(BOOL)appAllowedByScreenTimeWithBundleIdentifier:(id)arg1 ;
-(void)delegate_BrowserAppManagerDidSelectPlugin:(id)arg1 ;
@end

