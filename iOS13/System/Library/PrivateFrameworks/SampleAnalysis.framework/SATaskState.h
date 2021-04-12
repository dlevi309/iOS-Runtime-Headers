/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>

@class SATimestamp, NSSet, NSString;

@interface SATaskState : NSObject <SASerializable> {

	unsigned _suspendCount;
	unsigned _faults;
	unsigned _pageins;
	unsigned _cowFaults;
	unsigned _latencyQos;
	SATimestamp* _startTimestamp;
	SATimestamp* _endTimestamp;
	unsigned long long _startSampleIndex;
	unsigned long long _endSampleIndex;
	unsigned long long _taskSizeInBytes;
	unsigned long long _terminatedThreadsUserTimeInNs;
	unsigned long long _terminatedThreadsSystemTimeInNs;
	unsigned long long _terminatedThreadsInstructions;
	unsigned long long _terminatedThreadsCycles;
	NSSet* _donatingUniquePids;
	unsigned long long _ssFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) SATimestamp * startTimestamp;                                    //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (retain) SATimestamp * endTimestamp;                                      //@synthesize endTimestamp=_endTimestamp - In the implementation block
@property (assign) unsigned long long startSampleIndex;                             //@synthesize startSampleIndex=_startSampleIndex - In the implementation block
@property (assign) unsigned long long endSampleIndex;                               //@synthesize endSampleIndex=_endSampleIndex - In the implementation block
@property (assign) unsigned suspendCount;                                           //@synthesize suspendCount=_suspendCount - In the implementation block
@property (assign) unsigned long long taskSizeInBytes;                              //@synthesize taskSizeInBytes=_taskSizeInBytes - In the implementation block
@property (assign) unsigned faults;                                                 //@synthesize faults=_faults - In the implementation block
@property (assign) unsigned pageins;                                                //@synthesize pageins=_pageins - In the implementation block
@property (assign) unsigned cowFaults;                                              //@synthesize cowFaults=_cowFaults - In the implementation block
@property (assign) unsigned latencyQos;                                             //@synthesize latencyQos=_latencyQos - In the implementation block
@property (assign) unsigned long long terminatedThreadsUserTimeInNs;                //@synthesize terminatedThreadsUserTimeInNs=_terminatedThreadsUserTimeInNs - In the implementation block
@property (assign) unsigned long long terminatedThreadsSystemTimeInNs;              //@synthesize terminatedThreadsSystemTimeInNs=_terminatedThreadsSystemTimeInNs - In the implementation block
@property (assign) unsigned long long terminatedThreadsInstructions;                //@synthesize terminatedThreadsInstructions=_terminatedThreadsInstructions - In the implementation block
@property (assign) unsigned long long terminatedThreadsCycles;                      //@synthesize terminatedThreadsCycles=_terminatedThreadsCycles - In the implementation block
@property (retain) NSSet * donatingUniquePids;                                      //@synthesize donatingUniquePids=_donatingUniquePids - In the implementation block
@property (assign) unsigned long long ssFlags;                                      //@synthesize ssFlags=_ssFlags - In the implementation block
@property (readonly) BOOL isSuspended; 
@property (readonly) unsigned long long terminatedThreadsCpuTimeNs; 
@property (readonly) BOOL isTaskResourceFlagged; 
@property (readonly) BOOL isTerminatedSnapshot; 
@property (readonly) BOOL isPidSuspended; 
@property (readonly) BOOL isFrozen; 
@property (readonly) BOOL isDarwinBG; 
@property (readonly) BOOL isDarwinExtBG; 
@property (readonly) BOOL isVisible; 
@property (readonly) BOOL isNonVisible; 
@property (readonly) BOOL isForeground; 
@property (readonly) BOOL isBoosted; 
@property (readonly) BOOL isSuppressed; 
@property (readonly) BOOL isTimerThrottled; 
@property (readonly) BOOL isImpDonor; 
@property (readonly) BOOL isLiveImpDonor; 
@property (readonly) BOOL isDirty; 
@property (readonly) BOOL wqExceededConstrainedThreadLimit; 
@property (readonly) BOOL wqExceededTotalThreadLimit; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA43*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)stateWithKCDataTask:(const task_snapshot_v2*)arg1 terminatedThreadsInstructionCycles:(const instrs_cycles_snapshot*)arg2 machTimebase:(mach_timebase_info)arg3 donatingUniquePids:(id)arg4 startTimestamp:(id)arg5 endTimestamp:(id)arg6 startSampleIndex:(unsigned long long)arg7 endSampleIndex:(unsigned long long)arg8 ;
+(id)stateWithKCDataDeltaTask:(const task_delta_snapshot_v2*)arg1 terminatedThreadsInstructionCycles:(const instrs_cycles_snapshot*)arg2 machTimebase:(mach_timebase_info)arg3 donatingUniquePids:(id)arg4 startTimestamp:(id)arg5 endTimestamp:(id)arg6 startSampleIndex:(unsigned long long)arg7 endSampleIndex:(unsigned long long)arg8 ;
+(id)stateWithStackshotTaskV1:(const task_snapshot*)arg1 machTimebase:(mach_timebase_info)arg2 startTimestamp:(id)arg3 endTimestamp:(id)arg4 startSampleIndex:(unsigned long long)arg5 endSampleIndex:(unsigned long long)arg6 ;
+(id)stateWithStartTimestamp:(id)arg1 endTimestamp:(id)arg2 startSampleIndex:(unsigned long long)arg3 endSampleIndex:(unsigned long long)arg4 ;
+(id)stateWithPAStyleTaskPrivateData:(id)arg1 donatingUniquePids:(id)arg2 ;
-(BOOL)isSuspended;
-(unsigned)suspendCount;
-(BOOL)isFrozen;
-(BOOL)isDirty;
-(BOOL)isVisible;
-(void)setSuspendCount:(unsigned)arg1 ;
-(BOOL)isForeground;
-(void)setStartTimestamp:(SATimestamp *)arg1 ;
-(SATimestamp *)startTimestamp;
-(SATimestamp *)endTimestamp;
-(void)setEndTimestamp:(SATimestamp *)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA43*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA43*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(unsigned long long)endSampleIndex;
-(BOOL)isDarwinBG;
-(void)setEndSampleIndex:(unsigned long long)arg1 ;
-(BOOL)correspondsToKCDataTask:(const task_snapshot_v2*)arg1 terminatedThreadsInstructionCycles:(const instrs_cycles_snapshot*)arg2 machTimebase:(mach_timebase_info)arg3 donatingUniquePids:(id)arg4 ;
-(BOOL)correspondsToKCDataDeltaTask:(const task_delta_snapshot_v2*)arg1 terminatedThreadsInstructionCycles:(const instrs_cycles_snapshot*)arg2 machTimebase:(mach_timebase_info)arg3 donatingUniquePids:(id)arg4 ;
-(void)setStartSampleIndex:(unsigned long long)arg1 ;
-(void)setTerminatedThreadsUserTimeInNs:(unsigned long long)arg1 ;
-(void)setTerminatedThreadsSystemTimeInNs:(unsigned long long)arg1 ;
-(void)setTerminatedThreadsCycles:(unsigned long long)arg1 ;
-(void)setTerminatedThreadsInstructions:(unsigned long long)arg1 ;
-(void)setPageins:(unsigned)arg1 ;
-(unsigned long long)ssFlags;
-(void)setSsFlags:(unsigned long long)arg1 ;
-(void)setTaskSizeInBytes:(unsigned long long)arg1 ;
-(unsigned long long)taskSizeInBytes;
-(void)setLatencyQos:(unsigned)arg1 ;
-(unsigned)latencyQos;
-(void)applyPAStyleSampleTimestamp:(id)arg1 ;
-(unsigned)faults;
-(void)setFaults:(unsigned)arg1 ;
-(unsigned)pageins;
-(unsigned long long)terminatedThreadsUserTimeInNs;
-(unsigned long long)terminatedThreadsSystemTimeInNs;
-(unsigned long long)terminatedThreadsInstructions;
-(unsigned long long)terminatedThreadsCycles;
-(BOOL)isPidSuspended;
-(unsigned long long)startSampleIndex;
-(BOOL)isSuppressed;
-(id)initWithStartTimestamp:(id)arg1 endTimestamp:(id)arg2 startSampleIndex:(unsigned long long)arg3 endSampleIndex:(unsigned long long)arg4 ;
-(unsigned long long)sampleCountInSampleIndexRangeStart:(unsigned long long)arg1 end:(unsigned long long)arg2 ;
-(BOOL)wqExceededTotalThreadLimit;
-(BOOL)wqExceededConstrainedThreadLimit;
-(BOOL)isTerminatedSnapshot;
-(BOOL)isBoosted;
-(NSSet *)donatingUniquePids;
-(unsigned)cowFaults;
-(unsigned long long)terminatedThreadsCpuTimeNs;
-(void)setCowFaults:(unsigned)arg1 ;
-(id)initWithKCDataTask:(const task_snapshot_v2*)arg1 andTerminatedThreadsInstructionCycles:(const instrs_cycles_snapshot*)arg2 machTimebase:(mach_timebase_info)arg3 andDonatingUniquePids:(id)arg4 startTimestamp:(id)arg5 endTimestamp:(id)arg6 startSampleIndex:(unsigned long long)arg7 endSampleIndex:(unsigned long long)arg8 ;
-(id)initWithKCDataDeltaTask:(const task_delta_snapshot_v2*)arg1 andTerminatedThreadsInstructionCycles:(const instrs_cycles_snapshot*)arg2 machTimebase:(mach_timebase_info)arg3 andDonatingUniquePids:(id)arg4 startTimestamp:(id)arg5 endTimestamp:(id)arg6 startSampleIndex:(unsigned long long)arg7 endSampleIndex:(unsigned long long)arg8 ;
-(id)initWithStackshotTaskV1:(const task_snapshot*)arg1 machTimebase:(mach_timebase_info)arg2 startTimestamp:(id)arg3 endTimestamp:(id)arg4 startSampleIndex:(unsigned long long)arg5 endSampleIndex:(unsigned long long)arg6 ;
-(id)debugDescriptionWithTask:(id)arg1 ;
-(BOOL)isTaskResourceFlagged;
-(BOOL)isDarwinExtBG;
-(BOOL)isNonVisible;
-(BOOL)isTimerThrottled;
-(BOOL)isImpDonor;
-(BOOL)isLiveImpDonor;
-(void)setDonatingUniquePids:(NSSet *)arg1 ;
@end

