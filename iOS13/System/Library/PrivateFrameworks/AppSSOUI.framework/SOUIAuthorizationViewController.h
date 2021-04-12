/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSOUI.framework/AppSSOUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_UIRemoteViewControllerContaining.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SOUIAuthorizationViewControllerDelegate;
@class _UIRemoteViewController, UIViewController, NSString;

@interface SOUIAuthorizationViewController : UIViewController <_UIRemoteViewControllerContaining, UIGestureRecognizerDelegate> {

	UIViewController* _extensionViewController;
	id<SOUIAuthorizationViewControllerDelegate> _delegate;
	/*^block*/id _dismissCompletionHandler;

}

@property (nonatomic,copy) id dismissCompletionHandler;                                               //@synthesize dismissCompletionHandler=_dismissCompletionHandler - In the implementation block
@property (__weak) id<SOUIAuthorizationViewControllerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UIRemoteViewController * _containedRemoteViewController; 
-(id<SOUIAuthorizationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SOUIAuthorizationViewControllerDelegate>)arg1 ;
-(void)loadView;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(_UIRemoteViewController *)_containedRemoteViewController;
-(id)dismissCompletionHandler;
-(void)setDismissCompletionHandler:(id)arg1 ;
-(void)_cancel;
-(id)initWithExtensionViewController:(id)arg1 hints:(id)arg2 ;
@end

