/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/_SFPasswordViewController.h>
#import <libobjc.A.dylib/SFExternalPasswordCredentialRemoteViewControllerDelegate.h>

@protocol SFExternalPasswordCredentialServiceViewControllerProtocol;
@class SFExternalPasswordCredentialRemoteViewController, SFQueueingServiceViewControllerProxy, NSString;

@interface _SFExternalPasswordCredentialViewController : _SFPasswordViewController <SFExternalPasswordCredentialRemoteViewControllerDelegate> {

	SFExternalPasswordCredentialRemoteViewController* _remoteViewController;
	SFQueueingServiceViewControllerProxy*<SFExternalPasswordCredentialServiceViewControllerProtocol> _serviceProxy;

}

@property (assign,nonatomic,__weak) id<_SFExternalPasswordCredentialViewControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(id)_remoteViewController;
-(void)autoFillWithExternalCredential:(id)arg1 ;
-(void)_sceneDidEnterBackground:(id)arg1 ;
-(void)_setUpServiceProxyIfNeeded;
-(void)presentExternalPasswordCredentialRemoteViewController:(id)arg1 ;
-(void)getCredentialForExternalCredential:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_connectToServiceWithCompletion:(/*^block*/id)arg1 ;
@end

