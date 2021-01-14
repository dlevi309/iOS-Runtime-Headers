/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDSyncEntity.h>

@class NSString;

@interface HDDataSyncEntity : NSObject <HDSyncEntity>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1 ;
+(id)syncEntityIdentifier;
+(id)decodeSyncObjectWithData:(id)arg1 ;
+(long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(HDSyncAnchorRange)arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id*)arg5 ;
+(id)pruneSyncedObjectsThroughAnchor:(id)arg1 limit:(unsigned long long)arg2 nowDate:(id)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(long long)nextSyncAnchorWithSession:(id)arg1 startSyncAnchor:(long long)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(Class)healthEntityClass;
+(id)_predicateForSyncSession:(id)arg1 ;
+(BOOL)_insertObjectsFromCodableObjectCollection:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)objectsFromCodableObjectsInCollection:(id)arg1 ;
+(id)_provenanceFromCollection:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)_objectWithCodable:(id)arg1 ;
+(id)_pruningPredicateWithDate:(id)arg1 profile:(id)arg2 anchor:(id)arg3 ;
+(id)_basePruningPredicateForDate:(id)arg1 profile:(id)arg2 ;
+(id)unitTest_predicateForSyncSession:(id)arg1 ;
+(id)unitTest_pruningPredicateForDate:(id)arg1 profile:(id)arg2 ;
@end

