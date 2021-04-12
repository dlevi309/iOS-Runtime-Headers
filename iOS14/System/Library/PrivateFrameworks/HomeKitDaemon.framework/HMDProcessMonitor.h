/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMFLocking, OS_dispatch_queue;
@class RBSProcessMonitor, NSMutableSet, NSObject, HMFTimer, NSArray, NSString;

@interface HMDProcessMonitor : HMFObject <HMFLogging, HMFTimerDelegate> {

	id<HMFLocking> _lock;
	RBSProcessMonitor* _internal;
	NSMutableSet* _processes;
	BOOL _activeHomeKitApps;
	NSObject*<OS_dispatch_queue> _xpcListenerQueue;
	HMFTimer* _spiClientTerminationDelayTimer;
	NSMutableSet* _pendingTerminatedApplications;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> xpcListenerQueue;              //@synthesize xpcListenerQueue=_xpcListenerQueue - In the implementation block
@property (nonatomic,retain) HMFTimer * spiClientTerminationDelayTimer;                    //@synthesize spiClientTerminationDelayTimer=_spiClientTerminationDelayTimer - In the implementation block
@property (nonatomic,readonly) NSMutableSet * pendingTerminatedApplications;               //@synthesize pendingTerminatedApplications=_pendingTerminatedApplications - In the implementation block
@property (copy,readonly) NSArray * processes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)timerDidFire:(id)arg1 ;
-(id)init;
-(NSArray *)processes;
-(void)_removeProcess:(id)arg1 ;
-(void)dealloc;
-(void)removeProcess:(id)arg1 ;
-(id)initWithXpcListenerQueue:(id)arg1 ;
-(id)processInfoForConnection:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)xpcListenerQueue;
-(void)updateApplicationMonitor;
-(NSMutableSet *)pendingTerminatedApplications;
-(HMFTimer *)spiClientTerminationDelayTimer;
-(void)setSpiClientTerminationDelayTimer:(HMFTimer *)arg1 ;
-(void)_processAppStateChange:(id)arg1 ;
-(id)processInfoForPID:(int)arg1 ;
-(void)removeFromPendingTerminated:(id)arg1 ;
@end

