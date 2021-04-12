/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@interface SAPAStyleTaskPrivateData : NSObject {

	int _suspend_count;
	int _faults;
	int _pageins;
	int _cow_faults;
	unsigned _latency_qos;
	unsigned long long _task_size_bytes;
	unsigned long long _ss_flags;
	unsigned long long _terminatedThreadsUserTimeInNs;
	unsigned long long _terminatedThreadsSystemTimeInNs;
	unsigned long long _terminatedThreadsInstructions;
	unsigned long long _terminatedThreadsCycles;

}

@property (assign) unsigned long long task_size_bytes;                              //@synthesize task_size_bytes=_task_size_bytes - In the implementation block
@property (assign) unsigned long long ss_flags;                                     //@synthesize ss_flags=_ss_flags - In the implementation block
@property (assign) int suspend_count;                                               //@synthesize suspend_count=_suspend_count - In the implementation block
@property (assign) int faults;                                                      //@synthesize faults=_faults - In the implementation block
@property (assign) int pageins;                                                     //@synthesize pageins=_pageins - In the implementation block
@property (assign) int cow_faults;                                                  //@synthesize cow_faults=_cow_faults - In the implementation block
@property (assign) unsigned latency_qos;                                            //@synthesize latency_qos=_latency_qos - In the implementation block
@property (assign) unsigned long long terminatedThreadsUserTimeInNs;                //@synthesize terminatedThreadsUserTimeInNs=_terminatedThreadsUserTimeInNs - In the implementation block
@property (assign) unsigned long long terminatedThreadsSystemTimeInNs;              //@synthesize terminatedThreadsSystemTimeInNs=_terminatedThreadsSystemTimeInNs - In the implementation block
@property (assign) unsigned long long terminatedThreadsInstructions;                //@synthesize terminatedThreadsInstructions=_terminatedThreadsInstructions - In the implementation block
@property (assign) unsigned long long terminatedThreadsCycles;                      //@synthesize terminatedThreadsCycles=_terminatedThreadsCycles - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA17*)arg1 bufferLength:(unsigned long long)arg2 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(void)setTerminatedThreadsUserTimeInNs:(unsigned long long)arg1 ;
-(void)setTerminatedThreadsSystemTimeInNs:(unsigned long long)arg1 ;
-(void)setTerminatedThreadsCycles:(unsigned long long)arg1 ;
-(void)setTerminatedThreadsInstructions:(unsigned long long)arg1 ;
-(void)setPageins:(int)arg1 ;
-(unsigned long long)task_size_bytes;
-(void)setTask_size_bytes:(unsigned long long)arg1 ;
-(unsigned long long)ss_flags;
-(void)setSs_flags:(unsigned long long)arg1 ;
-(int)suspend_count;
-(void)setSuspend_count:(int)arg1 ;
-(int)faults;
-(void)setFaults:(int)arg1 ;
-(int)pageins;
-(int)cow_faults;
-(void)setCow_faults:(int)arg1 ;
-(unsigned)latency_qos;
-(void)setLatency_qos:(unsigned)arg1 ;
-(unsigned long long)terminatedThreadsUserTimeInNs;
-(unsigned long long)terminatedThreadsSystemTimeInNs;
-(unsigned long long)terminatedThreadsInstructions;
-(unsigned long long)terminatedThreadsCycles;
@end

