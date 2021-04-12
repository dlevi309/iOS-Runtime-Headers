/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
*/

#import <OSAnalytics/OSAnalytics-Structs.h>
#import <OSAnalytics/OSAReport.h>
#import <OSAnalytics/OSAConcreteReport.h>

@class NSString, NSMutableArray, NSArray, NSMutableDictionary, NSMutableString, NSDictionary;

@interface OSACrashReport : OSAReport <OSAConcreteReport> {

	unsigned _task;
	timeval _proc_starttime;
	NSString* _procPath;
	int _cpuType;
	BOOL _is64Bit;
	NSMutableArray* _taskImages;
	NSArray* _usedImages;
	NSMutableArray* _threadInfos;
	NSMutableArray* _applicationSpecificInfo;
	NSMutableArray* _dyldMessages;
	int _maxBinaryIdentifierLength;
	NSMutableDictionary* _extraInfo;
	unsigned _cs_status;
	unsigned long long _uniqId;
	long long* _exceptionCode;
	unsigned _exceptionCodeCount;
	int _signal;
	unsigned _threadPort;
	unsigned _threadState[1296];
	int _threadStateFlavor;
	unsigned _threadStateCount;
	unsigned _pageinState[1296];
	unsigned _pageinStateCount;
	unsigned _exceptionState[1296];
	unsigned _exceptionStateCount;
	unsigned long long _threadId;
	int _crashedThreadNumber;
	NSString* _parentProcessName;
	int _ppid;
	unsigned _uid;
	int _highlightedThreadNumber;
	NSString* _lastExceptionBacktrace;
	char _slice_uuid[37];
	BOOL _is_first_party;
	int _task_role;
	unsigned long long _coalition_id;
	NSString* _coalition_name;
	unsigned long long _workloop_id;
	unsigned long long _queue_serial_no;
	NSString* _memgraph_filename;
	NSMutableDictionary* _spewage_diag;
	unsigned long long _spewage_diag_total_length;
	unsigned long long _abort_cause;
	unsigned _exit_snapshot_length;
	exit_reason_snapshot* _exit_snapshot;
	unsigned _exit_payload_length;
	void* _exit_payload;
	NSString* _terminator_reason;
	NSString* _terminator_proc;
	int _terminator_pid;
	NSString* _caller_name;
	NSString* _vmregion_info;
	NSArray* _diagToolExtras;
	NSMutableString* _sig_frames;
	BOOL _is_corpse;
	unsigned long long _awakeSystemUptime;
	int _responsible_pid;
	NSString* _responsibleProc;
	NSDictionary* _workQueueLimits;
	NSDictionary* _bundle_info;
	NSDictionary* _build_info;
	NSDictionary* _store_info;
	NSString* _adam_id;
	NSString* _lsAppType;
	NSString* _lsDisplayName;
	NSString* _suspected3rdPartyPlugin;
	BOOL _bundleVisibility;
	BOOL _fatalDyldErrorOnLaunch;
	NSString* _sandboxContainer;
	NSString* _sleepWakeUUID;
	NSArray* _usedImagesLegacyInfo;
	BOOL _fullIntegration;
	BOOL _is_beta;
	BOOL _is_simulated;
	int _proc_id;
	int _exceptionType;
	NSString* _procName;
	NSString* _bundle_id;
	NSString* _short_vers;

}

@property (nonatomic,readonly) int proc_id;                         //@synthesize proc_id=_proc_id - In the implementation block
@property (nonatomic,readonly) NSString * procName;                 //@synthesize procName=_procName - In the implementation block
@property (nonatomic,readonly) NSString * bundle_id;                //@synthesize bundle_id=_bundle_id - In the implementation block
@property (nonatomic,readonly) NSString * short_vers;               //@synthesize short_vers=_short_vers - In the implementation block
@property (nonatomic,readonly) BOOL is_beta;                        //@synthesize is_beta=_is_beta - In the implementation block
@property (nonatomic,readonly) BOOL is_simulated;                   //@synthesize is_simulated=_is_simulated - In the implementation block
@property (nonatomic,readonly) int exceptionType;                   //@synthesize exceptionType=_exceptionType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadBundInfoAtURL:(id)arg1 withKeys:(id)arg2 ;
+(id)loadStoreInfo:(id)arg1 atURL:(id)arg2 ;
+(id)loadBuildInfo:(id)arg1 ;
-(void)dealloc;
-(NSString *)procName;
-(id)problemType;
-(BOOL)isActionable;
-(id)appleCareDetails;
-(id)reportNamePrefix;
-(void)generateLogAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)saveWithOptions:(id)arg1 ;
-(id)additionalIPSMetadata;
-(BOOL)secondChanceToSylog;
-(id)initWithTask:(unsigned)arg1 exceptionType:(int)arg2 thread:(unsigned)arg3 threadStateFlavor:(int)arg4 threadState:(unsigned)arg5 threadStateCount:(unsigned)arg6 ;
-(void)setApplicationSpecificInformation:(const char*)arg1 ;
-(void)stashStatus:(id)arg1 note:(id)arg2 ;
-(void)unpackExceptionCodes;
-(id)nameFromPid:(int)arg1 ;
-(id)pathFromPid:(int)arg1 ;
-(void)_extractWorkQueueLimitsFromData:(proc_workqueueinfo*)arg1 ;
-(void)finishExtractionUsingCorpse:(BOOL)arg1 ;
-(CSTypeRef)_getSymbolicator:(BOOL)arg1 forAutopsy:(BOOL)arg2 ;
-(void)_extractBinaryImageInfoUsingSymbolicator:(CSTypeRef)arg1 usingCatalog:(id)arg2 ;
-(void)_extractBacktraceInfoUsingSymbolicator:(CSTypeRef)arg1 usingCorpse:(BOOL)arg2 usingCatalog:(id)arg3 ;
-(void)_extractLastExceptionBacktraceUsingSymbolicator:(CSTypeRef)arg1 ;
-(void)extractLiveThreadStateInfo;
-(void)captureDiagInfo:(id)arg1 ;
-(void)_parseCorpse:(unsigned long long)arg1 size:(unsigned long long)arg2 ;
-(id)decode_exceptionCodes;
-(id)slice_uuid;
-(char*)_copyStringFromTask:(unsigned)arg1 atAddress:(unsigned long long)arg2 immutableOnly:(BOOL)arg3 maxLength:(unsigned long long)arg4 ;
-(VMURange)_regionAtAddress:(unsigned long long)arg1 immutableOnly:(BOOL)arg2 ;
-(id)_readDataFromMemory:(mapped_memory_tRef)arg1 atAddress:(unsigned long long)arg2 size:(unsigned long long)arg3 ;
-(id)_readStringAtTaskAddress:(unsigned long long)arg1 immutableOnly:(BOOL)arg2 maxLength:(unsigned long long)arg3 ;
-(void)_extractCrashReporterAnnotationsFromSymbolOwner:(CSTypeRef)arg1 withMemory:(mapped_memory_tRef)arg2 internal:(BOOL)arg3 ;
-(unsigned long long)_objcSelectorAddressForMessenger:(id)arg1 memory:(mapped_memory_tRef)arg2 ;
-(id)_objcSelectorNameForMessenger:(id)arg1 ;
-(void)captureLSInfo;
-(id)decode_exceptionType;
-(id)decode_signal;
-(id)decode_reasonNamespace;
-(id)decode_reasonDyld;
-(id)decode_reasonTcc;
-(id)decode_reasonCoreAnimation;
-(id)decode_reasonLibSystem;
-(id)decode_reasonCarousel;
-(id)decode_reasonMetal;
-(id)decode_reasonWatchdog;
-(id)decode_esr;
-(id)decode_cpuType;
-(id)reduceToTwoSigFigures:(unsigned long long)arg1 ;
-(BOOL)isExceptionNonFatal;
-(id)decode_reason;
-(id)decode_threadState;
-(id)initSimulated:(unsigned)arg1 withReason:(const char*)arg2 ;
-(void)enableSystemIntegration;
-(void)inspectLivePid:(int)arg1 exceptionCodes:(long long*)arg2 count:(unsigned)arg3 ;
-(void)noteCaller:(const char*)arg1 onThreadID:(unsigned long long)arg2 ;
-(void)autopsyCorpse;
-(void)autopsyCorpse:(unsigned long long)arg1 size:(unsigned long long)arg2 ;
-(unsigned long long)_readAddressFromMemory:(mapped_memory_tRef)arg1 atSymbol:(CSTypeRef)arg2 ;
-(unsigned long long)_readAddressFromMemory:(mapped_memory_tRef)arg1 atAddress:(unsigned long long)arg2 ;
-(void)loadBundleInfo;
-(id)_descriptionForException:(id)arg1 ;
-(id)terminationReasonExceptionCode;
-(int)proc_id;
-(NSString *)bundle_id;
-(NSString *)short_vers;
-(BOOL)is_beta;
-(BOOL)is_simulated;
-(int)exceptionType;
@end

