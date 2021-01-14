/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDHealthDaemon.h>

@protocol HDNanoAlertSuppressionService;
@class HDBackgroundTaskScheduler, HDMockPrimaryProfile, HDPrimaryProfile, HDPluginManager, _HKBehavior, NSString;

@interface HDMockDaemon : NSObject <HDHealthDaemon> {

	HDBackgroundTaskScheduler* backgroundTaskScheduler;
	HDMockPrimaryProfile* mockPrimaryProfile;
	HDPrimaryProfile* primaryProfile;
	HDPluginManager* pluginManager;
	id<HDNanoAlertSuppressionService> alertSuppressionService;

}

@property (nonatomic,readonly) HDMockPrimaryProfile * mockPrimaryProfile; 
@property (readonly) HDBackgroundTaskScheduler * backgroundTaskScheduler; 
@property (readonly) HDPluginManager * pluginManager; 
@property (nonatomic,readonly) HDPrimaryProfile * primaryProfile; 
@property (nonatomic,retain) id<HDNanoAlertSuppressionService> alertSuppressionService; 
@property (nonatomic,readonly) _HKBehavior * behavior; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HDPluginManager *)pluginManager;
-(id)init;
-(_HKBehavior *)behavior;
-(id<HDNanoAlertSuppressionService>)alertSuppressionService;
-(void)setAlertSuppressionService:(id<HDNanoAlertSuppressionService>)arg1 ;
-(id)daemonExtensionWithIdentifier:(id)arg1 ;
-(void)unregisterForLaunchNotification:(const char*)arg1 ;
-(void)registerForLaunchNotification:(const char*)arg1 ;
-(id)daemonExtensionsConformingToProtocol:(id)arg1 ;
-(void)registerForDaemonReady:(id)arg1 ;
-(HDBackgroundTaskScheduler *)backgroundTaskScheduler;
-(void)registerDaemonActivatedObserver:(id)arg1 queue:(id)arg2 ;
-(void)registerDaemonReadyObserver:(id)arg1 queue:(id)arg2 ;
-(HDPrimaryProfile *)primaryProfile;
-(HDMockPrimaryProfile *)mockPrimaryProfile;
@end

