/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>

@class NSMutableArray, NSMutableDictionary, NSString, SATimestamp, NSArray, SASharedCache, SAThread, NSMutableSet, SABinaryLoadInfo, NSDictionary;

@interface SATask : NSObject <SASerializable> {

	NSMutableArray* _taskStates;
	NSMutableDictionary* _threads;
	NSMutableDictionary* _dispatchQueues;
	NSString* _mainBinaryPath;
	NSString* _name;
	BOOL _alreadyAttemptedToGetLoadInfoFromLiveProcess;
	BOOL _isUnresponsive;
	BOOL _usesSuddenTermination;
	BOOL _allowsIdleExit;
	BOOL _isThirdParty;
	BOOL _isTranslocated;
	BOOL _alreadyGatheredDataFromLiveProcess;
	int _pid;
	int _ppid;
	int _rpid;
	unsigned _uid;
	unsigned long long _uniquePid;
	NSString* _bundleName;
	SATimestamp* _execTimestamp;
	SATimestamp* _exitTimestamp;
	double _timeOfLastResponse;
	NSArray* _binaryLoadInfos;
	SASharedCache* _sharedCache;
	SAThread* _mainThread;
	NSMutableSet* _rootFrames;
	CSArchitecture _architecture;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) int ppid;                                             //@synthesize ppid=_ppid - In the implementation block
@property (assign) int rpid;                                             //@synthesize rpid=_rpid - In the implementation block
@property (copy) NSString * name; 
@property (retain) SATimestamp * execTimestamp;                          //@synthesize execTimestamp=_execTimestamp - In the implementation block
@property (retain) SATimestamp * exitTimestamp;                          //@synthesize exitTimestamp=_exitTimestamp - In the implementation block
@property (assign) BOOL alreadyGatheredDataFromLiveProcess;              //@synthesize alreadyGatheredDataFromLiveProcess=_alreadyGatheredDataFromLiveProcess - In the implementation block
@property (retain) NSMutableSet * rootFrames;                            //@synthesize rootFrames=_rootFrames - In the implementation block
@property (assign) CSArchitecture architecture;                          //@synthesize architecture=_architecture - In the implementation block
@property (retain) SAThread * mainThread;                                //@synthesize mainThread=_mainThread - In the implementation block
@property (retain) SASharedCache * sharedCache;                          //@synthesize sharedCache=_sharedCache - In the implementation block
@property (readonly) int pid;                                            //@synthesize pid=_pid - In the implementation block
@property (readonly) unsigned uid;                                       //@synthesize uid=_uid - In the implementation block
@property (readonly) unsigned long long uniquePid;                       //@synthesize uniquePid=_uniquePid - In the implementation block
@property (readonly) NSString * bundleName;                              //@synthesize bundleName=_bundleName - In the implementation block
@property (readonly) BOOL isUnresponsive;                                //@synthesize isUnresponsive=_isUnresponsive - In the implementation block
@property (readonly) double timeOfLastResponse;                          //@synthesize timeOfLastResponse=_timeOfLastResponse - In the implementation block
@property (readonly) BOOL usesSuddenTermination;                         //@synthesize usesSuddenTermination=_usesSuddenTermination - In the implementation block
@property (readonly) BOOL allowsIdleExit;                                //@synthesize allowsIdleExit=_allowsIdleExit - In the implementation block
@property (readonly) BOOL isThirdParty;                                  //@synthesize isThirdParty=_isThirdParty - In the implementation block
@property (readonly) BOOL isTranslocated;                                //@synthesize isTranslocated=_isTranslocated - In the implementation block
@property (readonly) NSArray * binaryLoadInfos;                          //@synthesize binaryLoadInfos=_binaryLoadInfos - In the implementation block
@property (readonly) SABinaryLoadInfo * mainBinaryLoadInfo; 
@property (readonly) NSArray * taskStates;                               //@synthesize taskStates=_taskStates - In the implementation block
@property (readonly) NSDictionary * threads;                             //@synthesize threads=_threads - In the implementation block
@property (readonly) NSDictionary * dispatchQueues;                      //@synthesize dispatchQueues=_dispatchQueues - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA42*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)taskWithKCDataTask:(const task_snapshot_v2*)arg1 loadInfos:(const dyld_uuid_info_64*)arg2 numLoadInfos:(unsigned)arg3 machineArchitecture:(CSArchitecture)arg4 sharedCache:(id)arg5 ;
+(id)taskWithKCDataDeltaTask:(const task_delta_snapshot_v2*)arg1 loadInfos:(const dyld_uuid_info_64*)arg2 numLoadInfos:(unsigned)arg3 pid:(int)arg4 machineArchitecture:(CSArchitecture)arg5 sharedCache:(id)arg6 ;
+(id)taskWithStackshotTaskV1:(const task_snapshot*)arg1 loadInfos:(const dyld_uuid_info_64*)arg2 numLoadInfos:(unsigned)arg3 machineArchitecture:(CSArchitecture)arg4 sharedCache:(id)arg5 ;
+(id)taskWithPid:(int)arg1 uniquePid:(unsigned long long)arg2 name:(id)arg3 sharedCache:(id)arg4 ;
+(id)taskWithoutReferencesFromPAStyleSerializedTask:(const SCD_Struct_SA19*)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)debugDescription;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(SAThread *)mainThread;
-(NSString *)bundleName;
-(unsigned)uid;
-(SASharedCache *)sharedCache;
-(int)pid;
-(id)startTimestamp;
-(id)endTimestamp;
-(int)ppid;
-(CSArchitecture)architecture;
-(void)setArchitecture:(CSArchitecture)arg1 ;
-(void)setPpid:(int)arg1 ;
-(NSDictionary *)threads;
-(void)setSharedCache:(SASharedCache *)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA42*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA42*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(unsigned long long)uniquePid;
-(BOOL)isAliveAtTimestamp:(id)arg1 ;
-(id)mainBinaryPath;
-(BOOL)gatherLoadInfoFromLiveProcessWithDataGatheringOptions:(unsigned long long)arg1 ;
-(NSArray *)binaryLoadInfos;
-(void)postprocessWithDataGatheringOptions:(unsigned long long)arg1 mightBeAlive:(BOOL)arg2 ;
-(BOOL)correspondsToUniquePid:(unsigned long long)arg1 name:(const char*)arg2 loadInfos:(const dyld_uuid_info_64*)arg3 numLoadInfos:(unsigned)arg4 machineArchitecture:(CSArchitecture)arg5 sharedCache:(id)arg6 ;
-(SATimestamp *)exitTimestamp;
-(void)setExitTimestamp:(SATimestamp *)arg1 ;
-(BOOL)correspondsToPid:(int)arg1 name:(const char*)arg2 loadInfos:(const dyld_uuid_info_64*)arg3 numLoadInfos:(unsigned)arg4 machineArchitecture:(CSArchitecture)arg5 sharedCache:(id)arg6 ;
-(void)_gatherDataFromLiveProcessIsLate:(BOOL)arg1 ;
-(SATimestamp *)execTimestamp;
-(void)addThread:(id)arg1 ;
-(void)setMainThread:(SAThread *)arg1 ;
-(NSArray *)taskStates;
-(id)addStack:(id)arg1 ;
-(NSDictionary *)dispatchQueues;
-(void)addDispatchQueue:(id)arg1 ;
-(BOOL)addImageInfos:(id)arg1 ;
-(void)guessArchitectureGivenMachineArchitecture:(CSArchitecture)arg1 ;
-(void)setRpid:(int)arg1 ;
-(void)setExecTimestamp:(SATimestamp *)arg1 ;
-(void)addTaskState:(id)arg1 ;
-(id)truncatedUserStackFrame;
-(void)enumerateFrames:(/*^block*/id)arg1 ;
-(NSMutableSet *)rootFrames;
-(void)setRootFrames:(NSMutableSet *)arg1 ;
-(void)enumerateTaskStatesBetweenStartTime:(id)arg1 endTime:(id)arg2 reverseOrder:(BOOL)arg3 withSampleIndex:(BOOL)arg4 block:(/*^block*/id)arg5 ;
-(id)removeStacksOutsideThisProcess;
-(void)fixupFrameInstructions;
-(BOOL)hasExplicitName;
-(void)fixupThreadSuspension;
-(SABinaryLoadInfo *)mainBinaryLoadInfo;
-(void)populateReferencesUsingPAStyleSerializedTask:(const SCD_Struct_SA19*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(unsigned long long)sampleCountInTimestampRangeStart:(id)arg1 end:(id)arg2 ;
-(void)forwardFillMonotonicallyIncreasingData;
-(unsigned long long)indexOfFirstTaskStateOnOrAfterTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(unsigned long long)indexOfLastTaskStateOnOrBeforeTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(int)rpid;
-(BOOL)isTranslocated;
-(BOOL)isUnresponsive;
-(double)timeOfLastResponse;
-(void)cpuTimeNs:(unsigned long long*)arg1 cpuInstructions:(unsigned long long*)arg2 cpuCycles:(unsigned long long*)arg3 betweenStartTime:(id)arg4 endTime:(id)arg5 ;
-(id)architectureString;
-(BOOL)usesSuddenTermination;
-(BOOL)allowsIdleExit;
-(id)initWithPid:(int)arg1 andUniquePid:(unsigned long long)arg2 andName:(id)arg3 sharedCache:(id)arg4 ;
-(id)initWithKCDataTask:(const task_snapshot_v2*)arg1 withLoadInfos:(const dyld_uuid_info_64*)arg2 numLoadInfos:(unsigned)arg3 andMachineArchitecture:(CSArchitecture)arg4 sharedCache:(id)arg5 ;
-(id)initWithKCDataDeltaTask:(const task_delta_snapshot_v2*)arg1 withLoadInfos:(const dyld_uuid_info_64*)arg2 numLoadInfos:(unsigned)arg3 pid:(int)arg4 andMachineArchitecture:(CSArchitecture)arg5 sharedCache:(id)arg6 ;
-(id)initWithStackshotTaskV1:(const task_snapshot*)arg1 withLoadInfos:(const dyld_uuid_info_64*)arg2 numLoadInfos:(unsigned)arg3 andMachineArchitecture:(CSArchitecture)arg4 sharedCache:(id)arg5 ;
-(BOOL)_matchesName:(const char*)arg1 ;
-(void)setMainBinaryPath:(id)arg1 ;
-(void)checkForBetterName;
-(BOOL)correspondsToName:(const char*)arg1 loadInfos:(const dyld_uuid_info_64*)arg2 numLoadInfos:(unsigned)arg3 machineArchitecture:(CSArchitecture)arg4 sharedCache:(id)arg5 ;
-(id)lastTaskStateOnOrBeforeTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(id)firstTaskStateOnOrAfterTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(BOOL)isThirdParty;
-(BOOL)alreadyGatheredDataFromLiveProcess;
-(void)setAlreadyGatheredDataFromLiveProcess:(BOOL)arg1 ;
@end

