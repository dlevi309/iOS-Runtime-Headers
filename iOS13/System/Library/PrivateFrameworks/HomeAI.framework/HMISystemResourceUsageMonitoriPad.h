/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMISystemResourceUsageMonitorProtocol.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMISystemResourceUsageMonitorDelegate, OS_dispatch_queue;
@class NSObject, HMISystemResourceUsage, HMINotifydObserver, NSString;

@interface HMISystemResourceUsageMonitoriPad : HMFObject <HMISystemResourceUsageMonitorProtocol, HMFLogging> {

	BOOL _displayOn;
	BOOL _locked;
	id<HMISystemResourceUsageMonitorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMISystemResourceUsage* _currentSystemResourceUsage;
	HMINotifydObserver* _notifydObserverForDisplayState;
	HMINotifydObserver* _notifydObserverForLockState;

}

@property (__weak) id<HMISystemResourceUsageMonitorDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                           //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) HMISystemResourceUsage * currentSystemResourceUsage;              //@synthesize currentSystemResourceUsage=_currentSystemResourceUsage - In the implementation block
@property (readonly) HMINotifydObserver * notifydObserverForDisplayState;              //@synthesize notifydObserverForDisplayState=_notifydObserverForDisplayState - In the implementation block
@property (readonly) HMINotifydObserver * notifydObserverForLockState;                 //@synthesize notifydObserverForLockState=_notifydObserverForLockState - In the implementation block
@property (getter=isDisplayOn) BOOL displayOn;                                         //@synthesize displayOn=_displayOn - In the implementation block
@property (getter=isLocked) BOOL locked;                                               //@synthesize locked=_locked - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMISystemResourceUsageMonitorDelegate>)delegate;
-(void)setDelegate:(id<HMISystemResourceUsageMonitorDelegate>)arg1 ;
-(void)start;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setLocked:(BOOL)arg1 ;
-(BOOL)isLocked;
-(id)initWithWorkQueue:(id)arg1 ;
-(id)getCurrentSystemResourceUsage;
-(void)setDisplayOn:(BOOL)arg1 ;
-(BOOL)isDisplayOn;
-(void)possibleComputeResourceChange;
-(BOOL)computeResourceUsageLevel;
-(void)handleResourceUsageNotification;
-(HMINotifydObserver *)notifydObserverForDisplayState;
-(HMINotifydObserver *)notifydObserverForLockState;
-(HMISystemResourceUsage *)currentSystemResourceUsage;
@end

