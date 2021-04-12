/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	unsigned long long _vmStepsExecuted;

}

@property (assign,nonatomic) BOOL profilingEnabled; 
@property (nonatomic,readonly) unsigned long long vmStepsExecuted;              //@synthesize vmStepsExecuted=_vmStepsExecuted - In the implementation block
@property (nonatomic,copy) id lockedHandler; 
-(id)init;
-(long long)changes;
-(long long)sizeInBytes;
-(void)setProfilingEnabled:(BOOL)arg1 ;
-(BOOL)openAtURL:(id)arg1 withFlags:(int)arg2 error:(id*)arg3 ;
-(void)setProfilingHook:(/*^block*/id)arg1 ;
-(id)initWithLabel:(id)arg1 dbCorruptionHandler:(/*^block*/id)arg2 ;
-(void)_setErrorHandlerWithDBCorruptionHandler:(/*^block*/id)arg1 ;
-(void)_setLockedHandler;
-(void)brc_close;
-(BOOL)_shouldFlushWithChangeCount:(int)arg1 ;
-(BOOL)needsAutovacuum;
-(void)autovacuumIfNeeded;
-(BOOL)profilingEnabled;
-(BOOL)attachDBAtPath:(id)arg1 as:(id)arg2 error:(id*)arg3 ;
-(void)flushToMakeEditsVisibleToIPCReaders;
-(id)fetchWithSlowStatementRadar:(id)arg1 sql:(id)arg2 ;
-(id)fetchWithSlowStatementRadar:(id)arg1 objectOfClass:(Class)arg2 sql:(id)arg3 ;
-(BOOL)executeWithExpectedIndex:(id)arg1 sql:(id)arg2 ;
-(BOOL)executeWithSlowStatementRadar:(id)arg1 sql:(id)arg2 ;
-(BOOL)executeWithErrorHandler:(/*^block*/id)arg1 sql:(id)arg2 ;
-(void)disableProfilingForQueriesInBlock:(/*^block*/id)arg1 ;
-(void)usePacedBatchingOnTargetQueue:(id)arg1 withInterval:(double)arg2 changeCount:(int)arg3 ;
-(unsigned long long)vmStepsExecuted;
@end

