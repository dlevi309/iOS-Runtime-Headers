/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMISystemResourceUsageMonitorProtocol.h>

@protocol OS_dispatch_queue;
@class HMISystemResourceUsageMonitorImpl, NSObject;

@interface HMISystemResourceUsageMonitor : HMFObject <HMISystemResourceUsageMonitorProtocol> {

	HMISystemResourceUsageMonitorImpl* _systemResourceUsageMonitorImpl;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (readonly) HMISystemResourceUsageMonitorImpl * systemResourceUsageMonitorImpl;              //@synthesize systemResourceUsageMonitorImpl=_systemResourceUsageMonitorImpl - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                          //@synthesize workQueue=_workQueue - In the implementation block
@property (__weak) id<HMISystemResourceUsageMonitorDelegate> delegate; 
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(id<HMISystemResourceUsageMonitorDelegate>)delegate;
-(void)start;
-(void)setDelegate:(id<HMISystemResourceUsageMonitorDelegate>)arg1 ;
-(id)getCurrentSystemResourceUsage;
-(HMISystemResourceUsageMonitorImpl *)systemResourceUsageMonitorImpl;
@end

