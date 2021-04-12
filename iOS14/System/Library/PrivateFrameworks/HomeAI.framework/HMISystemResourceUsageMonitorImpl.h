/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)initWithProductClass:(long long)arg1 workQueue:(id)arg2 ;
-(id<HMISystemResourceUsageMonitorDelegate>)delegate;
-(void)start;
-(id<HMISystemResourceUsageMonitorProtocol>)resourceUsageMonitor;
-(void)setDelegate:(id<HMISystemResourceUsageMonitorDelegate>)arg1 ;
-(id)getCurrentSystemResourceUsage;
@end

