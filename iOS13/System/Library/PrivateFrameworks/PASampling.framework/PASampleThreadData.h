/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/

#import <PASampling/PASampling-Structs.h>
#import <PASampling/PASerializable.h>

@class PASampleFrame, PASampleWaitInfo, NSString;

@interface PASampleThreadData : NSObject <PASerializable> {

	PASampleFrame* leafUserFrame;
	PASampleFrame* leafKernelFrame;
	PASampleWaitInfo* waitInfo;
	NSString* name;
	unsigned long long threadId;
	unsigned long long dispatchQueueId;
	unsigned long long voucherIdentifier;
	unsigned long long userTimeInNs;
	unsigned long long systemTimeInNs;
	unsigned long long instructions;
	unsigned long long cycles;
	int state;
	int staticPriority;
	int currentScheduledPriority;
	int schedulerFlags;
	char threadQos;
	char threadRequestedQos;
	char threadRequestedQosOverride;
	char threadQosPromote;
	char threadQosIpcOverride;
	char threadQosSyncIpcOverride;
	unsigned char ioTier;
	unsigned isIOPassive : 1;
	unsigned isSuspended : 1;
	unsigned isDarwinBG : 1;
	unsigned isGlobalForcedIdle : 1;
	unsigned isIdleWorkQueue : 1;
	unsigned isRunning : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL hasDispatchQueue; 
@property (readonly) BOOL isWaiting; 
@property (readonly) BOOL isStopped; 
@property (readonly) BOOL isRunnable; 
@property (readonly) BOOL isWaitingUninterruptibly; 
@property (readonly) BOOL isHaltedAtTermination; 
@property (readonly) BOOL isAbortingInterruptibleWaits; 
@property (readonly) BOOL isAbortingInterruptibleWaitsAtSafePoints; 
@property (readonly) BOOL isProcessorIdleThread; 
@property (readonly) BOOL hasValidPowerstatsFlags; 
@property (readonly) unsigned powerstatsFlags; 
@property (readonly) BOOL hasAnyInfo; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)debugDescription;
-(BOOL)isStopped;
-(id)stack;
-(BOOL)isWaiting;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)hasDispatchQueue;
-(BOOL)isProcessorIdleThread;
-(BOOL)isRunnable;
-(BOOL)isWaitingUninterruptibly;
-(BOOL)isHaltedAtTermination;
-(BOOL)isAbortingInterruptibleWaits;
-(BOOL)isAbortingInterruptibleWaitsAtSafePoints;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(BOOL)hasAnyInfo;
-(id)initWithTid:(unsigned long long)arg1 ;
-(unsigned)powerstatsFlags;
-(BOOL)isStackEqualTo:(id)arg1 ;
-(id)initWithKCDataStackshotThreadV2:(const thread_snapshot_v2*)arg1 withName:(id)arg2 andLeafUserFrame:(id)arg3 andLeafKernelFrame:(id)arg4 andMachTimebase:(mach_timebase_info)arg5 andWaitInfo:(id)arg6 ;
-(id)initWithKCDataStackshotDeltaThreadV2:(const thread_delta_snapshot_v2*)arg1 withName:(id)arg2 andLeafUserFrame:(id)arg3 andLeafKernelFrame:(id)arg4 andOldThreadData:(id)arg5 andWaitInfo:(id)arg6 ;
-(BOOL)hasValidPowerstatsFlags;
-(id)initWithStackshotThread:(id)arg1 andLeafUserFrame:(id)arg2 andLeafKernelFrame:(id)arg3 ;
-(id)initWithKCDataStackshotThreadV4:(const thread_snapshot_v4*)arg1 withName:(id)arg2 leafUserFrame:(id)arg3 leafKernelFrame:(id)arg4 machTimebase:(mach_timebase_info)arg5 waitInfo:(id)arg6 threadPolicyVersion:(unsigned)arg7 threadInstructionCycles:(const instrs_cycles_snapshot*)arg8 ;
-(id)initWithKCDataStackshotDeltaThreadV3:(const thread_delta_snapshot_v3*)arg1 withName:(id)arg2 andLeafUserFrame:(id)arg3 andLeafKernelFrame:(id)arg4 andOldThreadData:(id)arg5 andWaitInfo:(id)arg6 threadPolicyVersion:(unsigned)arg7 ;
@end

