/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

@class HDBackgroundTaskScheduler, HDPluginManager, HDPrimaryProfile, _HKBehavior;


@protocol HDHealthDaemon <NSObject>
@property (readonly) HDBackgroundTaskScheduler * backgroundTaskScheduler; 
@property (readonly) HDPluginManager * pluginManager; 
@property (nonatomic,readonly) HDPrimaryProfile * primaryProfile; 
@property (nonatomic,retain) id<HDNanoAlertSuppressionService> alertSuppressionService; 
@property (nonatomic,readonly) _HKBehavior * behavior; 
@required
-(_HKBehavior *)behavior;
-(HDPluginManager *)pluginManager;
-(HDPrimaryProfile *)primaryProfile;
-(void)registerForDaemonReady:(id)arg1;
-(void)registerDaemonReadyObserver:(id)arg1 queue:(id)arg2;
-(id)createXPCListenerWithMachServiceName:(id)arg1;
-(id)daemonExtensionWithIdentifier:(id)arg1;
-(void)registerForLaunchNotification:(const char*)arg1;
-(void)unregisterForLaunchNotification:(const char*)arg1;
-(id)daemonExtensionsConformingToProtocol:(id)arg1;
-(HDBackgroundTaskScheduler *)backgroundTaskScheduler;
-(id<HDNanoAlertSuppressionService>)alertSuppressionService;
-(void)setAlertSuppressionService:(id)arg1;

@end

