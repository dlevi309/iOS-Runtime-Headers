/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@class SATimestamp;

@interface SAHIDStep : NSObject {

	unsigned _debugid;
	int _pid;
	SATimestamp* _timestamp;
	unsigned long long _tid;

}

@property (retain) SATimestamp * timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned debugid;                    //@synthesize debugid=_debugid - In the implementation block
@property (readonly) int pid;                             //@synthesize pid=_pid - In the implementation block
@property (readonly) unsigned long long tid;              //@synthesize tid=_tid - In the implementation block
+(id)hidStepWithKTraceEvent:(trace_point*)arg1 fromSession:(ktrace_sessionRef)arg2 ;
+(id)hidStepWithDebugId:(unsigned)arg1 pid:(int)arg2 tid:(unsigned long long)arg3 ;
-(id)debugDescription;
-(unsigned long long)tid;
-(SATimestamp *)timestamp;
-(void)setTimestamp:(SATimestamp *)arg1 ;
-(int)pid;
-(unsigned)debugid;
-(id)initWithTimestamp:(id)arg1 debugID:(unsigned)arg2 pid:(int)arg3 tid:(unsigned long long)arg4 ;
-(id)initWithKTraceEvent:(trace_point*)arg1 fromSession:(ktrace_sessionRef)arg2 ;
@end

