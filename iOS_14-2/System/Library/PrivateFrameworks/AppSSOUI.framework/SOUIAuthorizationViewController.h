/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) _UIRemoteViewController * _containedRemoteViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id<SOUIAuthorizationViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithExtensionViewController:(id)arg1 hints:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setDelegate:(id<SOUIAuthorizationViewControllerDelegate>)arg1 ;
-(BOOL)shouldAutorotate;
-(void)_cancel;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)dismissCompletionHandler;
-(void)setDismissCompletionHandler:(id)arg1 ;
-(void)loadView;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(_UIRemoteViewController *)_containedRemoteViewController;
@end

