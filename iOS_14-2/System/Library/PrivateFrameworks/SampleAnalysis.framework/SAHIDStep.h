/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


@class SATimestamp;

@interface SAHIDStep : NSObject {

	unsigned _debugid;
	int _pid;
	SATimestamp* _timestamp;
	unsigned long long _tid;

}

@property (readonly) unsigned debugid;                     //@synthesize debugid=_debugid - In the implementation block
@property (readonly) SATimestamp * timestamp; 
@property (readonly) int pid;                              //@synthesize pid=_pid - In the implementation block
@property (readonly) unsigned long long tid;               //@synthesize tid=_tid - In the implementation block
-(unsigned long long)tid;
-(int)pid;
-(SATimestamp *)timestamp;
-(id)debugDescription;
-(unsigned)debugid;
@end

