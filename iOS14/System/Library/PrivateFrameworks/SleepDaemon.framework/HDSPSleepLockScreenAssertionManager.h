/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <libobjc.A.dylib/HKSPSleepLockScreenServer.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>

@protocol HDSPSleepLockScreenAssertionManagerDelegate;
@class NSXPCListener, NSXPCConnection, HDSPEnvironment, SBSLockScreenRemoteContentAssertion, NSString;

@interface HDSPSleepLockScreenAssertionManager : NSObject <HKSPSleepLockScreenServer, NSXPCListenerDelegate, HDSPEnvironmentAware> {

	NSXPCListener* _listener;
	NSXPCConnection* _connection;
	HDSPEnvironment* _environment;
	id<HDSPSleepLockScreenAssertionManagerDelegate> _delegate;
	SBSLockScreenRemoteContentAssertion* _lockScreenAssertion;

}

@property (nonatomic,readonly) SBSLockScreenRemoteContentAssertion * lockScreenAssertion;                  //@synthesize lockScreenAssertion=_lockScreenAssertion - In the implementation block
@property (assign,nonatomic,__weak) id<HDSPSleepLockScreenAssertionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                                       //@synthesize environment=_environment - In the implementation block
-(id<HDSPSleepLockScreenAssertionManagerDelegate>)delegate;
-(void)connect;
-(void)setDelegate:(id<HDSPSleepLockScreenAssertionManagerDelegate>)arg1 ;
-(id)initWithEnvironment:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(HDSPEnvironment *)environment;
-(void)didDismissWithReason:(long long)arg1 ;
-(void)invalidateAssertion;
-(void)takeAssertionIfNeeded;
-(void)sendLockScreenState:(long long)arg1 userInfo:(id)arg2 ;
-(SBSLockScreenRemoteContentAssertion *)lockScreenAssertion;
@end

