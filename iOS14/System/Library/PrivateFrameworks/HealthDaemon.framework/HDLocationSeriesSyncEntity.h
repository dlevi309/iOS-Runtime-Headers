/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1 ;
+(id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1 ;
+(id)syncEntityIdentifier;
+(BOOL)supportsSpeculativeNanoSyncChanges;
+(int)nanoSyncObjectType;
+(Class)healthEntityClass;
+(id)_predicateForSyncSession:(id)arg1 ;
+(id)_objectWithCodable:(id)arg1 ;
+(id)_basePruningPredicateForDate:(id)arg1 profile:(id)arg2 ;
+(Class)_syncedSampleTypeClass;
@end

