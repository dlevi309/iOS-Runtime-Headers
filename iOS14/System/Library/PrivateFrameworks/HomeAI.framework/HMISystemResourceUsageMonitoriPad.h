/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isLocked;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id<HMISystemResourceUsageMonitorDelegate>)delegate;
-(void)start;
-(void)setDelegate:(id<HMISystemResourceUsageMonitorDelegate>)arg1 ;
-(void)setLocked:(BOOL)arg1 ;
-(id)getCurrentSystemResourceUsage;
-(BOOL)isDisplayOn;
-(id)initWithWorkQueue:(id)arg1 ;
-(void)setDisplayOn:(BOOL)arg1 ;
-(void)possibleComputeResourceChange;
-(BOOL)computeResourceUsageLevel;
-(void)handleResourceUsageNotification;
-(HMINotifydObserver *)notifydObserverForDisplayState;
-(HMINotifydObserver *)notifydObserverForLockState;
-(HMISystemResourceUsage *)currentSystemResourceUsage;
@end

