/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HMUserManagementRemoteHost.h>

@class HMHome, _UIAsyncInvocation, HMAddUserRemoteViewController;

@interface HMAddUserViewController : UIViewController <HMUserManagementRemoteHost> {

	BOOL _shouldPresentWhenLoaded;
	HMHome* _home;
	/*^block*/id _completionHandler;
	/*^block*/id _loadHandler;
	_UIAsyncInvocation* _cancelServiceInvocation;
	HMAddUserRemoteViewController* _remoteViewController;

}

@property (nonatomic,retain) HMHome * home;                                                     //@synthesize home=_home - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentWhenLoaded;                                      //@synthesize shouldPresentWhenLoaded=_shouldPresentWhenLoaded - In the implementation block
@property (nonatomic,copy) id loadHandler;                                                      //@synthesize loadHandler=_loadHandler - In the implementation block
@property (nonatomic,retain) _UIAsyncInvocation * cancelServiceInvocation;                      //@synthesize cancelServiceInvocation=_cancelServiceInvocation - In the implementation block
@property (nonatomic,retain) HMAddUserRemoteViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                //@synthesize completionHandler=_completionHandler - In the implementation block
-(HMAddUserRemoteViewController *)remoteViewController;
-(void)setCompletionHandler:(id)arg1 ;
-(id)loadHandler;
-(void)setLoadHandler:(id)arg1 ;
-(void)_requestRemoteViewController;
-(void)setShouldPresentWhenLoaded:(BOOL)arg1 ;
-(void)_configureAndAddRemoteViewController;
-(void)setCancelServiceInvocation:(_UIAsyncInvocation *)arg1 ;
-(BOOL)shouldPresentWhenLoaded;
-(void)_presentAsTopmostViewController;
-(void)presentWhenLoaded;
-(_UIAsyncInvocation *)cancelServiceInvocation;
-(void)_finishSetupWithError:(id)arg1 ;
-(id)initWithHome:(id)arg1 loadHandler:(/*^block*/id)arg2 ;
-(id)completionHandler;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setRemoteViewController:(HMAddUserRemoteViewController *)arg1 ;
-(BOOL)shouldAutorotate;
-(void)viewDidLoad;
-(void)userManagementDidFinishWithError:(id)arg1 ;
-(void)userManagementDidLoad;
-(void)setHome:(HMHome *)arg1 ;
-(HMHome *)home;
@end

