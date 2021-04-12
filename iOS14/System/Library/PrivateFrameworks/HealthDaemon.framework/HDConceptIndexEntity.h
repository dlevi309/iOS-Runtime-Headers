/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDConceptIndexEntity : HDHealthEntity
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)sampleUUIDsForConceptIdentifier:(long long)arg1 keyPaths:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)_propertiesForEntity;
+(BOOL)_insertConceptIndexEntry:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)allConceptIndexEntriesWithProfile:(id)arg1 error:(id*)arg2 ;
+(BOOL)storeState:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)conceptIndexEntriesForSampleUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(long long)protectionClass;
+(BOOL)removeAllConceptIndexEntriesWithProfile:(id)arg1 error:(id*)arg2 ;
+(id)indices;
+(BOOL)insertConceptIndexEntries:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)_enumerateConceptIndexEntriesWithPredicate:(id)arg1 transaction:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
+(BOOL)removeConceptIndexEntriesForSampleUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_conceptIndexEntriesWithPredicate:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(id)conceptIndexEntriesForSampleUUID:(id)arg1 type:(unsigned long long)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)_keyValueDomainWithProfile:(id)arg1 ;
+(id)stateWithProfile:(id)arg1 error:(id*)arg2 ;
@end

