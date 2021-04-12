/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDAuthorizationEntity : HDHealthEntity
+(long long)protectionClass;
+(id)foreignKeys;
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)propertyForSyncProvenance;
+(id)uniquedColumns;
+(id)readAuthorizationStatusesByTypeForBundleIdentifier:(id)arg1 types:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)authorizationRecordsByTypeForBundleIdentifier:(id)arg1 types:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)setAuthorizationStatuses:(id)arg1 authorizationRequests:(id)arg2 authorizationModes:(id)arg3 sourceEntity:(id)arg4 options:(unsigned long long)arg5 profile:(id)arg6 error:(id*)arg7 ;
+(BOOL)resetAuthorizationStatusesForBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)resetAllAuthorizationStatusesWithProfile:(id)arg1 error:(id*)arg2 ;
+(id)authorizationStatusesForBundleIdentifier:(id)arg1 types:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)authorizationRecordsBySourceForType:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)allSourcesRequestingTypes:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_predicateForSourceEntities:(id)arg1 types:(id)arg2 ;
+(id)_maxObjectPersistentIDForProfile:(id)arg1 error:(id*)arg2 ;
+(BOOL)_setAuthorizationStatuses:(id)arg1 authorizationRequests:(id)arg2 authorizationModes:(id)arg3 sourceEntity:(id)arg4 dateModified:(id)arg5 syncProvenance:(long long)arg6 objectAnchor:(long long)arg7 options:(unsigned long long)arg8 profile:(id)arg9 database:(id)arg10 error:(id*)arg11 ;
+(id)_allSourcesRequestingTypes:(id)arg1 additionalPredicate:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)_predicateForTypes:(id)arg1 ;
+(id)_predicateForBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)_resetAuthorizationStatusesWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_sourceEntityForCodableSourceAuthorization:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 database:(id)arg4 error:(id*)arg5 ;
+(BOOL)_insertCodableAuthorizations:(id)arg1 sourceEntity:(id)arg2 syncProvenance:(long long)arg3 objectAnchor:(long long)arg4 currentDate:(id)arg5 options:(unsigned long long)arg6 profile:(id)arg7 database:(id)arg8 error:(id*)arg9 ;
+(BOOL)_insertAuthorizationWithSourceIdentifier:(long long)arg1 dataTypeCode:(long long)arg2 authorizationStatus:(long long)arg3 authorizationRequest:(long long)arg4 authorizationMode:(long long)arg5 modificationDate:(id)arg6 currentDate:(id)arg7 syncProvenance:(long long)arg8 objectAnchor:(long long)arg9 modificationEpoch:(id)arg10 options:(unsigned long long)arg11 profile:(id)arg12 database:(id)arg13 error:(id*)arg14 ;
+(id)_nextModificationEpochForSourceIdentifier:(long long)arg1 type:(long long)arg2 profile:(id)arg3 database:(id)arg4 error:(id*)arg5 ;
+(id)_predicateForSourceEntities:(id)arg1 ;
+(id)modificationDateForSourceEntity:(id)arg1 type:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)setAuthorizationStatuses:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)_insertCodableSourceAuthorizations:(id)arg1 overwriteExisting:(BOOL)arg2 syncStore:(id)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(id)_propertiesForCodableAuthorization;
+(void)_addAuthorizationWithRow:(HDSQLiteRowRef)arg1 toCodableCollection:(id)arg2 ;
+(id)_predicateForType:(id)arg1 ;
@end

