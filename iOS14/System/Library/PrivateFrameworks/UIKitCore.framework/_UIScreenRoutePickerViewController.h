/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)remoteViewController;
-(id)init;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(long long)modalPresentationStyle;
-(void)disconnectRoute;
-(void)setCurrentOutputDeviceEnabled:(BOOL)arg1 ;
-(BOOL)_requiresCustomPresentationController;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(void)_commonInitWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_containedAlertController;
-(void)_setChildViewController:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

