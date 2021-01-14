/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <libprequelite.dylib/PQLConnection.h>

@class br_pacer;

@interface BRCPQLConnection : PQLConnection {

	br_pacer* _batchingPacer;
	int _changeCount;
	double _flushInterval;
	BOOL _flushImmediately;
	BOOL _autovacuumInProgress;
	long long _changesOverride;
	BOOL _isReadonly;
	unsigned long long _vmStepsExecuted;

}

@property (assign,nonatomic) BOOL profilingEnabled; 
@property (nonatomic,readonly) unsigned long long vmStepsExecuted;              //@synthesize vmStepsExecuted=_vmStepsExecuted - In the implementation block
@property (nonatomic,copy) id lockedHandler; 
@property (nonatomic,readonly) BOOL isReadonly;                                 //@synthesize isReadonly=_isReadonly - In the implementation block
-(long long)changes;
-(void)setProfilingEnabled:(BOOL)arg1 ;
-(BOOL)attachDBAtPath:(id)arg1 as:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(void)_setLockedHandler;
-(void)usePacedBatchingOnTargetQueue:(id)arg1 withInterval:(double)arg2 changeCount:(int)arg3 ;
-(void)disableProfilingForQueriesInBlock:(/*^block*/id)arg1 ;
-(BOOL)openAtURL:(id)arg1 withFlags:(int)arg2 error:(id*)arg3 ;
-(void)flushToMakeEditsVisibleToIPCReaders;
-(void)brc_close;
-(void)setProfilingHook:(/*^block*/id)arg1 ;
-(BOOL)isReadonly;
-(void)autovacuumIfNeeded;
-(long long)sizeInBytes;
-(BOOL)needsAutovacuum;
-(BOOL)profilingEnabled;
-(BOOL)executeWithSlowStatementRadar:(id)arg1 sql:(id)arg2 ;
-(unsigned long long)vmStepsExecuted;
-(id)fetchWithSlowStatementRadar:(id)arg1 objectOfClass:(Class)arg2 sql:(id)arg3 ;
-(BOOL)executeWithExpectedIndex:(id)arg1 sql:(id)arg2 ;
-(BOOL)_shouldFlushWithChangeCount:(int)arg1 ;
-(void)_setErrorHandlerWithDBCorruptionHandler:(/*^block*/id)arg1 ;
-(id)initWithLabel:(id)arg1 dbCorruptionHandler:(/*^block*/id)arg2 ;
-(id)fetchWithSlowStatementRadar:(id)arg1 sql:(id)arg2 ;
-(BOOL)executeWithErrorHandler:(/*^block*/id)arg1 sql:(id)arg2 ;
@end

