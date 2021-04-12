/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_SBSUICFUserNotificationContentExtensionRemoteInterface.h>

@protocol SBSUIUserNotificationContentProviding;
@class UIViewController, NSString;

@interface _SBSUICFUserNotificationContentRemoteContainerViewController : UIViewController <_SBSUICFUserNotificationContentExtensionRemoteInterface> {

	BOOL _isLegacyContentViewController;
	UIViewController*<SBSUIUserNotificationContentProviding> _extensionViewController;

}

@property (nonatomic,retain) UIViewController*<SBSUIUserNotificationContentProviding> extensionViewController;              //@synthesize extensionViewController=_extensionViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
+(BOOL)_isSecureForRemoteViewService;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)addChildViewController:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_updatePreferredContentSize;
-(BOOL)_canShowWhileLocked;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIViewController*<SBSUIUserNotificationContentProviding>)extensionViewController;
-(void)setExtensionViewController:(UIViewController*<SBSUIUserNotificationContentProviding>)arg1 ;
-(void)configureWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidateWithCompletion:(/*^block*/id)arg1 ;
-(void)_trackChildViewController:(id)arg1 ;
-(id)userNotificationContentExtensionContext;
@end

