/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/

#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/HUIDCRemoteControllerDelegate.h>

@protocol AXIDCControllerBrowserDelegateProtocol, HUIDCManagerSecurityDelegate;
@class HUIDCSlaveController, NSString, NSNetServiceBrowser, NSMutableArray;

@interface HUIDCManager : NSObject <NSNetServiceBrowserDelegate, HUIDCRemoteControllerDelegate> {

	Class _slaveClass;
	Class _remoteClass;
	id<AXIDCControllerBrowserDelegateProtocol> _delegate;
	id<HUIDCManagerSecurityDelegate> _securityDelegate;
	long long _state;
	HUIDCSlaveController* _slaveController;
	NSString* _serviceType;
	NSNetServiceBrowser* _browser;
	NSMutableArray* _remoteControllers;

}

@property (nonatomic,retain) NSString * serviceType;                                                  //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) HUIDCSlaveController * slaveController;                                  //@synthesize slaveController=_slaveController - In the implementation block
@property (nonatomic,retain) NSNetServiceBrowser * browser;                                           //@synthesize browser=_browser - In the implementation block
@property (nonatomic,retain) NSMutableArray * remoteControllers;                                      //@synthesize remoteControllers=_remoteControllers - In the implementation block
@property (assign,nonatomic,__weak) id<AXIDCControllerBrowserDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<HUIDCManagerSecurityDelegate> securityDelegate;                //@synthesize securityDelegate=_securityDelegate - In the implementation block
@property (assign,nonatomic) long long state;                                                         //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AXIDCControllerBrowserDelegateProtocol>)delegate;
-(void)setDelegate:(id<AXIDCControllerBrowserDelegateProtocol>)arg1 ;
-(void)stop;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSString *)serviceType;
-(void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2 ;
-(void)netServiceBrowserDidStopSearch:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowserWillSearch:(id)arg1 ;
-(NSNetServiceBrowser *)browser;
-(void)setBrowser:(NSNetServiceBrowser *)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(id)initWithServiceType:(id)arg1 ;
-(id)initWithServiceType:(id)arg1 remoteClass:(Class)arg2 andSlaveClass:(Class)arg3 ;
-(Class)validateClass:(Class)arg1 isKindOfClass:(Class)arg2 ;
-(void)setSlaveController:(HUIDCSlaveController *)arg1 ;
-(void)setRemoteControllers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)remoteControllers;
-(HUIDCSlaveController *)slaveController;
-(void)sendObject:(id)arg1 toController:(id)arg2 withSendCompletion:(/*^block*/id)arg3 ;
-(BOOL)shouldBecomeMaster;
-(void)clearControllers;
-(void)resolveMasterWithCompletion:(/*^block*/id)arg1 ;
-(id)remoteControllerForHostname:(id)arg1 ;
-(void)controller:(id)arg1 didReceiveData:(id)arg2 ;
-(void)controller:(id)arg1 didFinishSendingData:(id)arg2 ;
-(void)controllerDidFinishConnecting:(id)arg1 ;
-(void)controller:(id)arg1 didCloseConnectionWithError:(id)arg2 ;
-(id<HUIDCManagerSecurityDelegate>)securityDelegate;
-(void)setSecurityDelegate:(id<HUIDCManagerSecurityDelegate>)arg1 ;
-(id)availableControllers;
-(id)availableRemoteControllers;
-(void)sendObject:(id)arg1 toAllControllersExcept:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)becomeMaster;
-(void)transitionToSlaveWithCompletion:(/*^block*/id)arg1 ;
@end

