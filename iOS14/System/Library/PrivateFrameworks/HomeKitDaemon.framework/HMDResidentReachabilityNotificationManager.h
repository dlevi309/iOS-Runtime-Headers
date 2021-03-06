/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_queue;
@class HMDResidentReachabilityContext, HMDHome, HMDRemoteDeviceMonitor, HMDBulletinBoard, NSObject, HMFTimer, NSString;

@interface HMDResidentReachabilityNotificationManager : HMFObject <HMFLogging, HMFTimerDelegate> {

	BOOL _hasCameraConfiguredForRecording;
	BOOL _notificationEnabled;
	HMDResidentReachabilityContext* _reachabilityContext;
	HMDHome* _home;
	HMDRemoteDeviceMonitor* _deviceMonitor;
	/*^block*/id _timerFactory;
	HMDBulletinBoard* _bulletinBoard;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFTimer* _notificationDebounceTimer;

}

@property (__weak,readonly) HMDHome * home;                                                                //@synthesize home=_home - In the implementation block
@property (__weak,readonly) HMDRemoteDeviceMonitor * deviceMonitor;                                        //@synthesize deviceMonitor=_deviceMonitor - In the implementation block
@property (readonly) BOOL hasReachableResidentSupportingCameraRecording; 
@property (readonly) BOOL hasCameraConfiguredForRecording;                                                 //@synthesize hasCameraConfiguredForRecording=_hasCameraConfiguredForRecording - In the implementation block
@property (readonly) BOOL anyEnabledResidentSupportsCameraRecordingReachabilityNotifications; 
@property (readonly) BOOL isCameraReachabilityNotificationDisabledForAllSettings; 
@property (copy,readonly) id timerFactory;                                                                 //@synthesize timerFactory=_timerFactory - In the implementation block
@property (readonly) HMDBulletinBoard * bulletinBoard;                                                     //@synthesize bulletinBoard=_bulletinBoard - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                               //@synthesize workQueue=_workQueue - In the implementation block
@property (retain) HMFTimer * notificationDebounceTimer;                                                   //@synthesize notificationDebounceTimer=_notificationDebounceTimer - In the implementation block
@property (retain) HMDResidentReachabilityContext * reachabilityContext;                                   //@synthesize reachabilityContext=_reachabilityContext - In the implementation block
@property (assign) BOOL notificationEnabled;                                                               //@synthesize notificationEnabled=_notificationEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)timerDidFire:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)logIdentifier;
-(void)setNotificationEnabled:(BOOL)arg1 ;
-(HMDHome *)home;
-(id)initWithResidentReachabilityContext:(id)arg1 workQueue:(id)arg2 ;
-(HMDRemoteDeviceMonitor *)deviceMonitor;
-(void)configureWithHome:(id)arg1 deviceMonitor:(id)arg2 ;
-(HMDResidentReachabilityContext *)reachabilityContext;
-(id)timerFactory;
-(HMDBulletinBoard *)bulletinBoard;
-(id)initWithResidentReachabilityContext:(id)arg1 workQueue:(id)arg2 timerFactory:(/*^block*/id)arg3 bulletinBoard:(id)arg4 ;
-(void)configureWithHome:(id)arg1 deviceMonitor:(id)arg2 notificationCenter:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_startDebounceTimer;
-(void)_handleCameraProfileSettingsDidChange:(id)arg1 ;
-(void)_handleCameraProfileUnconfigured:(id)arg1 ;
-(void)_handleResidentUpdated:(id)arg1 ;
-(void)_handleResidentAdded:(id)arg1 ;
-(void)_handleResidentRemoved:(id)arg1 ;
-(void)_handleNetworkReachabilityChange:(id)arg1 ;
-(BOOL)isCameraReachabilityNotificationDisabledForAllSettings;
-(void)updateNotificationEnabled;
-(void)setNotificationDebounceTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)notificationDebounceTimer;
-(BOOL)anyEnabledResidentSupportsCameraRecordingReachabilityNotifications;
-(void)setReachabilityContext:(HMDResidentReachabilityContext *)arg1 ;
-(void)_evaluateReachabilityBulletin;
-(BOOL)notificationEnabled;
-(BOOL)hasReachableResidentSupportingCameraRecording;
-(BOOL)shouldPostReachableNotification;
-(BOOL)shouldPostUnreachableNotification;
-(BOOL)hasCameraConfiguredForRecording;
@end

