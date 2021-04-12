/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDNanoSyncEntity.h>
#import <libobjc.A.dylib/HDSyncEntity.h>

@class NSString;

@interface HDMedicalIDSyncEntity : NSObject <HDNanoSyncEntity, HDSyncEntity>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)syncEntityIdentifier;
+(int)nanoSyncObjectType;
+(unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1 ;
+(id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1 ;
+(id)decodeSyncObjectWithData:(id)arg1 ;
+(long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(HDSyncAnchorRange)arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id*)arg5 ;
+(long long)nextSyncAnchorWithSession:(id)arg1 startSyncAnchor:(long long)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)supportsSyncStore:(id)arg1 ;
+(BOOL)companionDidChangeForProfile:(id)arg1 error:(id*)arg2 ;
+(id)getSyncProvencanceOfMedicalIDForProfile:(id)arg1 error:(id*)arg2 ;
+(BOOL)touchSyncAnchorIfNecessaryWithProfile:(id)arg1 error:(id*)arg2 ;
+(BOOL)incrementSyncAnchorWithProfile:(id)arg1 error:(id*)arg2 ;
+(BOOL)setSyncProvenance:(long long)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)_touchSyncAnchorWithProfile:(id)arg1 shouldIncrement:(BOOL)arg2 error:(id*)arg3 ;
+(long long)_getCurrentSyncAnchorWithProfile:(id)arg1 error:(id*)arg2 ;
+(BOOL)_setSyncAnchor:(long long)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_codableFromMedicalID:(id)arg1 ;
+(id)_medicalIDFromCodable:(id)arg1 ;
@end

