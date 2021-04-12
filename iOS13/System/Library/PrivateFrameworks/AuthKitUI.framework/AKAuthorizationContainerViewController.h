/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol AKAuthorizationContainerViewControllerDelegate, AKAuthorizationPaneViewControllerDelegate;
@class UIViewController, AKAuthorizationPresentationContext, NSString;

@interface AKAuthorizationContainerViewController : UIViewController <UINavigationControllerDelegate> {

	UIViewController* _rootViewController;
	AKAuthorizationPresentationContext* _presentationContext;
	id<AKAuthorizationContainerViewControllerDelegate> _delegate;
	id<AKAuthorizationPaneViewControllerDelegate> _paneDelegate;

}

@property (nonatomic,retain) UIViewController * rootViewController;                                           //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,readonly) AKAuthorizationPresentationContext * presentationContext;                      //@synthesize presentationContext=_presentationContext - In the implementation block
@property (assign,nonatomic,__weak) id<AKAuthorizationContainerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<AKAuthorizationPaneViewControllerDelegate> paneDelegate;               //@synthesize paneDelegate=_paneDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id<AKAuthorizationContainerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AKAuthorizationContainerViewControllerDelegate>)arg1 ;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(UIViewController *)rootViewController;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(AKAuthorizationPresentationContext *)presentationContext;
-(id<AKAuthorizationPaneViewControllerDelegate>)paneDelegate;
-(void)setPaneDelegate:(id<AKAuthorizationPaneViewControllerDelegate>)arg1 ;
-(id)initWithRootViewController:(id)arg1 authorizationContext:(id)arg2 ;
-(void)_setPaneDelegateForTopViewController;
-(void)_setPaneDelegateForViewController:(id)arg1 ;
-(void)_setPaneDelegate:(id)arg1 forViewController:(id)arg2 ;
-(void)_clearPaneDelegateForViewController:(id)arg1 ;
@end

