/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoardServices/FBSProcessWatchdog.h>

@class RBSProcessHandle, FBProcessWatchdogEventContext, FBProcessCPUStatistics;

@interface FBProcessWatchdog : FBSProcessWatchdog {

	RBSProcessHandle* _handle;
	long long _event;
	FBProcessWatchdogEventContext* _eventContext;
	FBProcessCPUStatistics* _cpuStatistics;

}

@property (nonatomic,readonly) long long event;                                                  //@synthesize event=_event - In the implementation block
@property (nonatomic,retain,readonly) FBProcessWatchdogEventContext * eventContext;              //@synthesize eventContext=_eventContext - In the implementation block
@property (nonatomic,retain,readonly) FBProcessCPUStatistics * cpuStatistics;                    //@synthesize cpuStatistics=_cpuStatistics - In the implementation block
-(FBProcessCPUStatistics *)cpuStatistics;
-(void)activate;
-(FBProcessWatchdogEventContext *)eventContext;
-(long long)event;
-(id)initWithProcess:(id)arg1 context:(id)arg2 policy:(id)arg3 ;
@end

