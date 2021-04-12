/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCModule.h>

@protocol OS_dispatch_queue;
@class BRCAccountSession, NSObject, brc_task_tracker, NSString;

@interface BRCFSWriter : NSObject <BRCModule> {

	BRCAccountSession* _session;
	Ai _suspendCount;
	NSObject*<OS_dispatch_queue> _serialQueue;
	brc_task_tracker* _taskTracker;
	BOOL _isCancelled;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) brc_task_tracker * taskTracker;                        //@synthesize taskTracker=_taskTracker - In the implementation block
@property (nonatomic,readonly) BRCAccountSession * session;                           //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isCancelled;                                      //@synthesize isCancelled=_isCancelled - In the implementation block
+(BOOL)_shouldForceApplyForItem:(id)arg1 ;
+(BOOL)_isPathMatchIdle:(const SCD_Struct_BR8*)arg1 ;
-(void)close;
-(void)cancel;
-(void)resume;
-(BOOL)isCancelled;
-(void)suspend;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(BRCAccountSession *)session;
-(brc_task_tracker *)taskTracker;
-(id)initWithAccountSession:(id)arg1 ;
-(void)applyChangesForServerItem:(id)arg1 localItem:(id)arg2 rank:(long long)arg3 zone:(id)arg4 activity:(id)arg5 hasFinished:(BOOL*)arg6 ;
-(BOOL)applyLocalEditIfNecessaryToURL:(id)arg1 forItem:(id)arg2 serverItem:(id)arg3 forDelete:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)bouncePathMatchesForLookup:(id)arg1 toApplyServerItem:(id)arg2 clientZone:(id)arg3 ;
-(void)fixupItemsAtStartup;
-(id)bouncePath:(id)arg1 forItemConflictingWithAnFSRoot:(id)arg2 ;
-(BOOL)bouncePathMatch:(const SCD_Struct_BR8*)arg1 toApplyServerItem:(id)arg2 clientZone:(id)arg3 ;
-(id)_generateGentlePhysicalBounceNameForPathMatch:(const SCD_Struct_BR8*)arg1 dirfd:(int)arg2 lastBounceNo:(unsigned long long*)arg3 ;
-(void)_applyChangesForServerAlias:(id)arg1 localAlias:(id)arg2 jobID:(long long)arg3 zone:(id)arg4 diffs:(unsigned long long)arg5 ;
-(void)_stageCreationOfDirectory:(id)arg1 ;
-(void)_stageCreationOfSymlink:(id)arg1 ;
-(void)writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(BOOL)arg3 ;
-(void)_writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(BOOL)arg3 ;
@end

