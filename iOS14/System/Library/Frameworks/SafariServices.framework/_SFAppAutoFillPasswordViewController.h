/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/_SFPasswordViewController.h>

@protocol SFPasswordPickerServiceViewControllerProtocol;
@class SFPasswordRemoteViewController, SFQueueingServiceViewControllerProxy;

@interface _SFAppAutoFillPasswordViewController : _SFPasswordViewController {

	SFPasswordRemoteViewController* _remoteViewController;
	SFQueueingServiceViewControllerProxy*<SFPasswordPickerServiceViewControllerProtocol> _serviceProxy;

}
-(id)_remoteViewController;
-(void)setAuthenticationGracePeriod:(double)arg1 ;
-(void)_sceneDidEnterBackground:(id)arg1 ;
-(void)_setUpServiceProxyIfNeeded;
-(void)remoteViewController:(id)arg1 selectedCredential:(id)arg2 ;
-(id)_connectToServiceWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)setWebViewURL:(id)arg1 ;
-(void)setRemoteAppID:(id)arg1 ;
-(void)setRemoteLocalizedAppName:(id)arg1 ;
-(void)setRemoteUnlocalizedAppName:(id)arg1 ;
-(void)setExternallyVerifiedAndApprovedSharedWebCredentialsDomains:(id)arg1 ;
-(void)authenticateToPresentInPopover:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

