/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/_SFPasswordViewController.h>

@protocol SFPasswordPickerServiceViewControllerProtocol;
@class SFPasswordRemoteViewController, SFQueueingServiceViewControllerProxy;

@interface _SFAppAutoFillPasswordViewController : _SFPasswordViewController {

	SFPasswordRemoteViewController* _remoteViewController;
	SFQueueingServiceViewControllerProxy*<SFPasswordPickerServiceViewControllerProtocol> _serviceProxy;

}
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(id)_remoteViewController;
-(void)setWebViewURL:(id)arg1 ;
-(void)setRemoteAppID:(id)arg1 ;
-(void)setRemoteLocalizedAppName:(id)arg1 ;
-(void)setRemoteUnlocalizedAppName:(id)arg1 ;
-(void)setExternallyVerifiedAndApprovedSharedWebCredentialsDomains:(id)arg1 ;
-(void)authenticateToPresentInPopover:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sceneDidEnterBackground:(id)arg1 ;
-(void)setAuthenticationGracePeriod:(double)arg1 ;
-(void)remoteViewController:(id)arg1 selectedCredential:(id)arg2 ;
-(void)_setUpServiceProxyIfNeeded;
-(id)_connectToServiceWithCompletion:(/*^block*/id)arg1 ;
@end

