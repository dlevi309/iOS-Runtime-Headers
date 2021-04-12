/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDDataExternalSyncIdentifierEntity : HDHealthEntity
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)foreignKeys;
+(long long)protectionClass;
+(id)indices;
+(BOOL)populateSyncInfoForObjectID:(long long)arg1 database:(id)arg2 localSourceIDOut:(long long*)arg3 externalSyncObjectCodeOut:(long long*)arg4 syncIdentifierOut:(id*)arg5 syncVersionOut:(id*)arg6 deletedOut:(BOOL*)arg7 errorOut:(id*)arg8 ;
+(BOOL)insertSyncIdentifierWithProfile:(id)arg1 database:(id)arg2 objectID:(long long)arg3 localSourceID:(long long)arg4 externalSyncObjectCode:(long long)arg5 syncIdentifier:(id)arg6 syncVersion:(id)arg7 deleted:(BOOL)arg8 errorOut:(id*)arg9 ;
+(BOOL)enumerateValuesWithProfile:(id)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
+(BOOL)populateSyncInfoForLocalSourceID:(long long)arg1 externalSyncObjectCode:(long long)arg2 syncIdentifier:(id)arg3 deleted:(BOOL)arg4 database:(id)arg5 objectIDOut:(id*)arg6 errorOut:(id*)arg7 ;
@end

