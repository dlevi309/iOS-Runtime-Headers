/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDObjectAuthorizationEntity : HDHealthEntity
+(long long)protectionClass;
+(id)foreignKeys;
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)propertyForSyncProvenance;
+(id)uniquedColumns;
+(BOOL)resetAllObjectAuthorizationRecordsForProfile:(id)arg1 error:(id*)arg2 ;
+(id)authorizationRecordsForSamples:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)authorizationStatusForSamplesOfType:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)authorizationRecordsBySourceForSampleWithUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)resetAuthorizationForObjects:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)resetObjectAuthorizationRecordsForSource:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)_setObjectAuthorizationRecords:(id)arg1 syncProvenance:(long long)arg2 skipErrors:(BOOL)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(BOOL)setObjectAuthorizationRecords:(id)arg1 syncProvenance:(long long)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)_insertCodableObjectAuthorizations:(id)arg1 syncProvenance:(long long)arg2 profile:(id)arg3 error:(id*)arg4 ;
@end

