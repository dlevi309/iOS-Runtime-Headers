/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <libobjc.A.dylib/BRReachabilityObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSHashTable, BRReachabilityMonitor, NSDate, NSMutableSet, NSMutableDictionary, br_pacer, NSMapTable, NSString;

@interface BRCSystemResourcesManager : NSObject <BRReachabilityObserver> {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	BOOL _invalidated;
	NSHashTable* _reachabilityObservers;
	BRReachabilityMonitor* _reachabilityMonitor;
	unsigned _reachabilityFlags;
	NSObject*<OS_dispatch_source> _reachabilityFlagsTimer;
	NSHashTable* _powerObservers;
	int _powerNotifyToken;
	BOOL _powerLevelOK;
	NSObject*<OS_dispatch_source> _powerLevelOKTimer;
	BOOL _connectedToPowerSource;
	NSDate* _connectedToPowerSourceCheckedDate;
	NSMutableSet* _lowDiskSet;
	NSMutableDictionary* _lowDiskDict;
	NSObject*<OS_dispatch_source> _lowDiskSource;
	NSObject*<OS_dispatch_source> _lowDiskTimer;
	NSHashTable* _lowMemoryObservers;
	NSObject*<OS_dispatch_source> _memoryNotificationEventSource;
	br_pacer* _memoryNotificationCoalescePacer;
	NSMapTable* _processObservers;
	NSHashTable* _appListObservers;

}

@property (readonly) BOOL isNetworkReachable; 
@property (readonly) unsigned reachabilityFlags; 
@property (readonly) BOOL isPowerOK; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)manager;
-(id)init;
-(void)dealloc;
-(void)close;
-(void)resume;
-(void)suspend;
-(void)reset;
-(BOOL)isNetworkReachable;
-(void)reachabilityMonitor:(id)arg1 didChangeReachabilityFlagsTo:(unsigned)arg2 ;
-(void)reachabilityMonitor:(id)arg1 didChangeReachabilityStatusTo:(BOOL)arg2 ;
-(unsigned)reachabilityFlags;
-(void)_didReceiveMemoryWarning;
-(void)addReachabilityObserver:(id)arg1 ;
-(void)removeReachabilityObserver:(id)arg1 ;
-(BOOL)connectedToPowerSource;
-(BOOL)isPowerOK;
-(BOOL)hasEnoughSpaceForDevice:(int)arg1 ;
-(void)removeLowDiskObserver:(id)arg1 forDevice:(int)arg2 ;
-(void)addLowDiskObserver:(id)arg1 forDevice:(int)arg2 ;
-(void)addProcessMonitor:(id)arg1 forProcessID:(int)arg2 ;
-(void)removeProcessMonitor:(id)arg1 ;
-(void)addAppListObserver:(id)arg1 ;
-(void)_initReachability;
-(void)_initPowerManager;
-(void)_initLowDiskManager;
-(void)_initLowMemory;
-(void)_initProcessObservers;
-(void)_initAppListObservers;
-(void)_initXPCFSEvents;
-(void)_invalidateReachability;
-(void)_invalidatePowerManager;
-(void)_invalidateLowDiskManager;
-(void)_invalidateLowMemory;
-(void)_invalidateProcessObservers;
-(void)_invalidateAppListObservers;
-(void)_resetReachability;
-(void)_resetPowerManager;
-(void)_resetLowDiskManager;
-(void)_setReachabilityFlagsWithCoalescing:(unsigned)arg1 ;
-(void)_setReachabilityFlags:(unsigned)arg1 ;
-(void)__resetReachability;
-(void)_setPowerLevelWithCoalescing:(BOOL)arg1 ;
-(void)_setPowerLevel:(BOOL)arg1 ;
-(void)_processLowDiskNotification:(BOOL)arg1 ;
-(void)_invalidateProcessMonitorObject:(id)arg1 ;
-(id)_createMonitoringObjectForProcessID:(int)arg1 observer:(id)arg2 ;
-(void)addPowerObserver:(id)arg1 ;
-(void)removePowerObserver:(id)arg1 ;
-(void)addLowMemoryObserver:(id)arg1 ;
-(void)removeLowMemoryObserver:(id)arg1 ;
-(void)removeAppListObserver:(id)arg1 ;
@end

