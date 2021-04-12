/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)_isSecureForRemoteViewService;
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(id)userNotificationContentExtensionContext;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_updatePreferredContentSize;
-(void)_trackChildViewController:(id)arg1 ;
-(UIViewController*<SBSUIUserNotificationContentProviding>)extensionViewController;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)setExtensionViewController:(UIViewController*<SBSUIUserNotificationContentProviding>)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)addChildViewController:(id)arg1 ;
-(void)invalidateWithCompletion:(/*^block*/id)arg1 ;
-(void)configureWithCompletion:(/*^block*/id)arg1 ;
-(void)viewDidLayoutSubviews;
@end

