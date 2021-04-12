/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDSyncEntity.h>

@class NSString;

@interface HDMedicalIDSyncEntity : NSObject <HDSyncEntity>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1 ;
+(id)syncEntityIdentifier;
+(BOOL)supportsSyncStore:(id)arg1 ;
+(id)decodeSyncObjectWithData:(id)arg1 ;
+(long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(HDSyncAnchorRange)arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id*)arg5 ;
+(long long)nextSyncAnchorWithSession:(id)arg1 startSyncAnchor:(long long)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)touchSyncAnchorIfNecessaryWithProfile:(id)arg1 error:(id*)arg2 ;
+(BOOL)incrementSyncAnchorWithProfile:(id)arg1 error:(id*)arg2 ;
+(BOOL)setSyncProvenance:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)_touchSyncAnchorWithProfile:(id)arg1 shouldIncrement:(BOOL)arg2 error:(id*)arg3 ;
+(long long)_getCurrentSyncAnchorWithProfile:(id)arg1 error:(id*)arg2 ;
+(BOOL)_setSyncAnchor:(long long)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)getSyncProvencanceOfMedicalIDForProfile:(id)arg1 error:(id*)arg2 ;
+(id)_codableFromMedicalID:(id)arg1 ;
+(id)_medicalIDFromCodable:(id)arg1 ;
@end

