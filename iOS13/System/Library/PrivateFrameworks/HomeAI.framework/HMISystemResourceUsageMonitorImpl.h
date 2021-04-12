/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMISystemResourceUsageMonitorProtocol.h>

@protocol HMISystemResourceUsageMonitorProtocol, OS_dispatch_queue;
@class NSObject;

@interface HMISystemResourceUsageMonitorImpl : HMFObject <HMISystemResourceUsageMonitorProtocol> {

	id<HMISystemResourceUsageMonitorProtocol> _resourceUsageMonitor;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (readonly) id<HMISystemResourceUsageMonitorProtocol> resourceUsageMonitor;              //@synthesize resourceUsageMonitor=_resourceUsageMonitor - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                      //@synthesize workQueue=_workQueue - In the implementation block
@property (__weak) id<HMISystemResourceUsageMonitorDelegate> delegate; 
-(id<HMISystemResourceUsageMonitorDelegate>)delegate;
-(void)setDelegate:(id<HMISystemResourceUsageMonitorDelegate>)arg1 ;
-(void)start;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)getCurrentSystemResourceUsage;
-(id)initWithProductClass:(long long)arg1 workQueue:(id)arg2 ;
-(id<HMISystemResourceUsageMonitorProtocol>)resourceUsageMonitor;
@end

