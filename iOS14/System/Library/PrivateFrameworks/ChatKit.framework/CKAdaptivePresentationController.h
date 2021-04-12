/*
* Generated on Thursday, January 14, 2021 at 2:21:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/CKAlertControllerDelegate.h>

@class UIViewController, UIPopoverPresentationController, CKPresentationControllerWindow, NSString;

@interface CKAdaptivePresentationController : NSObject <UIPopoverPresentationControllerDelegate, CKAlertControllerDelegate> {

	UIViewController* _presentedViewController;
	UIPopoverPresentationController* _currentPresentationController;
	CKPresentationControllerWindow* _presentationWindow;
	/*^block*/id _presentationHandler;
	/*^block*/id _dismissalHandler;

}

@property (nonatomic,retain) UIViewController * presentedViewController;                                   //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,retain) UIPopoverPresentationController * currentPresentationController;              //@synthesize currentPresentationController=_currentPresentationController - In the implementation block
@property (nonatomic,retain) CKPresentationControllerWindow * presentationWindow;                          //@synthesize presentationWindow=_presentationWindow - In the implementation block
@property (nonatomic,copy) id presentationHandler;                                                         //@synthesize presentationHandler=_presentationHandler - In the implementation block
@property (nonatomic,copy) id dismissalHandler;                                                            //@synthesize dismissalHandler=_dismissalHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setPresentationWindow:(CKPresentationControllerWindow *)arg1 ;
-(void)_cleanup;
-(void)_presentViewController:(id)arg1 fromViewController:(id)arg2 presentationHandler:(/*^block*/id)arg3 barButtonItemPresentationHandler:(/*^block*/id)arg4 dismissalHandler:(/*^block*/id)arg5 animated:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(void)presentViewController:(id)arg1 fromViewController:(id)arg2 barButtonItemPresentationHandler:(/*^block*/id)arg3 dismissalHandler:(/*^block*/id)arg4 animated:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(UIPopoverPresentationController *)currentPresentationController;
-(void)presentViewController:(id)arg1 fromViewController:(id)arg2 presentationHandler:(/*^block*/id)arg3 dismissalHandler:(/*^block*/id)arg4 animated:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)alertControllerViewDidDisappear:(id)arg1 ;
-(void)setPresentationHandler:(id)arg1 ;
-(id)presentationHandler;
-(void)setPresentedViewController:(UIViewController *)arg1 ;
-(id)dismissalHandler;
-(void)setDismissalHandler:(id)arg1 ;
-(void)setCurrentPresentationController:(UIPopoverPresentationController *)arg1 ;
-(void)dealloc;
-(CKPresentationControllerWindow *)presentationWindow;
-(UIViewController *)presentedViewController;
@end

