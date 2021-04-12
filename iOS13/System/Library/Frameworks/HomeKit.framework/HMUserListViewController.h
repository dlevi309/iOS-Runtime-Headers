/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HMUserManagementRemoteHost.h>

@class HMHome, _UIAsyncInvocation, HMUserListRemoteViewController;

@interface HMUserListViewController : UIViewController <HMUserManagementRemoteHost> {

	BOOL _shouldPresentWhenLoaded;
	HMHome* _home;
	/*^block*/id _completionHandler;
	/*^block*/id _loadHandler;
	_UIAsyncInvocation* _cancelServiceInvocation;
	HMUserListRemoteViewController* _remoteViewController;

}

@property (nonatomic,retain) HMHome * home;                                                      //@synthesize home=_home - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentWhenLoaded;                                       //@synthesize shouldPresentWhenLoaded=_shouldPresentWhenLoaded - In the implementation block
@property (nonatomic,copy) id loadHandler;                                                       //@synthesize loadHandler=_loadHandler - In the implementation block
@property (nonatomic,retain) _UIAsyncInvocation * cancelServiceInvocation;                       //@synthesize cancelServiceInvocation=_cancelServiceInvocation - In the implementation block
@property (nonatomic,retain) HMUserListRemoteViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                 //@synthesize completionHandler=_completionHandler - In the implementation block
-(HMHome *)home;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(HMUserListRemoteViewController *)remoteViewController;
-(void)setRemoteViewController:(HMUserListRemoteViewController *)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(void)_requestRemoteViewController;
-(void)userManagementDidFinishWithError:(id)arg1 ;
-(void)userManagementDidLoad;
-(void)setLoadHandler:(id)arg1 ;
-(void)setShouldPresentWhenLoaded:(BOOL)arg1 ;
-(void)_configureAndAddRemoteViewController;
-(void)setCancelServiceInvocation:(_UIAsyncInvocation *)arg1 ;
-(BOOL)shouldPresentWhenLoaded;
-(void)_presentAsTopmostViewController;
-(id)loadHandler;
-(void)presentWhenLoaded;
-(_UIAsyncInvocation *)cancelServiceInvocation;
-(void)_finishSetupWithError:(id)arg1 ;
-(id)initWithHome:(id)arg1 loadHandler:(/*^block*/id)arg2 ;
@end

