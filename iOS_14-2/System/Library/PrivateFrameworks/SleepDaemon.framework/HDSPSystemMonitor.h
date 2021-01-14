/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/HDSPSystemReadyDelegate.h>
#import <libobjc.A.dylib/HDSPDiagnosticsProvider.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>

@protocol HDSPSystemReadyDelegate, HDSPSystemReadyProvider;
@class HDSPEnvironment, HDSPDeviceUnlockMonitor, HDSPDevicePowerMonitor, HDSPApplicationWorkspaceMonitor, HDSPWatchOnWristMonitor, NSString;

@interface HDSPSystemMonitor : NSObject <HDSPSystemReadyDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware> {

	BOOL _systemReady;
	os_unfair_lock_s _systemMonitorLock;
	HDSPEnvironment* _environment;
	id<HDSPSystemReadyDelegate> _delegate;
	HDSPDeviceUnlockMonitor* _deviceUnlockMonitor;
	HDSPDevicePowerMonitor* _devicePowerMonitor;
	HDSPApplicationWorkspaceMonitor* _applicationWorkspaceMonitor;
	HDSPWatchOnWristMonitor* _watchOnWristMonitor;
	id<HDSPSystemReadyProvider> _systemReadyProvider;

}

@property (nonatomic,readonly) id<HDSPSystemReadyProvider> systemReadyProvider;                            //@synthesize systemReadyProvider=_systemReadyProvider - In the implementation block
@property (nonatomic,readonly) BOOL systemReady;                                                           //@synthesize systemReady=_systemReady - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s systemMonitorLock;                                         //@synthesize systemMonitorLock=_systemMonitorLock - In the implementation block
@property (assign,nonatomic,__weak) id<HDSPSystemReadyDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HDSPDeviceUnlockMonitor * deviceUnlockMonitor;                              //@synthesize deviceUnlockMonitor=_deviceUnlockMonitor - In the implementation block
@property (nonatomic,readonly) HDSPDevicePowerMonitor * devicePowerMonitor;                                //@synthesize devicePowerMonitor=_devicePowerMonitor - In the implementation block
@property (nonatomic,readonly) HDSPApplicationWorkspaceMonitor * applicationWorkspaceMonitor;              //@synthesize applicationWorkspaceMonitor=_applicationWorkspaceMonitor - In the implementation block
@property (nonatomic,readonly) HDSPWatchOnWristMonitor * watchOnWristMonitor;                              //@synthesize watchOnWristMonitor=_watchOnWristMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                                       //@synthesize environment=_environment - In the implementation block
+(id)_platformSpecificReadyProviderForEnvironment:(id)arg1 ;
-(id)diagnosticInfo;
-(BOOL)systemReady;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(HDSPDevicePowerMonitor *)devicePowerMonitor;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(HDSPDeviceUnlockMonitor *)deviceUnlockMonitor;
-(id<HDSPSystemReadyDelegate>)delegate;
-(void)_withLock:(/*^block*/id)arg1 ;
-(void)systemDidBecomeReady;
-(HDSPApplicationWorkspaceMonitor *)applicationWorkspaceMonitor;
-(id)initWithEnvironment:(id)arg1 watchOnWristMonitor:(id)arg2 devicePowerMonitor:(id)arg3 deviceUnlockMonitor:(id)arg4 systemReadyProvider:(id)arg5 applicationWorkspaceMonitor:(id)arg6 ;
-(BOOL)isSystemReady;
-(void)setDelegate:(id<HDSPSystemReadyDelegate>)arg1 ;
-(id)initWithEnvironment:(id)arg1 ;
-(id)diagnosticDescription;
-(id)initWithEnvironment:(id)arg1 watchOnWristMonitor:(id)arg2 devicePowerMonitor:(id)arg3 deviceUnlockMonitor:(id)arg4 ;
-(HDSPWatchOnWristMonitor *)watchOnWristMonitor;
-(HDSPEnvironment *)environment;
-(os_unfair_lock_s)systemMonitorLock;
-(id<HDSPSystemReadyProvider>)systemReadyProvider;
@end

