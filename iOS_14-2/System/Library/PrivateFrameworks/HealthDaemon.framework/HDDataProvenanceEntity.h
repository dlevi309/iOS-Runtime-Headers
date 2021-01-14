/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDDataProvenanceEntity : HDHealthEntity
+(id)databaseTable;
+(id)uniquedColumns;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)_derivedFlagsForSourceID:(long long)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)insertOrLookupDataProvenanceForSyncProvenance:(long long)arg1 originProductType:(id)arg2 originSystemBuild:(id)arg3 originOSVersion:(SCD_Struct_HD6)arg4 localProductType:(id)arg5 localSystemBuild:(id)arg6 sourceVersion:(id)arg7 timeZoneName:(id)arg8 sourceID:(id)arg9 deviceID:(id)arg10 contributorID:(id)arg11 transaction:(id)arg12 error:(id*)arg13 ;
+(long long)protectionClass;
+(id)originProvenanceForPersistentID:(long long)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)sourceIDsWithProvenanceFromSourceIDs:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
@end

