/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HMSetupRemoteHost.h>
#import <libobjc.A.dylib/_UIRemoteViewControllerContaining.h>

@class _UIRemoteViewController, HMHome, HMSetupAccessoryDescription, _UIAsyncInvocation, HMSetupRemoteViewController, NSString;

@interface HMSetupViewController : UIViewController <HMSetupRemoteHost, _UIRemoteViewControllerContaining> {

	BOOL _cancelling;
	BOOL _disconnected;
	BOOL _shouldPresentWhenLoaded;
	HMHome* _home;
	HMSetupAccessoryDescription* _accessoryDescription;
	/*^block*/id _completionHandler;
	/*^block*/id _loadHandler;
	_UIAsyncInvocation* _cancelServiceInvocation;
	HMSetupRemoteViewController* _remoteViewController;

}

@property (nonatomic,retain) HMHome * home;                                                           //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HMSetupAccessoryDescription * accessoryDescription;                      //@synthesize accessoryDescription=_accessoryDescription - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentWhenLoaded;                                            //@synthesize shouldPresentWhenLoaded=_shouldPresentWhenLoaded - In the implementation block
@property (nonatomic,copy) id loadHandler;                                                            //@synthesize loadHandler=_loadHandler - In the implementation block
@property (nonatomic,retain) _UIAsyncInvocation * cancelServiceInvocation;                            //@synthesize cancelServiceInvocation=_cancelServiceInvocation - In the implementation block
@property (nonatomic,retain) HMSetupRemoteViewController * remoteViewController;                      //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,getter=isCancelling,nonatomic) BOOL cancelling;                                     //@synthesize cancelling=_cancelling - In the implementation block
@property (assign,getter=isDisconnected,nonatomic) BOOL disconnected;                                 //@synthesize disconnected=_disconnected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UIRemoteViewController * _containedRemoteViewController; 
-(id)init;
-(HMHome *)home;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(_UIRemoteViewController *)_containedRemoteViewController;
-(HMSetupRemoteViewController *)remoteViewController;
-(void)setRemoteViewController:(HMSetupRemoteViewController *)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(void)_requestRemoteViewController;
-(void)setDisconnected:(BOOL)arg1 ;
-(BOOL)isDisconnected;
-(void)accessorySetupDidFinishWithError:(id)arg1 ;
-(void)accessorySetupDidLoad;
-(void)accessorySetupDidFinishWithInfo:(id)arg1 error:(id)arg2 ;
-(void)accessorySetupDidBeginPairing;
-(void)accessorySetupDidFinishPairing;
-(void)setupFailedWithError:(id)arg1 ;
-(void)setupInterruptedWithError:(id)arg1 ;
-(id)initWithHome:(id)arg1 accessoryDescription:(id)arg2 loadHandler:(/*^block*/id)arg3 ;
-(void)setAccessoryDescription:(HMSetupAccessoryDescription *)arg1 ;
-(void)setLoadHandler:(id)arg1 ;
-(void)setCancelling:(BOOL)arg1 ;
-(void)setShouldPresentWhenLoaded:(BOOL)arg1 ;
-(void)_finishSetupWithInfo:(id)arg1 error:(id)arg2 ;
-(void)_configureAndAddRemoteViewController;
-(void)setCancelServiceInvocation:(_UIAsyncInvocation *)arg1 ;
-(HMSetupAccessoryDescription *)accessoryDescription;
-(BOOL)shouldPresentWhenLoaded;
-(void)_presentAsTopmostViewController;
-(id)loadHandler;
-(void)presentWhenLoaded;
-(BOOL)isCancelling;
-(_UIAsyncInvocation *)cancelServiceInvocation;
@end

