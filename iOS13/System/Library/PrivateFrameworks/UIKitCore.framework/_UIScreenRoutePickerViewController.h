/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIAlertControllerContaining.h>

@protocol OS_dispatch_semaphore;
@class UIAlertController, _UIResilientRemoteViewContainerViewController, NSObject, NSString;

@interface _UIScreenRoutePickerViewController : UIViewController <UIAlertControllerContaining> {

	UIAlertController* _alertController;
	_UIResilientRemoteViewContainerViewController* _childViewController;
	NSObject*<OS_dispatch_semaphore> _remoteViewControllerSemaphore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)_containedAlertController;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(BOOL)_requiresCustomPresentationController;
-(long long)modalPresentationStyle;
-(void)_commonInitWithCompletion:(/*^block*/id)arg1 ;
-(void)_setChildViewController:(id)arg1 ;
-(id)remoteViewController;
-(void)disconnectRoute;
-(void)setCurrentOutputDeviceEnabled:(BOOL)arg1 ;
@end

