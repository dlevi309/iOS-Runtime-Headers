/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotificationsUI.framework/UserNotificationsUI
*/

#import <UserNotificationsUI/UserNotificationsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_UNNotificationContentExtensionContainer.h>

@protocol UNNotificationContentExtension;
@class UIScrollViewDelayedTouchesBeganGestureRecognizer, UIViewController, NSString;

@interface _UNNotificationContentExtensionViewController : UIViewController <_UNNotificationContentExtensionContainer> {

	atomic_flag _invalidationOnceFlag;
	UIScrollViewDelayedTouchesBeganGestureRecognizer* _touchDelayGestureRecognizer;
	UIViewController*<UNNotificationContentExtension> _extensionViewController;

}

@property (nonatomic,retain) UIViewController*<UNNotificationContentExtension> extensionViewController;              //@synthesize extensionViewController=_extensionViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isSecureForRemoteViewService;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id)_extensionBundleIdentifier;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_willAppearInRemoteViewController:(id)arg1 ;
-(UIViewController*<UNNotificationContentExtension>)extensionViewController;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(BOOL)_shouldForwardSystemLayoutFittingSizeChanges;
-(void)viewDidLoad;
-(void)setExtensionViewController:(UIViewController*<UNNotificationContentExtension>)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)addChildViewController:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)delayed:(id)arg1 ;
-(void)loadView;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)preserveInputViews;
-(void)restoreInputViews;
-(void)_setupExtensionViewController:(id)arg1 ;
-(void)_invalidateExtensionContext;
-(id)notificationExtensionVendorContext;
@end

