/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_remoteViewController;
-(id)init;
-(void)_sceneDidEnterBackground:(id)arg1 ;
-(void)_setUpServiceProxyIfNeeded;
-(void)presentExternalPasswordCredentialRemoteViewController:(id)arg1 ;
-(void)getCredentialForExternalCredential:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_connectToServiceWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)autoFillWithExternalCredential:(id)arg1 ;
-(void)dealloc;
@end

