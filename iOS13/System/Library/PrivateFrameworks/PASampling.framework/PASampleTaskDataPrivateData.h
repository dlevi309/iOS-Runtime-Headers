/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/

#import <PASampling/PASampling-Structs.h>
#import <PASampling/PASerializable.h>

@class NSString;

@interface PASampleTaskDataPrivateData : NSObject <PASerializable> {

	long long _task_size_bytes;
	unsigned long long _ss_flags;
	int _suspend_count;
	int _faults;
	int _pageins;
	int _cow_faults;
	unsigned _latency_qos;
	unsigned long long _terminatedThreadsUserTimeInNs;
	unsigned long long _terminatedThreadsSystemTimeInNs;
	unsigned long long _terminatedThreadsInstructions;
	unsigned long long _terminatedThreadsCycles;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) int suspendCount;                                                //@synthesize suspend_count=_suspend_count - In the implementation block
@property (readonly) long long taskSizeInBytes;                                       //@synthesize task_size_bytes=_task_size_bytes - In the implementation block
@property (readonly) int numberOfPageFaults;                                          //@synthesize faults=_faults - In the implementation block
@property (readonly) int numberOfPageIns;                                             //@synthesize pageins=_pageins - In the implementation block
@property (readonly) int numberOfCopyOnWritePageFaults;                               //@synthesize cow_faults=_cow_faults - In the implementation block
@property (readonly) unsigned latencyQos;                                             //@synthesize latency_qos=_latency_qos - In the implementation block
@property (readonly) unsigned long long terminatedThreadsUserTimeInNs;                //@synthesize terminatedThreadsUserTimeInNs=_terminatedThreadsUserTimeInNs - In the implementation block
@property (readonly) unsigned long long terminatedThreadsSystemTimeInNs;              //@synthesize terminatedThreadsSystemTimeInNs=_terminatedThreadsSystemTimeInNs - In the implementation block
@property (readonly) unsigned long long terminatedThreadsInstructions;                //@synthesize terminatedThreadsInstructions=_terminatedThreadsInstructions - In the implementation block
@property (readonly) unsigned long long terminatedThreadsCycles;                      //@synthesize terminatedThreadsCycles=_terminatedThreadsCycles - In the implementation block
@property (readonly) unsigned long long ss_flags;                                     //@synthesize ss_flags=_ss_flags - In the implementation block
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
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(int)suspendCount;
-(BOOL)isFrozen;
-(BOOL)isDirty;
-(BOOL)isVisible;
-(BOOL)isForeground;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)isDarwinBG;
-(long long)taskSizeInBytes;
-(unsigned)latencyQos;
-(unsigned long long)ss_flags;
-(unsigned long long)terminatedThreadsUserTimeInNs;
-(unsigned long long)terminatedThreadsSystemTimeInNs;
-(unsigned long long)terminatedThreadsInstructions;
-(unsigned long long)terminatedThreadsCycles;
-(BOOL)isPidSuspended;
-(BOOL)isSuppressed;
-(BOOL)wqExceededTotalThreadLimit;
-(BOOL)wqExceededConstrainedThreadLimit;
-(BOOL)isTerminatedSnapshot;
-(BOOL)isBoosted;
-(BOOL)isTaskResourceFlagged;
-(BOOL)isDarwinExtBG;
-(BOOL)isNonVisible;
-(BOOL)isTimerThrottled;
-(BOOL)isImpDonor;
-(BOOL)isLiveImpDonor;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(int)numberOfPageIns;
-(BOOL)correspondsToTaskSnapshot:(const task_snapshot*)arg1 machTimebase:(mach_timebase_info)arg2 ;
-(BOOL)correspondsToKCDataStackshotTask:(const task_snapshot_v2*)arg1 andTerminatedThreadsInstructionCycles:(const instrs_cycles_snapshot*)arg2 machTimebase:(mach_timebase_info)arg3 ;
-(BOOL)correspondsToKCDataStackshotDeltaTask:(const task_delta_snapshot_v2*)arg1 andTerminatedThreadsInstructionCycles:(const instrs_cycles_snapshot*)arg2 machTimebase:(mach_timebase_info)arg3 ;
-(id)initWithTaskSnapshot:(const task_snapshot*)arg1 machTimebase:(mach_timebase_info)arg2 ;
-(id)initWithKCDataStackshotTask:(const task_snapshot_v2*)arg1 andTerminatedThreadsInstructionCycles:(const instrs_cycles_snapshot*)arg2 machTimebase:(mach_timebase_info)arg3 ;
-(id)initWithKCDataStackshotDeltaTask:(const task_delta_snapshot_v2*)arg1 andTerminatedThreadsInstructionCycles:(const instrs_cycles_snapshot*)arg2 machTimebase:(mach_timebase_info)arg3 ;
-(int)numberOfPageFaults;
-(int)numberOfCopyOnWritePageFaults;
@end

