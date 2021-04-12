/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/UserNotificationsUI.framework/UserNotificationsUI
*/

#import <UserNotificationsUI/UserNotificationsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_UNNotificationExtensionRemoteInterface.h>

@protocol UNNotificationContentExtension, _UNNotificationExtensionHostInterface;
@class UIScrollViewDelayedTouchesBeganGestureRecognizer, UIViewController;

@interface _UNNotificationExtensionRemoteViewController : UIViewController <_UNNotificationExtensionRemoteInterface> {

	atomic_flag _invalidationOnceFlag;
	UIScrollViewDelayedTouchesBeganGestureRecognizer* _touchDelayGestureRecognizer;
	BOOL _didCheckActionResponseDelegate;
	UIViewController*<UNNotificationContentExtension> _extensionViewController;
	id<_UNNotificationExtensionHostInterface> _hostService;

}

@property (nonatomic,retain) UIViewController*<UNNotificationContentExtension> extensionViewController;              //@synthesize extensionViewController=_extensionViewController - In the implementation block
@property (nonatomic,retain) id<_UNNotificationExtensionHostInterface> hostService;                                  //@synthesize hostService=_hostService - In the implementation block
@property (assign,nonatomic) BOOL didCheckActionResponseDelegate;                                                    //@synthesize didCheckActionResponseDelegate=_didCheckActionResponseDelegate - In the implementation block
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
+(BOOL)_isSecureForRemoteViewService;
-(void)dealloc;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)addChildViewController:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 ;
-(BOOL)_shouldForwardSystemLayoutFittingSizeChanges;
-(void)_restoreInputViews;
-(void)_willAppearInRemoteViewController:(id)arg1 ;
-(void)delayed:(id)arg1 ;
-(UIViewController*<UNNotificationContentExtension>)extensionViewController;
-(void)setExtensionViewController:(UIViewController*<UNNotificationContentExtension>)arg1 ;
-(id)_extensionBundleIdentifier;
-(id<_UNNotificationExtensionHostInterface>)hostService;
-(void)setHostService:(id<_UNNotificationExtensionHostInterface>)arg1 ;
-(void)_didReceiveNotification:(id)arg1 ;
-(void)_didReceiveNotificationResponse:(id)arg1 ;
-(void)_preserveInputViews;
-(void)_updateMediaPlayPauseButton;
-(void)_mediaPlay;
-(void)_mediaPause;
-(void)_setupExtensionViewController:(id)arg1 ;
-(void)_invalidateExtensionContext;
-(id)notificationExtensionContext;
-(BOOL)didCheckActionResponseDelegate;
-(void)setDidCheckActionResponseDelegate:(BOOL)arg1 ;
-(void)_performSelectorOnExtension:(SEL)arg1 ;
@end

