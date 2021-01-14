/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/

#import <ActivityAchievementsDaemon/ActivityAchievementsDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>
#import <libobjc.A.dylib/HDSyncEntity.h>
#import <libobjc.A.dylib/HDNanoSyncEntity.h>

@class NSString;

@interface ACHEarnedInstanceEntity : HDHealthEntity <HDSyncEntity, HDNanoSyncEntity>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)databaseTable;
+(const SCD_Struct_AC0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1 ;
+(BOOL)removeAllEarnedInstancesWithProfile:(id)arg1 error:(id*)arg2 ;
+(void)setSyncedEarnedInstancesObserver:(id)arg1 ;
+(id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(id)insertEarnedInstances:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 databaseContext:(id)arg4 error:(id*)arg5 ;
+(id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1 ;
+(id)allEarnedInstancesWithProfile:(id)arg1 error:(id*)arg2 ;
+(id)_insertEarnedInstances:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 databaseContext:(id)arg4 error:(id*)arg5 ;
+(id)syncedEarnedInstancesObserver;
+(id)syncEntityIdentifier;
+(long long)nextSyncAnchorWithSession:(id)arg1 predicate:(id)arg2 startSyncAnchor:(long long)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(BOOL)supportsSyncStore:(id)arg1 ;
+(id)propertyForSyncProvenance;
+(long long)protectionClass;
+(id)codableEarnedInstanceForEarnedInstanceInDatabase:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_insertEarnedInstance:(id)arg1 provenance:(long long)arg2 database:(id)arg3 error:(id*)arg4 ;
+(id)decodeSyncObjectWithData:(id)arg1 ;
+(id)_earnedInstancesWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(void)setJournalEntryAppliedObserver:(id)arg1 ;
+(long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)createTableSQL;
+(BOOL)removeEarnedInstances:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(HDSyncAnchorRange)arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id*)arg5 ;
+(id)journalEntryAppliedObserver;
@end

