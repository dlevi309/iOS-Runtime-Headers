/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDSourceEntity : HDHealthEntity
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(id)propertyForSyncAnchor;
+(id)sourceForLocalDeviceWithDatabase:(id)arg1 error:(id*)arg2 ;
+(id)_firstSourceWithPredicate:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(BOOL)enumerateBundleIdentifiersForSourcesForUUIDData:(id)arg1 transaction:(id)arg2 error:(id*)arg3 enumerationHandler:(/*^block*/id)arg4 ;
+(id)sourcesWithPredicate:(id)arg1 includeDeleted:(BOOL)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)enumerateBundleIdentifiersForSourcesWithPredicate:(id)arg1 database:(id)arg2 error:(id*)arg3 enumerationHandler:(/*^block*/id)arg4 ;
+(id)propertyForSyncProvenance;
+(long long)protectionClass;
+(id)insertCodableSource:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)_firstSourceWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)indices;
+(id)_sourcesWithPredicate:(id)arg1 includeDeleted:(BOOL)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)sourcesWithPredicate:(id)arg1 orderingTerms:(id)arg2 includeDeleted:(BOOL)arg3 database:(id)arg4 error:(id*)arg5 ;
+(id)firstSourceWithPredicate:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)insertSourceWithUUID:(id)arg1 bundleIdentifier:(id)arg2 owningAppBundleIdentifier:(id)arg3 name:(id)arg4 options:(unsigned long long)arg5 isCurrentDevice:(BOOL)arg6 productType:(id)arg7 modificationDate:(id)arg8 provenance:(long long)arg9 profile:(id)arg10 error:(id*)arg11 ;
+(id)_insertSourceWithUUID:(id)arg1 bundleIdentifier:(id)arg2 owningAppBundleIdentifier:(id)arg3 name:(id)arg4 options:(unsigned long long)arg5 isCurrentDevice:(BOOL)arg6 productType:(id)arg7 deleted:(BOOL)arg8 modificationDate:(id)arg9 provenance:(long long)arg10 database:(id)arg11 error:(id*)arg12 ;
+(id)sourcesWithPredicate:(id)arg1 includeDeleted:(BOOL)arg2 database:(id)arg3 error:(id*)arg4 ;
+(id)firstSourceWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
-(id)sourceWithProfile:(id)arg1 error:(id*)arg2 ;
-(id)sourceUUIDWithHealthDatabase:(id)arg1 error:(id*)arg2 ;
-(id)sourceBundleIdentifierInDatabase:(id)arg1 error:(id*)arg2 ;
-(BOOL)_updateValues:(id)arg1 forProperties:(id)arg2 profile:(id)arg3 didUpdate:(BOOL*)arg4 error:(id*)arg5 ;
-(BOOL)setName:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
-(BOOL)setOptions:(unsigned long long)arg1 profile:(id)arg2 didUpdate:(BOOL*)arg3 error:(id*)arg4 ;
-(id)codableSourceWithProfile:(id)arg1 error:(id*)arg2 ;
-(id)sourceUUIDWithProfile:(id)arg1 error:(id*)arg2 ;
-(id)codableSourceWithEncoder:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteSourceWithDatabase:(id)arg1 error:(id*)arg2 ;
-(BOOL)adoptAsLocalSourceWithBundleIdentifier:(id)arg1 UUID:(id)arg2 name:(id)arg3 productType:(id)arg4 profile:(id)arg5 error:(id*)arg6 ;
@end

