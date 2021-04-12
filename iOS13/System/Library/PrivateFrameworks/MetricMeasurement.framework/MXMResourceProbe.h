/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/

#import <MetricMeasurement/MetricMeasurement-Structs.h>
#import <MetricMeasurement/MXMProbe.h>

@class NSThread;

@interface MXMResourceProbe : MXMProbe {

	NSThread* _pollingThread;

}

@property (retain) NSThread * pollingThread;              //@synthesize pollingThread=_pollingThread - In the implementation block
+(id)probe;
+(int)_processIdentifierWithProcessName:(const char*)arg1 error:(id*)arg2 ;
-(id)init;
-(void)_beginUpdates;
-(void)_stopUpdates;
-(BOOL)performPreIterationActions;
-(id)sampleWithTimeout:(double)arg1 stopReason:(unsigned long long*)arg2 ;
-(void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 rusage_v4:(rusage_info_v4*)arg3 ;
-(id)_pollMainBody;
-(void)setPollingThread:(NSThread *)arg1 ;
-(NSThread *)pollingThread;
-(void)_pollProcessWithData:(id)arg1 pid:(int)arg2 ;
-(void)_pollAllProcesses:(id)arg1 ;
-(void)_pollProcessResourceUsageWithData:(id)arg1 pid:(int)arg2 ;
-(void)_pollTaskMachPortInformation:(id)arg1 task:(unsigned)arg2 ;
-(void)_pollProcessNetworkingStatsWithData:(id)arg1 pid:(int)arg2 task:(unsigned)arg3 ;
-(void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 pm_networking_stats:(SCD_Struct_MX1*)arg3 ;
-(void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 rusage:(rusage_info_v4*)arg3 ;
-(void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 mach_space_basicinfo:(ipc_info_space_basic*)arg3 ;
-(void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 taskinfo:(proc_taskinfo*)arg3 ;
-(void)_pollBasicTaskInformation:(id)arg1 pid:(int)arg2 ;
@end

