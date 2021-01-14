/*
* Generated on Thursday, January 14, 2021 at 2:29:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libMemoryResourceException.dylib
*/

#import <libMemoryResourceException.dylib/libMemoryResourceException.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VMUProcessObjectGraph, NSDictionary, NSString, NSArray, NSDate;

@interface MemoryResourceException : NSObject <NSCopying> {

	unsigned long long _ioAccelDirtySwappedSize;
	BOOL _is64Bit;
	unsigned _task;
	unsigned _suspensionToken;
	int _pid;
	int _ppid;
	unsigned _dirtyFlags;
	unsigned _procFlags;
	VMUProcessObjectGraph* _memoryGraph;
	NSDictionary* _executionStack;
	NSString* _execName;
	NSString* _execPath;
	NSString* _bundleID;
	NSString* _coalitionBundleID;
	long long _exceptionType;
	unsigned long long _limitValue;
	long long _upTime;
	NSString* _hwModel;
	NSDictionary* _osVersion;
	long long _version;
	NSDictionary* _footprintOutput;
	NSArray* _ioSurfaceInfo;
	NSArray* _ioAccelMemoryInfo;
	NSArray* _ioAccelMemoryInfoErrors;
	unsigned long long _cid;
	NSDate* _startTime;
	NSDate* _currentTime;
	long long _exceptionCode0;
	unsigned long long _crashedThreadId;
	unsigned long long _ledgerPhysFootprint;
	unsigned long long _ledgerPhysFootprintPeak;
	unsigned long long _ledgerInternal;
	unsigned long long _ledgerInternalCompressed;
	unsigned long long _ledgerAlternateAccounting;
	unsigned long long _ledgerAlternateAccountingCompressed;
	unsigned long long _ledgerPurgeableNonvolatile;
	unsigned long long _ledgerPurgeableNonvolatileCompressed;
	unsigned long long _ledgerPageTable;
	unsigned long long _ledgerIOKitMapped;
	unsigned long long _ledgerWiredMem;
	unsigned long long _ledgerNetworkNonvolatile;
	unsigned long long _ledgerNetworkNonvolatileCompressed;
	NSArray* _osLogs;
	NSDictionary* _cachedMetaDataDict;
	NSString* _memgraphError;

}

@property (readonly) long long version;                                                    //@synthesize version=_version - In the implementation block
@property (readonly) unsigned task;                                                        //@synthesize task=_task - In the implementation block
@property (readonly) unsigned suspensionToken;                                             //@synthesize suspensionToken=_suspensionToken - In the implementation block
@property (readonly) NSDictionary * footprintOutput;                                       //@synthesize footprintOutput=_footprintOutput - In the implementation block
@property (readonly) NSArray * ioSurfaceInfo;                                              //@synthesize ioSurfaceInfo=_ioSurfaceInfo - In the implementation block
@property (readonly) NSArray * ioAccelMemoryInfo;                                          //@synthesize ioAccelMemoryInfo=_ioAccelMemoryInfo - In the implementation block
@property (readonly) NSArray * ioAccelMemoryInfoErrors;                                    //@synthesize ioAccelMemoryInfoErrors=_ioAccelMemoryInfoErrors - In the implementation block
@property (readonly) int pid;                                                              //@synthesize pid=_pid - In the implementation block
@property (readonly) int ppid;                                                             //@synthesize ppid=_ppid - In the implementation block
@property (readonly) unsigned long long cid;                                               //@synthesize cid=_cid - In the implementation block
@property (readonly) NSDate * startTime;                                                   //@synthesize startTime=_startTime - In the implementation block
@property (readonly) NSDate * currentTime;                                                 //@synthesize currentTime=_currentTime - In the implementation block
@property (readonly) unsigned dirtyFlags;                                                  //@synthesize dirtyFlags=_dirtyFlags - In the implementation block
@property (readonly) unsigned procFlags;                                                   //@synthesize procFlags=_procFlags - In the implementation block
@property (readonly) long long exceptionCode0;                                             //@synthesize exceptionCode0=_exceptionCode0 - In the implementation block
@property (readonly) unsigned long long crashedThreadId;                                   //@synthesize crashedThreadId=_crashedThreadId - In the implementation block
@property (readonly) unsigned long long ledgerPhysFootprint;                               //@synthesize ledgerPhysFootprint=_ledgerPhysFootprint - In the implementation block
@property (readonly) unsigned long long ledgerPhysFootprintPeak;                           //@synthesize ledgerPhysFootprintPeak=_ledgerPhysFootprintPeak - In the implementation block
@property (readonly) unsigned long long ledgerInternal;                                    //@synthesize ledgerInternal=_ledgerInternal - In the implementation block
@property (readonly) unsigned long long ledgerInternalCompressed;                          //@synthesize ledgerInternalCompressed=_ledgerInternalCompressed - In the implementation block
@property (readonly) unsigned long long ledgerAlternateAccounting;                         //@synthesize ledgerAlternateAccounting=_ledgerAlternateAccounting - In the implementation block
@property (readonly) unsigned long long ledgerAlternateAccountingCompressed;               //@synthesize ledgerAlternateAccountingCompressed=_ledgerAlternateAccountingCompressed - In the implementation block
@property (readonly) unsigned long long ledgerPurgeableNonvolatile;                        //@synthesize ledgerPurgeableNonvolatile=_ledgerPurgeableNonvolatile - In the implementation block
@property (readonly) unsigned long long ledgerPurgeableNonvolatileCompressed;              //@synthesize ledgerPurgeableNonvolatileCompressed=_ledgerPurgeableNonvolatileCompressed - In the implementation block
@property (readonly) unsigned long long ledgerPageTable;                                   //@synthesize ledgerPageTable=_ledgerPageTable - In the implementation block
@property (readonly) unsigned long long ledgerIOKitMapped;                                 //@synthesize ledgerIOKitMapped=_ledgerIOKitMapped - In the implementation block
@property (readonly) unsigned long long ledgerWiredMem;                                    //@synthesize ledgerWiredMem=_ledgerWiredMem - In the implementation block
@property (readonly) unsigned long long ledgerNetworkNonvolatile;                          //@synthesize ledgerNetworkNonvolatile=_ledgerNetworkNonvolatile - In the implementation block
@property (readonly) unsigned long long ledgerNetworkNonvolatileCompressed;                //@synthesize ledgerNetworkNonvolatileCompressed=_ledgerNetworkNonvolatileCompressed - In the implementation block
@property (readonly) NSArray * osLogs;                                                     //@synthesize osLogs=_osLogs - In the implementation block
@property (readonly) NSDictionary * cachedMetaDataDict;                                    //@synthesize cachedMetaDataDict=_cachedMetaDataDict - In the implementation block
@property (retain) NSString * memgraphError;                                               //@synthesize memgraphError=_memgraphError - In the implementation block
@property (readonly) VMUProcessObjectGraph * memoryGraph;                                  //@synthesize memoryGraph=_memoryGraph - In the implementation block
@property (readonly) NSDictionary * executionStack;                                        //@synthesize executionStack=_executionStack - In the implementation block
@property (readonly) NSString * execName;                                                  //@synthesize execName=_execName - In the implementation block
@property (readonly) NSString * execPath;                                                  //@synthesize execPath=_execPath - In the implementation block
@property (readonly) NSString * bundleID;                                                  //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) NSString * coalitionBundleID;                                         //@synthesize coalitionBundleID=_coalitionBundleID - In the implementation block
@property (readonly) long long exceptionType;                                              //@synthesize exceptionType=_exceptionType - In the implementation block
@property (readonly) unsigned long long limitValue;                                        //@synthesize limitValue=_limitValue - In the implementation block
@property (readonly) long long upTime;                                                     //@synthesize upTime=_upTime - In the implementation block
@property (readonly) BOOL is64Bit;                                                         //@synthesize is64Bit=_is64Bit - In the implementation block
@property (readonly) NSString * hwModel;                                                   //@synthesize hwModel=_hwModel - In the implementation block
@property (readonly) NSDictionary * osVersion;                                             //@synthesize osVersion=_osVersion - In the implementation block
+(id)dictionaryForIOAccelMemoryInfo:(id)arg1 ;
+(id)dictionaryForIOSurfaceDescription:(id)arg1 ;
+(id)resourceExceptionFromTask:(unsigned)arg1 error:(id*)arg2 ;
+(id)resourceExceptionFromLogFileHandle:(id)arg1 error:(id*)arg2 ;
-(int)ppid;
-(NSString *)execPath;
-(int)pid;
-(unsigned)task;
-(unsigned long long)cid;
-(BOOL)isFirstParty;
-(NSDictionary *)osVersion;
-(long long)exceptionType;
-(unsigned long long)limitValue;
-(NSDate *)currentTime;
-(unsigned)procFlags;
-(long long)upTime;
-(NSArray *)osLogs;
-(BOOL)is64Bit;
-(NSString *)hwModel;
-(NSString *)bundleID;
-(long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)startTime;
-(void)dealloc;
-(id)processPidString;
-(void)extractCorpseInfoHandler:(kcdata_iter*)arg1 ;
-(id)_symbolOwners;
-(long long)_saveLogFileWithHandle:(id)arg1 error:(id*)arg2 ;
-(id)createMetaDataDict;
-(void)releaseAnalyzedTask;
-(id)initUsingHostInfoWithTask:(unsigned)arg1 andSuspensionToken:(unsigned)arg2 ;
-(BOOL)extractCorpseInfo;
-(BOOL)extractTaskInfo;
-(void)_populateVerboseDiagnosticsWithOptions:(unsigned long long)arg1 timeoutSecs:(unsigned long long)arg2 ;
-(void)generateFootprint:(BOOL)arg1 ;
-(void)extractBacktraceInfo;
-(BOOL)generateMemoryGraph:(BOOL)arg1 ;
-(id)initWithMetaDataDict:(id)arg1 andMemoryGraph:(id)arg2 ;
-(id)prettyPrintBacktrace:(BOOL)arg1 ;
-(id)prettyPrintBinaryImages;
-(id)prettyPrintIOSurfaceInfo;
-(id)prettyPrintIOAccelMemoryInfo;
-(BOOL)saveLogFileWithHandle:(id)arg1 error:(id*)arg2 ;
-(void)extractSystemLogs:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 ;
-(void)populateVerboseDiagnostics:(BOOL)arg1 ;
-(VMUProcessObjectGraph *)memoryGraph;
-(NSDictionary *)executionStack;
-(NSString *)execName;
-(NSString *)coalitionBundleID;
-(unsigned)suspensionToken;
-(NSDictionary *)footprintOutput;
-(NSArray *)ioSurfaceInfo;
-(NSArray *)ioAccelMemoryInfo;
-(NSArray *)ioAccelMemoryInfoErrors;
-(unsigned)dirtyFlags;
-(long long)exceptionCode0;
-(unsigned long long)crashedThreadId;
-(unsigned long long)ledgerPhysFootprint;
-(unsigned long long)ledgerPhysFootprintPeak;
-(unsigned long long)ledgerInternal;
-(unsigned long long)ledgerInternalCompressed;
-(unsigned long long)ledgerAlternateAccounting;
-(unsigned long long)ledgerAlternateAccountingCompressed;
-(unsigned long long)ledgerPurgeableNonvolatile;
-(unsigned long long)ledgerPurgeableNonvolatileCompressed;
-(unsigned long long)ledgerPageTable;
-(unsigned long long)ledgerIOKitMapped;
-(unsigned long long)ledgerWiredMem;
-(unsigned long long)ledgerNetworkNonvolatile;
-(unsigned long long)ledgerNetworkNonvolatileCompressed;
-(NSDictionary *)cachedMetaDataDict;
-(NSString *)memgraphError;
-(void)setMemgraphError:(NSString *)arg1 ;
@end

