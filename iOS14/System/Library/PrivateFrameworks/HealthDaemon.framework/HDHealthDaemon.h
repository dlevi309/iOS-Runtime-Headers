/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HDPluginManager *)pluginManager;
-(_HKBehavior *)behavior;
-(id<HDNanoAlertSuppressionService>)alertSuppressionService;
-(void)setAlertSuppressionService:(id)arg1;
-(id)daemonExtensionWithIdentifier:(id)arg1;
-(void)unregisterForLaunchNotification:(const char*)arg1;
-(void)registerForLaunchNotification:(const char*)arg1;
-(id)daemonExtensionsConformingToProtocol:(id)arg1;
-(void)registerForDaemonReady:(id)arg1;
-(HDBackgroundTaskScheduler *)backgroundTaskScheduler;
-(void)registerDaemonActivatedObserver:(id)arg1 queue:(id)arg2;
-(void)registerDaemonReadyObserver:(id)arg1 queue:(id)arg2;
-(HDPrimaryProfile *)primaryProfile;

@end

