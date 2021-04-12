/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/


#import <PASampling/PASampling-Structs.h>
@interface PAHIDStep : NSObject {

	unsigned _debugid;
	int _pid;
	double _timestamp;
	unsigned long long _tid;

}

@property (readonly) unsigned debugid;                    //@synthesize debugid=_debugid - In the implementation block
@property (readonly) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) int pid;                             //@synthesize pid=_pid - In the implementation block
@property (readonly) unsigned long long tid;              //@synthesize tid=_tid - In the implementation block
+(id)hidStepWithKTraceEvent:(trace_point*)arg1 fromSession:(ktrace_sessionRef)arg2 ;
-(id)debugDescription;
-(unsigned long long)tid;
-(double)timestamp;
-(int)pid;
-(unsigned)debugid;
-(id)initWithTimestamp:(double)arg1 debugID:(unsigned)arg2 pid:(int)arg3 tid:(unsigned long long)arg4 ;
-(id)initWithKTraceEvent:(trace_point*)arg1 fromSession:(ktrace_sessionRef)arg2 ;
@end

