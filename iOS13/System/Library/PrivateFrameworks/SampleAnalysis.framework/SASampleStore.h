/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSMutableArray, SATimestamp, SASharedCache, SAWSUpdateDataStore, SABinaryLocator, NSMutableSet, NSString, SAMountStatusTracker, SAFrame, SATask, SATimeRange, SABinaryLoadInfo, NSDictionary, NSArray;

@interface SASampleStore : NSObject <NSSecureCoding> {

	NSMutableDictionary* _tasksByUniquePid;
	NSMutableDictionary* _tasksByPid;
	NSMutableArray* _sampleTimestamps;
	unsigned long long _numSamples;
	SATimestamp* _startTime;
	SATimestamp* _endTime;
	NSMutableArray* _hidEvents;
	NSMutableArray* _fanSpeeds;
	NSMutableArray* _kernelCaches;
	NSMutableArray* _sharedCaches;
	SASharedCache* _mostRecentNativeSharedCache;
	SAWSUpdateDataStore* _wsDataStore;
	SABinaryLocator* _binaryLocator;
	NSMutableSet* _pidsToTrack;
	int _targetProcessId;
	unsigned long long _targetThreadId;
	mach_timebase_info _machTimebase;
	CSArchitecture _arch;
	unsigned _threadPolicyVersion;
	unsigned long long _previousSampleTimestamp;
	unsigned _previousStackshotBufferSize;
	BOOL _sampleOnlyMainThreads;
	BOOL _nextSampleIsFirstSamplingAllThreads;
	BOOL _stackshotsOnlyIncludeSpecificProcesses;
	BOOL _nextSampleIsFirstSamplingAllProcesses;
	BOOL _keepStateBetweenSampleIndexes;
	BOOL _haveKPerfSched;
	double _sampleIntervalLimit;
	NSMutableArray* _namesToUseDsymForUUID;
	NSMutableArray* _idsToUseDsymForUUID;
	BOOL _bulkSymbolicationFailed;
	unsigned long long _numMicrostackshotsSkippedDueToMissingLoadInfos;
	unsigned long long _targetHIDEventMachAbs;
	BOOL _keepMicrostackshotsWithoutLoadInfo;
	BOOL _sanitizePaths;
	BOOL _omitSensitiveStrings;
	BOOL _shouldGatherKextStat;
	unsigned _workQueueSoftThreadLimit;
	unsigned _workQueueHardThreadLimit;
	unsigned _numActiveCPUs;
	unsigned long long _dataSource;
	unsigned long long _dataStyle;
	double _attemptedSamplingInterval;
	NSString* _reason;
	double _lastWakeTime;
	SAMountStatusTracker* _mountStatusTracker;
	SAFrame* _cpuSignalHandlerStackLeafKernelFrame;
	unsigned long long _dataGatheringOptions;
	SATimestamp* _timeWhenTransitionedToSamplingAllThreads;
	SATimestamp* _timeWhenTransitionedToSamplingAllProcesses;
	NSString* _kextStat;
	NSString* _kernelVersion;
	NSString* _osProductName;
	NSString* _osProductVersion;
	NSString* _osBuildVersion;
	NSString* _hardwareModel;
	NSString* _bootArgs;
	unsigned long long _targetHIDEventEndMachAbs;
	SATask* _targetProcess;
	double _cpuUsed;
	double _cpuDuration;
	double _cpuLimit;
	double _cpuLimitDuration;
	unsigned long long _numWakeups;
	double _wakeupsDuration;
	unsigned long long _numWakeupsLimit;
	double _wakeupsLimitDuration;
	unsigned long long _bytesWritten;
	double _writeDuration;
	unsigned long long _bytesWrittenLimit;
	double _writeLimitDuration;
	NSString* _event;
	NSString* _eventNote;
	SATimeRange* _eventTimeRange;
	NSString* _signature;
	NSString* _actionTaken;
	double _extraDuration;
	NSString* _durationNote;
	NSString* _stepsNote;
	NSString* _targetProcessBundleVersion;
	NSString* _targetProcessBundleShortVersion;
	NSString* _targetProcessBundleBuildVersion;
	NSString* _targetProcessBundleProjectName;
	NSString* _targetProcessBundleSourceVersion;
	NSString* _targetProcessBundleProductBuildVersion;
	NSString* _targetProcessBundleId;
	NSString* _targetProcessCommerceAppID;
	NSString* _targetProcessCommerceExternalID;
	NSString* _targetProcessVendorID;
	SABinaryLoadInfo* _prelinkedKernelLoadInfo;

}

@property (assign) BOOL keepStateBetweenSampleIndexes; 
@property (assign) double kPerfPETSampleIntervalLimit; 
@property (assign) BOOL haveKPerfSched; 
@property (assign) unsigned long long dataSource;                                           //@synthesize dataSource=_dataSource - In the implementation block
@property (assign) unsigned long long dataStyle;                                            //@synthesize dataStyle=_dataStyle - In the implementation block
@property (assign) CSArchitecture arch;                                                     //@synthesize arch=_arch - In the implementation block
@property (assign) mach_timebase_info machTimebase;                                         //@synthesize machTimebase=_machTimebase - In the implementation block
@property (assign) unsigned long long numSamples; 
@property (retain) SATimestamp * startTime; 
@property (retain) SATimestamp * endTime; 
@property (retain) SABinaryLoadInfo * prelinkedKernelLoadInfo;                              //@synthesize prelinkedKernelLoadInfo=_prelinkedKernelLoadInfo - In the implementation block
@property (assign) double attemptedSamplingInterval;                                        //@synthesize attemptedSamplingInterval=_attemptedSamplingInterval - In the implementation block
@property (readonly) NSDictionary * tasksByUniquePid;                                       //@synthesize tasksByUniquePid=_tasksByUniquePid - In the implementation block
@property (readonly) NSDictionary * tasksByPid;                                             //@synthesize tasksByPid=_tasksByPid - In the implementation block
@property (readonly) NSArray * sampleTimestamps;                                            //@synthesize sampleTimestamps=_sampleTimestamps - In the implementation block
@property (copy) NSString * reason;                                                         //@synthesize reason=_reason - In the implementation block
@property (readonly) double lastWakeTime;                                                   //@synthesize lastWakeTime=_lastWakeTime - In the implementation block
@property (readonly) NSArray * kernelCaches;                                                //@synthesize kernelCaches=_kernelCaches - In the implementation block
@property (readonly) NSArray * sharedCaches;                                                //@synthesize sharedCaches=_sharedCaches - In the implementation block
@property (readonly) SAMountStatusTracker * mountStatusTracker;                             //@synthesize mountStatusTracker=_mountStatusTracker - In the implementation block
@property (readonly) NSArray * hidEvents;                                                   //@synthesize hidEvents=_hidEvents - In the implementation block
@property (assign) BOOL keepMicrostackshotsWithoutLoadInfo;                                 //@synthesize keepMicrostackshotsWithoutLoadInfo=_keepMicrostackshotsWithoutLoadInfo - In the implementation block
@property (readonly) SAFrame * cpuSignalHandlerStackLeafKernelFrame;                        //@synthesize cpuSignalHandlerStackLeafKernelFrame=_cpuSignalHandlerStackLeafKernelFrame - In the implementation block
@property (assign) unsigned long long dataGatheringOptions;                                 //@synthesize dataGatheringOptions=_dataGatheringOptions - In the implementation block
@property (assign) BOOL sampleOnlyMainThreads; 
@property (readonly) SATimestamp * timeWhenTransitionedToSamplingAllThreads;                //@synthesize timeWhenTransitionedToSamplingAllThreads=_timeWhenTransitionedToSamplingAllThreads - In the implementation block
@property (assign) BOOL stackshotsOnlyIncludeSpecificProcesses; 
@property (readonly) SATimestamp * timeWhenTransitionedToSamplingAllProcesses;              //@synthesize timeWhenTransitionedToSamplingAllProcesses=_timeWhenTransitionedToSamplingAllProcesses - In the implementation block
@property (assign) BOOL sanitizePaths;                                                      //@synthesize sanitizePaths=_sanitizePaths - In the implementation block
@property (assign) BOOL omitSensitiveStrings;                                               //@synthesize omitSensitiveStrings=_omitSensitiveStrings - In the implementation block
@property (assign) BOOL shouldGatherKextStat;                                               //@synthesize shouldGatherKextStat=_shouldGatherKextStat - In the implementation block
@property (copy,readonly) NSString * kextStat;                                              //@synthesize kextStat=_kextStat - In the implementation block
@property (readonly) NSString * kernelVersion;                                              //@synthesize kernelVersion=_kernelVersion - In the implementation block
@property (copy) NSString * osProductName;                                                  //@synthesize osProductName=_osProductName - In the implementation block
@property (copy) NSString * osProductVersion;                                               //@synthesize osProductVersion=_osProductVersion - In the implementation block
@property (copy) NSString * osBuildVersion;                                                 //@synthesize osBuildVersion=_osBuildVersion - In the implementation block
@property (copy) NSString * machineArchitecture; 
@property (readonly) unsigned workQueueSoftThreadLimit;                                     //@synthesize workQueueSoftThreadLimit=_workQueueSoftThreadLimit - In the implementation block
@property (readonly) unsigned workQueueHardThreadLimit;                                     //@synthesize workQueueHardThreadLimit=_workQueueHardThreadLimit - In the implementation block
@property (copy) NSString * hardwareModel;                                                  //@synthesize hardwareModel=_hardwareModel - In the implementation block
@property (assign) unsigned numActiveCPUs;                                                  //@synthesize numActiveCPUs=_numActiveCPUs - In the implementation block
@property (copy) NSString * bootArgs;                                                       //@synthesize bootArgs=_bootArgs - In the implementation block
@property (assign) int targetProcessId; 
@property (assign) unsigned long long targetThreadId; 
@property (assign) unsigned long long targetHIDEventMachAbs; 
@property (assign) unsigned long long targetHIDEventEndMachAbs;                             //@synthesize targetHIDEventEndMachAbs=_targetHIDEventEndMachAbs - In the implementation block
@property (readonly) SATask * targetProcess;                                                //@synthesize targetProcess=_targetProcess - In the implementation block
@property (assign) double cpuUsed;                                                          //@synthesize cpuUsed=_cpuUsed - In the implementation block
@property (assign) double cpuDuration;                                                      //@synthesize cpuDuration=_cpuDuration - In the implementation block
@property (assign) double cpuLimit;                                                         //@synthesize cpuLimit=_cpuLimit - In the implementation block
@property (assign) double cpuLimitDuration;                                                 //@synthesize cpuLimitDuration=_cpuLimitDuration - In the implementation block
@property (assign) unsigned long long numWakeups;                                           //@synthesize numWakeups=_numWakeups - In the implementation block
@property (assign) double wakeupsDuration;                                                  //@synthesize wakeupsDuration=_wakeupsDuration - In the implementation block
@property (assign) unsigned long long numWakeupsLimit;                                      //@synthesize numWakeupsLimit=_numWakeupsLimit - In the implementation block
@property (assign) double wakeupsLimitDuration;                                             //@synthesize wakeupsLimitDuration=_wakeupsLimitDuration - In the implementation block
@property (assign) unsigned long long bytesWritten;                                         //@synthesize bytesWritten=_bytesWritten - In the implementation block
@property (assign) double writeDuration;                                                    //@synthesize writeDuration=_writeDuration - In the implementation block
@property (assign) unsigned long long bytesWrittenLimit;                                    //@synthesize bytesWrittenLimit=_bytesWrittenLimit - In the implementation block
@property (assign) double writeLimitDuration;                                               //@synthesize writeLimitDuration=_writeLimitDuration - In the implementation block
@property (copy) NSString * event;                                                          //@synthesize event=_event - In the implementation block
@property (copy) NSString * eventNote;                                                      //@synthesize eventNote=_eventNote - In the implementation block
@property (copy) SATimeRange * eventTimeRange;                                              //@synthesize eventTimeRange=_eventTimeRange - In the implementation block
@property (copy) NSString * signature;                                                      //@synthesize signature=_signature - In the implementation block
@property (copy) NSString * actionTaken;                                                    //@synthesize actionTaken=_actionTaken - In the implementation block
@property (assign) double extraDuration;                                                    //@synthesize extraDuration=_extraDuration - In the implementation block
@property (copy) NSString * durationNote;                                                   //@synthesize durationNote=_durationNote - In the implementation block
@property (copy) NSString * stepsNote;                                                      //@synthesize stepsNote=_stepsNote - In the implementation block
@property (readonly) NSString * targetProcessName; 
@property (readonly) NSString * targetProcessAbsolutePath; 
@property (readonly) NSString * targetProcessBundleName; 
@property (readonly) NSString * targetProcessBundleVersion;                                 //@synthesize targetProcessBundleVersion=_targetProcessBundleVersion - In the implementation block
@property (readonly) NSString * targetProcessBundleShortVersion;                            //@synthesize targetProcessBundleShortVersion=_targetProcessBundleShortVersion - In the implementation block
@property (readonly) NSString * targetProcessBundleBuildVersion;                            //@synthesize targetProcessBundleBuildVersion=_targetProcessBundleBuildVersion - In the implementation block
@property (readonly) NSString * targetProcessBundleProjectName;                             //@synthesize targetProcessBundleProjectName=_targetProcessBundleProjectName - In the implementation block
@property (readonly) NSString * targetProcessBundleSourceVersion;                           //@synthesize targetProcessBundleSourceVersion=_targetProcessBundleSourceVersion - In the implementation block
@property (readonly) NSString * targetProcessBundleProductBuildVersion;                     //@synthesize targetProcessBundleProductBuildVersion=_targetProcessBundleProductBuildVersion - In the implementation block
@property (readonly) NSString * targetProcessBundleId;                                      //@synthesize targetProcessBundleId=_targetProcessBundleId - In the implementation block
@property (readonly) NSString * targetProcessCommerceAppID;                                 //@synthesize targetProcessCommerceAppID=_targetProcessCommerceAppID - In the implementation block
@property (readonly) NSString * targetProcessCommerceExternalID;                            //@synthesize targetProcessCommerceExternalID=_targetProcessCommerceExternalID - In the implementation block
@property (readonly) NSString * targetProcessVendorID;                                      //@synthesize targetProcessVendorID=_targetProcessVendorID - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)canOpenFileAsKTraceFile:(const char*)arg1 errorOut:(id*)arg2 ;
+(id)sampleStoreForSpindumpFile:(const char*)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(NSString *)event;
-(void)setEvent:(NSString *)arg1 ;
-(NSString *)hardwareModel;
-(unsigned long long)dataSource;
-(void)setDataSource:(unsigned long long)arg1 ;
-(NSString *)signature;
-(void)addTask:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(SATimestamp *)startTime;
-(SATimestamp *)endTime;
-(void)setEndTime:(SATimestamp *)arg1 ;
-(void)setStartTime:(SATimestamp *)arg1 ;
-(void)setSignature:(NSString *)arg1 ;
-(SATask *)targetProcess;
-(void)setHardwareModel:(NSString *)arg1 ;
-(unsigned long long)bytesWritten;
-(void)addTimestamp:(id)arg1 ;
-(void)setBytesWritten:(unsigned long long)arg1 ;
-(NSString *)bootArgs;
-(NSString *)osBuildVersion;
-(unsigned long long)numSamples;
-(NSString *)targetProcessName;
-(unsigned long long)dataGatheringOptions;
-(void)setDataGatheringOptions:(unsigned long long)arg1 ;
-(void)findTargetProcess;
-(id)taskWithPid:(int)arg1 atTimestamp:(id)arg2 ;
-(id)lastTaskWithPid:(int)arg1 ;
-(id)taskWithUniquePid:(unsigned long long)arg1 atTimestamp:(id)arg2 ;
-(id)lastTaskWithUniquePid:(unsigned long long)arg1 ;
-(void)gatherExtraInfoForTargetProcess:(id)arg1 ;
-(void)findTargetProcessInTimeRange:(id)arg1 ;
-(id)taskWithPid:(int)arg1 orTid:(unsigned long long)arg2 atTimestamp:(id)arg3 ;
-(id)lastTaskWithPid:(int)arg1 orTid:(unsigned long long)arg2 ;
-(void)gatherKextStat;
-(void)gatherKernelVersion;
-(void)gatherOsVersions;
-(void)gatherMachineArchitecture;
-(void)gatherWorkQueueSoftThreadLimit;
-(void)gatherWorkQueueHardThreadLimit;
-(void)gatherHardwareModel;
-(void)gatherNumActiveCPUs;
-(void)gatherBootArgs;
-(id)lastTaskWithUniquePid:(unsigned long long)arg1 onOrBeforeTimestamp:(id)arg2 ;
-(id)lastTaskWithPid:(int)arg1 onOrBeforeTimestamp:(id)arg2 ;
-(id)_lastTaskOnOrBeforeTimestamp:(id)arg1 inTasks:(id)arg2 ;
-(id)firstTaskWithUniquePid:(unsigned long long)arg1 onOrAfterTimestamp:(id)arg2 ;
-(id)firstTaskWithPid:(int)arg1 onOrAfterTimestamp:(id)arg2 ;
-(id)_firstTaskOnOrAfterTimestamp:(id)arg1 inTasks:(id)arg2 ;
-(void)enumerateTasks:(/*^block*/id)arg1 ;
-(id)firstTaskWithPid:(int)arg1 ;
-(unsigned long long)dataStyle;
-(unsigned long long)_addKCDataStackshot:(id)arg1 timestamp:(id)arg2 sampleIndex:(unsigned long long)arg3 shouldSkipSampleOut:(BOOL*)arg4 backfillKPerf:(BOOL)arg5 addStaticInfoOnly:(BOOL)arg6 ;
-(unsigned long long)addKCDataStackshot:(id)arg1 returningTimestamp:(id*)arg2 ;
-(id)taskForKCDataTask:(const task_snapshot_v2*)arg1 loadInfos:(const dyld_uuid_info_64*)arg2 numLoadInfos:(unsigned)arg3 machineArchitecture:(CSArchitecture)arg4 timestamp:(id)arg5 sharedCache:(id)arg6 loadInfosIsPartial:(BOOL)arg7 ;
-(NSString *)osProductName;
-(void)backfillTask:(id)arg1 lastSampleIndex:(unsigned long long)arg2 timestamp:(id)arg3 haveSnap:(BOOL)arg4 terminatedThreadsUserTimeInNs:(unsigned long long)arg5 terminatedThreadsSystemTimeInNs:(unsigned long long)arg6 terminatedThreadsCycles:(unsigned long long)arg7 terminatedThreadsInstructions:(unsigned long long)arg8 suspendCount:(unsigned)arg9 pageins:(unsigned)arg10 isDarwinBG:(BOOL)arg11 isForeground:(BOOL)arg12 isBoosted:(BOOL)arg13 isDirty:(BOOL)arg14 haveWQFlags:(BOOL)arg15 wqExceededTotalThreadLimit:(BOOL)arg16 wqExceededConstrainedThreadLimit:(BOOL)arg17 haveMem:(BOOL)arg18 taskSizeInBytes:(unsigned long long)arg19 haveLatencyQos:(BOOL)arg20 latencyQos:(unsigned)arg21 ;
-(id)taskForKCDataDeltaTask:(const task_delta_snapshot_v2*)arg1 loadInfos:(const dyld_uuid_info_64*)arg2 numLoadInfos:(unsigned)arg3 machineArchitecture:(CSArchitecture)arg4 timestamp:(id)arg5 sharedCache:(id)arg6 loadInfosIsPartial:(BOOL)arg7 ;
-(void)backfillThread:(id)arg1 inTask:(id)arg2 lastSampleIndex:(unsigned long long)arg3 timestamp:(id)arg4 haveName:(BOOL)arg5 name:(const char*)arg6 haveDispatchQueueId:(BOOL)arg7 dispatchQueueId:(unsigned long long)arg8 dispatchQueueLabel:(const char*)arg9 leafKernelFrame:(id)arg10 haveUserStack:(BOOL)arg11 leafUserFrame:(id)arg12 haveSched:(BOOL)arg13 systemCpuTimeNs:(unsigned long long)arg14 userCpuTimeNs:(unsigned long long)arg15 basePriority:(int)arg16 scheduledPriority:(int)arg17 state:(unsigned)arg18 threadQos:(unsigned char)arg19 threadRequestedQos:(unsigned char)arg20 threadRequestedQosOverride:(unsigned char)arg21 threadQosPromote:(unsigned char)arg22 threadQosIpcOverride:(unsigned char)arg23 threadQosSyncIpcOverride:(unsigned char)arg24 haveCycIns:(BOOL)arg25 instructions:(unsigned long long)arg26 cycles:(unsigned long long)arg27 haveSnap:(BOOL)arg28 ioTier:(unsigned char)arg29 isIOPassive:(BOOL)arg30 isDarwinBG:(BOOL)arg31 isSuspended:(BOOL)arg32 isGlobalForcedIdle:(BOOL)arg33 isIdleWorkQueue:(BOOL)arg34 lastMadeRunnableTime:(id)arg35 isOnCore:(BOOL)arg36 ;
-(unsigned long long)addKCDataThreadV4:(const thread_snapshot_v4*)arg1 threadV2:(const thread_snapshot_v2*)arg2 deltaThreadV3:(const thread_delta_snapshot_v3*)arg3 deltaThreadV2:(const thread_delta_snapshot_v2*)arg4 timestamp:(id)arg5 sampleIndex:(unsigned long long)arg6 stack:(id)arg7 threadName:(const char*)arg8 dispatchQueueLabel:(const char*)arg9 waitInfo:(const stackshot_thread_waitinfo*)arg10 turnstileInfo:(const stackshot_thread_turnstileinfo*)arg11 instructionCycles:(const instrs_cycles_snapshot*)arg12 task:(id)arg13 kernelTask:(id)arg14 taskIsSuspended:(BOOL)arg15 ;
-(CSArchitecture)arch;
-(long long)_addMicrostackshotFromData:(id)arg1 ofTypes:(int)arg2 inTimeRangeStart:(double)arg3 end:(double)arg4 onlyPid:(int)arg5 onlyTid:(unsigned long long)arg6 ;
-(BOOL)keepMicrostackshotsWithoutLoadInfo;
-(id)taskForMicrostackshotTask:(const task_snapshot*)arg1 loadInfos:(const dyld_uuid_info_64*)arg2 numLoadInfos:(unsigned)arg3 machineArchitecture:(CSArchitecture)arg4 sharedCache:(id)arg5 loadInfosIsPartial:(BOOL)arg6 ;
-(unsigned long long)targetHIDEventMachAbs;
-(void)setTargetHIDEventMachAbs:(unsigned long long)arg1 ;
-(BOOL)keepStateBetweenSampleIndexes;
-(void)setKeepStateBetweenSampleIndexes:(BOOL)arg1 ;
-(BOOL)haveKPerfSched;
-(void)setHaveKPerfSched:(BOOL)arg1 ;
-(double)kPerfPETSampleIntervalLimit;
-(void)setKPerfPETSampleIntervalLimit:(double)arg1 ;
-(void)addSharedCache:(id)arg1 ;
-(void)setNumSamples:(unsigned long long)arg1 ;
-(void)addHidEvent:(id)arg1 ;
-(void)removeAllData;
-(void)useDsymForUUIDFor:(id)arg1 ;
-(id)fanSpeedClosestToTimestamp:(id)arg1 ;
-(BOOL)setTargetProcessWithHint:(id)arg1 ;
-(unsigned long long)targetThreadId;
-(void)setTargetThreadId:(unsigned long long)arg1 ;
-(int)targetProcessId;
-(void)setTargetProcessId:(int)arg1 ;
-(NSString *)targetProcessAbsolutePath;
-(NSString *)targetProcessBundleName;
-(BOOL)cacheLoadInfoForProcess:(int)arg1 ;
-(void)addAuxiliaryData:(id)arg1 ;
-(void)printFrameRateReportWithStartSampleIndex:(unsigned long long)arg1 endSampleIndex:(unsigned long long)arg2 startDisplayIndex:(unsigned long long)arg3 toStream:(id)arg4 ;
-(void)startingSamplingLiveSystem;
-(void)finishedSamplingLiveSystem;
-(void)postprocess;
-(id)firstTaskWithUniquePid:(unsigned long long)arg1 ;
-(id)firstTaskWithPid:(int)arg1 orTid:(unsigned long long)arg2 ;
-(id)initForLiveSampling;
-(id)initForFileParsing;
-(void)setSampleOnlyMainThreads:(BOOL)arg1 ;
-(BOOL)sampleOnlyMainThreads;
-(void)setStackshotsOnlyIncludeSpecificProcesses:(BOOL)arg1 ;
-(BOOL)stackshotsOnlyIncludeSpecificProcesses;
-(unsigned long long)indexOfFirstSampleOnOrAfterTimestamp:(id)arg1 ;
-(unsigned long long)indexOfLastSampleOnOrBeforeTimestamp:(id)arg1 ;
-(void)addProcessInfoFromTailspin:(id)arg1 ;
-(unsigned long long)addKCDataStackshots:(id)arg1 createSeparateSamplePerStackshot:(BOOL)arg2 ;
-(unsigned long long)addKCDataStackshot:(id)arg1 ;
-(int)addMicrostackshotsFromFile:(id)arg1 ofTypes:(int)arg2 inTimeRangeStart:(double)arg3 end:(double)arg4 onlyPid:(int)arg5 onlyTid:(unsigned long long)arg6 ;
-(long long)addMicrostackshotsFromData:(id)arg1 ofTypes:(int)arg2 inTimeRangeStart:(double)arg3 end:(double)arg4 onlyPid:(int)arg5 onlyTid:(unsigned long long)arg6 ;
-(BOOL)findCpuSignalHandlerStackLeafKernelFrame;
-(void)symbolicate;
-(void)setArch:(CSArchitecture)arg1 ;
-(NSString *)machineArchitecture;
-(void)setMachineArchitecture:(NSString *)arg1 ;
-(mach_timebase_info)machTimebase;
-(void)setMachTimebase:(mach_timebase_info)arg1 ;
-(NSDictionary *)tasksByUniquePid;
-(NSDictionary *)tasksByPid;
-(NSArray *)sampleTimestamps;
-(NSArray *)hidEvents;
-(NSArray *)kernelCaches;
-(NSArray *)sharedCaches;
-(void)setDataStyle:(unsigned long long)arg1 ;
-(double)attemptedSamplingInterval;
-(void)setAttemptedSamplingInterval:(double)arg1 ;
-(double)lastWakeTime;
-(SAMountStatusTracker *)mountStatusTracker;
-(void)setKeepMicrostackshotsWithoutLoadInfo:(BOOL)arg1 ;
-(SAFrame *)cpuSignalHandlerStackLeafKernelFrame;
-(SATimestamp *)timeWhenTransitionedToSamplingAllThreads;
-(SATimestamp *)timeWhenTransitionedToSamplingAllProcesses;
-(BOOL)sanitizePaths;
-(void)setSanitizePaths:(BOOL)arg1 ;
-(BOOL)omitSensitiveStrings;
-(void)setOmitSensitiveStrings:(BOOL)arg1 ;
-(BOOL)shouldGatherKextStat;
-(void)setShouldGatherKextStat:(BOOL)arg1 ;
-(NSString *)kextStat;
-(NSString *)kernelVersion;
-(void)setOsProductName:(NSString *)arg1 ;
-(NSString *)osProductVersion;
-(void)setOsProductVersion:(NSString *)arg1 ;
-(void)setOsBuildVersion:(NSString *)arg1 ;
-(unsigned)workQueueSoftThreadLimit;
-(unsigned)workQueueHardThreadLimit;
-(unsigned)numActiveCPUs;
-(void)setNumActiveCPUs:(unsigned)arg1 ;
-(void)setBootArgs:(NSString *)arg1 ;
-(unsigned long long)targetHIDEventEndMachAbs;
-(void)setTargetHIDEventEndMachAbs:(unsigned long long)arg1 ;
-(double)cpuUsed;
-(void)setCpuUsed:(double)arg1 ;
-(double)cpuDuration;
-(void)setCpuDuration:(double)arg1 ;
-(double)cpuLimit;
-(void)setCpuLimit:(double)arg1 ;
-(double)cpuLimitDuration;
-(void)setCpuLimitDuration:(double)arg1 ;
-(unsigned long long)numWakeups;
-(void)setNumWakeups:(unsigned long long)arg1 ;
-(double)wakeupsDuration;
-(void)setWakeupsDuration:(double)arg1 ;
-(unsigned long long)numWakeupsLimit;
-(void)setNumWakeupsLimit:(unsigned long long)arg1 ;
-(double)wakeupsLimitDuration;
-(void)setWakeupsLimitDuration:(double)arg1 ;
-(double)writeDuration;
-(void)setWriteDuration:(double)arg1 ;
-(unsigned long long)bytesWrittenLimit;
-(void)setBytesWrittenLimit:(unsigned long long)arg1 ;
-(double)writeLimitDuration;
-(void)setWriteLimitDuration:(double)arg1 ;
-(NSString *)eventNote;
-(void)setEventNote:(NSString *)arg1 ;
-(SATimeRange *)eventTimeRange;
-(void)setEventTimeRange:(SATimeRange *)arg1 ;
-(NSString *)actionTaken;
-(void)setActionTaken:(NSString *)arg1 ;
-(double)extraDuration;
-(void)setExtraDuration:(double)arg1 ;
-(NSString *)durationNote;
-(void)setDurationNote:(NSString *)arg1 ;
-(NSString *)stepsNote;
-(void)setStepsNote:(NSString *)arg1 ;
-(NSString *)targetProcessBundleVersion;
-(NSString *)targetProcessBundleShortVersion;
-(NSString *)targetProcessBundleBuildVersion;
-(NSString *)targetProcessBundleProjectName;
-(NSString *)targetProcessBundleSourceVersion;
-(NSString *)targetProcessBundleProductBuildVersion;
-(NSString *)targetProcessBundleId;
-(NSString *)targetProcessCommerceAppID;
-(NSString *)targetProcessCommerceExternalID;
-(NSString *)targetProcessVendorID;
-(SABinaryLoadInfo *)prelinkedKernelLoadInfo;
-(void)setPrelinkedKernelLoadInfo:(SABinaryLoadInfo *)arg1 ;
-(BOOL)initWithPAStyleCoder:(id)arg1 ;
-(id)taskForPid:(int)arg1 andName:(const char*)arg2 didExecAtTimestamp:(id)arg3 sharedCache:(id)arg4 ;
-(void)kperfSample:(trace_point*)arg1 state:(id)arg2 ;
-(void)kperfTimerFire:(trace_point*)arg1 state:(id)arg2 ;
-(void)kperfRecord:(kpdecode_record*)arg1 state:(id)arg2 frameIterator:(id)arg3 systemSharedCache:(id)arg4 nonSystemSharedCache:(id)arg5 pidsUsingNonSystemSharedCache:(id)arg6 ;
-(void)kperfNewThread:(trace_point*)arg1 state:(id)arg2 ;
-(void)kperfExecString:(trace_point*)arg1 state:(id)arg2 ;
-(void)kperfLostEvents:(trace_point*)arg1 state:(id)arg2 ;
-(int)_addKPerfDataFromKTraceSession:(ktrace_sessionRef)arg1 beforeMachAbsTime:(unsigned long long)arg2 systemSharedCache:(id)arg3 nonSystemSharedCache:(id)arg4 pidsUsingNonSystemSharedCache:(id)arg5 ;
-(id)tidToPidDict;
-(id)tidsForPid:(int)arg1 ;
-(id)idleThreadSet;
-(BOOL)parseKTraceFile:(const char*)arg1 warningsOut:(id)arg2 errorOut:(id*)arg3 ;
-(id)binaryFormat;
-(BOOL)saveBinaryFormatToStream:(_sFILE*)arg1 ;
@end

