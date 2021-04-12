/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SATimestamp, SAFrame, SAWaitInfo, SATurnstileInfo, NSString, SADispatchQueue;

@interface SAThreadState : NSObject <SASerializable, NSCopying> {

	unsigned char _threadQos;
	unsigned char _threadRequestedQos;
	unsigned char _threadRequestedQosOverride;
	unsigned char _threadQosPromote;
	unsigned char _threadQosIpcOverride;
	unsigned char _threadQosSyncIpcOverride;
	unsigned char _ioTier;
	BOOL _isIOPassive;
	BOOL _isSuspended;
	BOOL _isDarwinBG;
	BOOL _isIdleWorkQueue;
	BOOL _isRunning;
	int _basePriority;
	int _scheduledPriority;
	unsigned _schedulerFlags;
	unsigned _state;
	SATimestamp* _startTimestamp;
	SATimestamp* _endTimestamp;
	unsigned long long _startSampleIndex;
	unsigned long long _endSampleIndex;
	SAFrame* _leafUserFrame;
	SAFrame* _leafKernelFrame;
	SAWaitInfo* _waitInfo;
	SATurnstileInfo* _turnstileInfo;
	NSString* _name;
	SADispatchQueue* _dispatchQueue;
	unsigned long long _voucherIdentifier;
	unsigned long long _userTimeInNs;
	unsigned long long _systemTimeInNs;
	unsigned long long _instructions;
	unsigned long long _cycles;
	SATimestamp* _timestampLastMadeRunnable;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) SATimestamp * startTimestamp;                                 //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (retain) SATimestamp * endTimestamp;                                   //@synthesize endTimestamp=_endTimestamp - In the implementation block
@property (assign) unsigned long long startSampleIndex;                          //@synthesize startSampleIndex=_startSampleIndex - In the implementation block
@property (assign) unsigned long long endSampleIndex;                            //@synthesize endSampleIndex=_endSampleIndex - In the implementation block
@property (retain) SAFrame * leafUserFrame;                                      //@synthesize leafUserFrame=_leafUserFrame - In the implementation block
@property (retain) SAFrame * leafKernelFrame;                                    //@synthesize leafKernelFrame=_leafKernelFrame - In the implementation block
@property (retain) SAWaitInfo * waitInfo;                                        //@synthesize waitInfo=_waitInfo - In the implementation block
@property (retain) SATurnstileInfo * turnstileInfo;                              //@synthesize turnstileInfo=_turnstileInfo - In the implementation block
@property (retain) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (__weak) SADispatchQueue * dispatchQueue;                              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign) unsigned long long voucherIdentifier;                         //@synthesize voucherIdentifier=_voucherIdentifier - In the implementation block
@property (assign) unsigned long long userTimeInNs;                              //@synthesize userTimeInNs=_userTimeInNs - In the implementation block
@property (assign) unsigned long long systemTimeInNs;                            //@synthesize systemTimeInNs=_systemTimeInNs - In the implementation block
@property (assign) unsigned long long instructions;                              //@synthesize instructions=_instructions - In the implementation block
@property (assign) unsigned long long cycles;                                    //@synthesize cycles=_cycles - In the implementation block
@property (assign) unsigned state;                                               //@synthesize state=_state - In the implementation block
@property (assign) int basePriority;                                             //@synthesize basePriority=_basePriority - In the implementation block
@property (assign) int scheduledPriority;                                        //@synthesize scheduledPriority=_scheduledPriority - In the implementation block
@property (assign) unsigned schedulerFlags;                                      //@synthesize schedulerFlags=_schedulerFlags - In the implementation block
@property (retain) SATimestamp * timestampLastMadeRunnable;                      //@synthesize timestampLastMadeRunnable=_timestampLastMadeRunnable - In the implementation block
@property (assign) unsigned char threadQos;                                      //@synthesize threadQos=_threadQos - In the implementation block
@property (assign) unsigned char threadRequestedQos;                             //@synthesize threadRequestedQos=_threadRequestedQos - In the implementation block
@property (assign) unsigned char threadRequestedQosOverride;                     //@synthesize threadRequestedQosOverride=_threadRequestedQosOverride - In the implementation block
@property (assign) unsigned char threadQosPromote;                               //@synthesize threadQosPromote=_threadQosPromote - In the implementation block
@property (assign) unsigned char threadQosIpcOverride;                           //@synthesize threadQosIpcOverride=_threadQosIpcOverride - In the implementation block
@property (assign) unsigned char threadQosSyncIpcOverride;                       //@synthesize threadQosSyncIpcOverride=_threadQosSyncIpcOverride - In the implementation block
@property (assign) unsigned char ioTier;                                         //@synthesize ioTier=_ioTier - In the implementation block
@property (assign) BOOL isIOPassive;                                             //@synthesize isIOPassive=_isIOPassive - In the implementation block
@property (assign) BOOL isSuspended;                                             //@synthesize isSuspended=_isSuspended - In the implementation block
@property (assign) BOOL isDarwinBG;                                              //@synthesize isDarwinBG=_isDarwinBG - In the implementation block
@property (assign) BOOL isIdleWorkQueue;                                         //@synthesize isIdleWorkQueue=_isIdleWorkQueue - In the implementation block
@property (assign) BOOL isRunning;                                               //@synthesize isRunning=_isRunning - In the implementation block
@property (readonly) BOOL isProcessorIdleThread; 
@property (readonly) unsigned char microstackshotFlags; 
@property (readonly) unsigned long long cpuTimeNs; 
@property (readonly) BOOL hasDispatchQueue; 
@property (readonly) BOOL isWaiting; 
@property (readonly) BOOL isStopped; 
@property (readonly) BOOL isRunnable; 
@property (readonly) BOOL isWaitingUninterruptibly; 
@property (readonly) BOOL isHaltedAtTermination; 
@property (readonly) BOOL isAbortingInterruptibleWaits; 
@property (readonly) BOOL isAbortingInterruptibleWaitsAtSafePoints; 
@property (readonly) BOOL isMicrostackshot; 
@property (readonly) BOOL isUserMode; 
@property (readonly) BOOL isInterruptRecord; 
@property (readonly) BOOL isTimerArmingRecord; 
@property (readonly) BOOL isIORecord; 
@property (readonly) BOOL isBatteryAndUserActivityValid; 
@property (readonly) BOOL isUserActive; 
@property (readonly) BOOL isOnBattery; 
@property (readonly) unsigned cpuSpeedMhz; 
@property (readonly) unsigned cpuNum; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA32*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)stateWithKCDataThreadV4:(const thread_snapshot_v4*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 machTimebase:(mach_timebase_info)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 threadPolicyVersion:(unsigned)arg12 threadInstructionCycles:(const instrs_cycles_snapshot*)arg13 ;
+(id)stateWithKCDataThreadV2:(const thread_snapshot_v2*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 machTimebase:(mach_timebase_info)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 ;
+(id)stateWithKCDataDeltaThreadV3:(const thread_delta_snapshot_v3*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 oldThreadState:(id)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 threadPolicyVersion:(unsigned)arg12 ;
+(id)stateWithKCDataDeltaThreadV2:(const thread_delta_snapshot_v2*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 oldThreadState:(id)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 ;
+(id)stateWithStartTimestamp:(id)arg1 endTimestamp:(id)arg2 startSampleIndex:(unsigned long long)arg3 endSampleIndex:(unsigned long long)arg4 ;
+(id)stateWithoutReferencesFromPAStyleSerializedThread:(const SCD_Struct_SA14*)arg1 ;
+(id)stateWithStackshotThreadV1:(const thread_snapshot*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 leafUserFrame:(id)arg6 leafKernelFrame:(id)arg7 machTimebase:(mach_timebase_info)arg8 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isStopped;
-(BOOL)isSuspended;
-(unsigned)state;
-(BOOL)isRunning;
-(void)setState:(unsigned)arg1 ;
-(SADispatchQueue *)dispatchQueue;
-(void)setDispatchQueue:(SADispatchQueue *)arg1 ;
-(int)basePriority;
-(void)setBasePriority:(int)arg1 ;
-(id)stack;
-(void)setStartTimestamp:(SATimestamp *)arg1 ;
-(SATimestamp *)startTimestamp;
-(SATimestamp *)endTimestamp;
-(unsigned long long)instructions;
-(void)setInstructions:(unsigned long long)arg1 ;
-(void)setIsRunning:(BOOL)arg1 ;
-(void)setEndTimestamp:(SATimestamp *)arg1 ;
-(BOOL)isWaiting;
-(BOOL)isUserActive;
-(unsigned long long)cycles;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA33*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA32*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(unsigned long long)endSampleIndex;
-(SAWaitInfo *)waitInfo;
-(SATurnstileInfo *)turnstileInfo;
-(unsigned long long)userTimeInNs;
-(unsigned long long)systemTimeInNs;
-(int)scheduledPriority;
-(unsigned)schedulerFlags;
-(unsigned long long)voucherIdentifier;
-(unsigned char)threadQos;
-(unsigned char)threadRequestedQos;
-(unsigned char)threadRequestedQosOverride;
-(unsigned char)ioTier;
-(BOOL)isDarwinBG;
-(BOOL)isIOPassive;
-(BOOL)isIdleWorkQueue;
-(void)setEndSampleIndex:(unsigned long long)arg1 ;
-(SAFrame *)leafUserFrame;
-(SAFrame *)leafKernelFrame;
-(void)setIsSuspended:(BOOL)arg1 ;
-(void)setLeafUserFrame:(SAFrame *)arg1 ;
-(SATimestamp *)timestampLastMadeRunnable;
-(void)setStartSampleIndex:(unsigned long long)arg1 ;
-(void)setLeafKernelFrame:(SAFrame *)arg1 ;
-(void)setSystemTimeInNs:(unsigned long long)arg1 ;
-(void)setUserTimeInNs:(unsigned long long)arg1 ;
-(void)setScheduledPriority:(int)arg1 ;
-(void)setThreadQos:(unsigned char)arg1 ;
-(void)setThreadRequestedQos:(unsigned char)arg1 ;
-(void)setThreadRequestedQosOverride:(unsigned char)arg1 ;
-(void)setThreadQosPromote:(unsigned char)arg1 ;
-(void)setThreadQosIpcOverride:(unsigned char)arg1 ;
-(void)setThreadQosSyncIpcOverride:(unsigned char)arg1 ;
-(unsigned long long)cpuTimeNs;
-(void)setCycles:(unsigned long long)arg1 ;
-(void)setIoTier:(unsigned char)arg1 ;
-(void)setIsIOPassive:(BOOL)arg1 ;
-(void)setIsDarwinBG:(BOOL)arg1 ;
-(void)setIsIdleWorkQueue:(BOOL)arg1 ;
-(void)setTimestampLastMadeRunnable:(SATimestamp *)arg1 ;
-(void)populateReferencesUsingPAStyleSerializedThread:(const SCD_Struct_SA14*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(void)setWaitInfo:(SAWaitInfo *)arg1 ;
-(void)applyPAStyleSampleTimestamp:(id)arg1 ;
-(BOOL)hasDispatchQueue;
-(unsigned long long)startSampleIndex;
-(BOOL)isProcessorIdleThread;
-(id)initWithStartTimestamp:(id)arg1 endTimestamp:(id)arg2 startSampleIndex:(unsigned long long)arg3 endSampleIndex:(unsigned long long)arg4 ;
-(id)initWithKCDataThreadV2:(const thread_snapshot_v2*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 machTimebase:(mach_timebase_info)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 ;
-(id)initWithKCDataThreadV4:(const thread_snapshot_v4*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 machTimebase:(mach_timebase_info)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 threadPolicyVersion:(unsigned)arg12 threadInstructionCycles:(const instrs_cycles_snapshot*)arg13 ;
-(id)initWithKCDataDeltaThreadV2:(const thread_delta_snapshot_v2*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 oldThreadState:(id)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 ;
-(id)initWithKCDataDeltaThreadV3:(const thread_delta_snapshot_v3*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 oldThreadState:(id)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 threadPolicyVersion:(unsigned)arg12 ;
-(id)initWithStackshotThreadV1:(const thread_snapshot*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 leafUserFrame:(id)arg6 leafKernelFrame:(id)arg7 machTimebase:(mach_timebase_info)arg8 ;
-(id)stackIgnoringKernelStackWithLeafFrame:(id)arg1 ;
-(BOOL)isRunnable;
-(BOOL)isWaitingUninterruptibly;
-(BOOL)isHaltedAtTermination;
-(BOOL)isAbortingInterruptibleWaits;
-(BOOL)isAbortingInterruptibleWaitsAtSafePoints;
-(BOOL)isMicrostackshot;
-(BOOL)isInterruptRecord;
-(BOOL)isTimerArmingRecord;
-(BOOL)isIORecord;
-(BOOL)isUserMode;
-(BOOL)isBatteryAndUserActivityValid;
-(BOOL)isOnBattery;
-(unsigned)cpuSpeedMhz;
-(unsigned)cpuNum;
-(unsigned char)microstackshotFlags;
-(unsigned long long)sampleCountInSampleIndexRangeStart:(unsigned long long)arg1 end:(unsigned long long)arg2 ;
-(BOOL)hasSameStackAs:(id)arg1 ;
-(id)debugDescriptionWithThread:(id)arg1 ;
-(void)setTurnstileInfo:(SATurnstileInfo *)arg1 ;
-(void)setVoucherIdentifier:(unsigned long long)arg1 ;
-(void)setSchedulerFlags:(unsigned)arg1 ;
-(unsigned char)threadQosPromote;
-(unsigned char)threadQosIpcOverride;
-(unsigned char)threadQosSyncIpcOverride;
@end

