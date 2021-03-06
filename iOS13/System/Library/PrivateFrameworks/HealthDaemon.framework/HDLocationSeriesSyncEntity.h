/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDSampleSyncEntity.h>
#import <libobjc.A.dylib/HDNanoSyncEntity.h>

@class NSString;

@interface HDLocationSeriesSyncEntity : HDSampleSyncEntity <HDNanoSyncEntity>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)syncEntityIdentifier;
+(int)nanoSyncObjectType;
+(unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1 ;
+(id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1 ;
+(BOOL)supportsSpeculativeNanoSyncChanges;
+(Class)healthEntityClass;
+(id)_predicateForSyncSession:(id)arg1 ;
+(id)_objectWithCodable:(id)arg1 ;
+(id)_basePruningPredicateForDate:(id)arg1 profile:(id)arg2 ;
+(Class)_syncedSampleTypeClass;
@end

