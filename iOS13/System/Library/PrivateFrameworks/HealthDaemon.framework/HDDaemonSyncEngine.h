/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDSyncEngine.h>

@protocol OS_dispatch_queue;
@class NSArray, NSDictionary, HDDaemonSyncEntityManager, HDProfile, NSObject, NSString;

@interface HDDaemonSyncEngine : NSObject <HDSyncEngine> {

	HDDaemonSyncEntityManager* _entityManager;
	/*^block*/id _unitTest_didCompleteReadTransaction;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                     //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id unitTest_didCompleteReadTransaction;                           //@synthesize unitTest_didCompleteReadTransaction=_unitTest_didCompleteReadTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * allOrderedSyncEntities; 
@property (nonatomic,copy,readonly) NSDictionary * allSyncEntitiesByIdentifier; 
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)performSyncSession:(id)arg1 error:(id*)arg2 ;
-(void)resetStore:(id)arg1 ;
-(BOOL)applySyncChange:(id)arg1 forStore:(id)arg2 error:(id*)arg3 ;
-(BOOL)applyAcknowledgedAnchorMap:(id)arg1 forStore:(id)arg2 resetNext:(BOOL)arg3 resetInvalid:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)getReceivedAnchorMap:(id)arg1 forStore:(id)arg2 error:(id*)arg3 ;
-(void)resetAnchorsWithFailedChanges:(id)arg1 store:(id)arg2 ;
-(NSDictionary *)allSyncEntitiesByIdentifier;
-(NSArray *)allOrderedSyncEntities;
-(long long)session:(id)arg1 requiresSyncWithAnchors:(id)arg2 error:(id*)arg3 ;
-(long long)nextSyncAnchorForEntity:(Class)arg1 session:(id)arg2 startSyncAnchor:(long long)arg3 error:(id*)arg4 ;
-(BOOL)_validateSequenceNumberForSyncChange:(id)arg1 store:(id)arg2 error:(id*)arg3 ;
-(long long)_validateAnchorsForSyncChange:(id)arg1 store:(id)arg2 error:(id*)arg3 ;
-(BOOL)_applySyncChange:(id)arg1 entity:(Class)arg2 store:(id)arg3 error:(id*)arg4 ;
-(BOOL)_performSyncSession:(id)arg1 error:(id*)arg2 ;
-(void)_resetStore:(id)arg1 ;
-(id)_syncAnchorMapForSyncEntityClass:(Class)arg1 session:(id)arg2 error:(id*)arg3 ;
-(BOOL)generateSyncObjectsForSession:(id)arg1 entity:(Class)arg2 syncAnchorRange:(HDSyncAnchorRange)arg3 messageHandler:(id)arg4 error:(id*)arg5 ;
-(long long)_synchronizeSyncEntityClass:(Class)arg1 session:(id)arg2 startAnchor:(long long*)arg3 finalAnchor:(long long)arg4 postTransactionBlocks:(id)arg5 error:(id*)arg6 ;
-(id)unitTest_didCompleteReadTransaction;
-(void)setUnitTest_didCompleteReadTransaction:(id)arg1 ;
-(long long)_sendChanges:(id)arg1 session:(id)arg2 error:(id*)arg3 ;
@end

