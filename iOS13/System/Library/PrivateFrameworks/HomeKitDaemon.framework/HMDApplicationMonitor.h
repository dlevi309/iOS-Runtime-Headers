/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDApplicationMonitorDelegate, OS_dispatch_queue;
@class NSObject, NSMutableSet, BKSApplicationStateMonitor, HMDApplicationRegistry, HMFTimer, NSSet, NSString;

@interface HMDApplicationMonitor : HMFObject <HMFTimerDelegate, HMFLogging> {

	id<HMDApplicationMonitorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	NSMutableSet* _processes;
	BKSApplicationStateMonitor* _bksMonitor;
	HMDApplicationRegistry* _appRegistry;
	HMFTimer* _spiClientTerminationDelayTimer;
	NSMutableSet* _pendingTerminatedApplications;

}

@property (nonatomic,readonly) NSSet * foregroundApps; 
@property (nonatomic,readonly) NSSet * backgroundApps; 
@property (nonatomic,readonly) BOOL activeHomeKitApps; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> xpcQueue;                        //@synthesize xpcQueue=_xpcQueue - In the implementation block
@property (nonatomic,readonly) NSMutableSet * processes;                                     //@synthesize processes=_processes - In the implementation block
@property (nonatomic,retain) BKSApplicationStateMonitor * bksMonitor;                        //@synthesize bksMonitor=_bksMonitor - In the implementation block
@property (assign,nonatomic,__weak) HMDApplicationRegistry * appRegistry;                    //@synthesize appRegistry=_appRegistry - In the implementation block
@property (nonatomic,retain) HMFTimer * spiClientTerminationDelayTimer;                      //@synthesize spiClientTerminationDelayTimer=_spiClientTerminationDelayTimer - In the implementation block
@property (nonatomic,readonly) NSMutableSet * pendingTerminatedApplications;                 //@synthesize pendingTerminatedApplications=_pendingTerminatedApplications - In the implementation block
@property (assign,nonatomic,__weak) id<HMDApplicationMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(id<HMDApplicationMonitorDelegate>)delegate;
-(void)setDelegate:(id<HMDApplicationMonitorDelegate>)arg1 ;
-(id)applicationInfoForApplication:(id)arg1 ;
-(id)applicationInfoForPID:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)xpcQueue;
-(void)timerDidFire:(id)arg1 ;
-(id)activeRequests;
-(id)_activeRequests;
-(NSMutableSet *)processes;
-(HMDApplicationRegistry *)appRegistry;
-(void)setAppRegistry:(HMDApplicationRegistry *)arg1 ;
-(BKSApplicationStateMonitor *)bksMonitor;
-(void)setBksMonitor:(BKSApplicationStateMonitor *)arg1 ;
-(void)handleAppStateChangedInfo:(id)arg1 ;
-(void)tearDownMonitoringIfNotInUse;
-(void)setUpForMonitoring;
-(void)_startMonitoringApplicationStateChangesForBundleIdentifier:(id)arg1 ;
-(void)_removeProcess:(id)arg1 ;
-(void)_stopMonitoringApplicationStateChangesForBundleIdentifier:(id)arg1 ;
-(unsigned long long)_translateApplicationState:(unsigned)arg1 ;
-(BOOL)infoIsForViewService:(id)arg1 ;
-(void)_handleAppStateChangedInfo:(id)arg1 ;
-(NSMutableSet *)pendingTerminatedApplications;
-(HMFTimer *)spiClientTerminationDelayTimer;
-(void)setSpiClientTerminationDelayTimer:(HMFTimer *)arg1 ;
-(void)_callAppStateChangeDelegate:(id)arg1 ;
-(void)removeProcess:(id)arg1 ;
-(void)_postHomeUIServiceTerminatedNotification;
-(void)_postAppTerminatedNotification:(id)arg1 ;
-(id)processInfoForPID:(int)arg1 ;
-(void)_updateProcessInfo:(id)arg1 info:(id)arg2 ;
-(void)removeFromPendingTerminated:(id)arg1 ;
-(void)_processAppStateChange:(id)arg1 ;
-(BOOL)activeHomeKitApps;
-(unsigned long long)translateApplicationStateForInfo:(id)arg1 processInfo:(id)arg2 ;
-(id)foregroundAppIdentifiers;
-(void)_callActiveHomeKitAppDelegate:(BOOL)arg1 ;
-(BOOL)_delegateConformsAndRespondsToSelector:(SEL)arg1 ;
-(NSSet *)foregroundApps;
-(id)backgroundToForegroundApps;
-(id)initWithXpcQueue:(id)arg1 ;
-(void)addProcess:(id)arg1 ;
-(NSSet *)backgroundApps;
@end

