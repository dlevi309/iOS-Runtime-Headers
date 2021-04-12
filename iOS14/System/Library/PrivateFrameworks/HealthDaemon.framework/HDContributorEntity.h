/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDContributorEntity : HDHealthEntity
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)propertyForSyncAnchor;
+(id)noneContributorUUID;
+(id)contributorEntityForNoContributorWithProfile:(id)arg1 error:(id*)arg2 ;
+(id)insertOrLookupContributorEntityForNoContributorWithTransaction:(id)arg1 error:(id*)arg2 ;
+(id)contributorEntityWithUUID:(id)arg1 profile:(id)arg2 includeDeleted:(BOOL)arg3 error:(id*)arg4 ;
+(id)propertyForSyncProvenance;
+(long long)protectionClass;
+(id)primaryUserContributorInProfile:(id)arg1 error:(id*)arg2 ;
+(id)_predicateForContributorReference:(id)arg1 ;
+(id)_nextSyncAnchorInDatabase:(id)arg1 error:(id*)arg2 ;
+(id)externalReferenceForContributorReference:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)primaryUserContributorInDatabase:(id)arg1 error:(id*)arg2 ;
+(id)contributorForReference:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)insertWithUUID:(id)arg1 appleID:(id)arg2 callerID:(id)arg3 primaryUser:(BOOL)arg4 syncProvenance:(long long)arg5 transaction:(id)arg6 error:(id*)arg7 ;
+(id)_predicateForContributorWithUUID:(id)arg1 ;
+(id)insertPrimaryUserWithAppleID:(id)arg1 callerID:(id)arg2 database:(id)arg3 error:(id*)arg4 ;
+(BOOL)deleteContributorWithUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_insertWithUUID:(id)arg1 appleID:(id)arg2 callerID:(id)arg3 deleted:(BOOL)arg4 modificationDate:(double)arg5 syncAnchor:(unsigned long long)arg6 syncProvenance:(long long)arg7 primaryUser:(BOOL)arg8 database:(id)arg9 error:(id*)arg10 ;
+(id)_predicateForNonDeletedContributor;
+(id)_contributorReferenceForEntityMatchingPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)insertWithUUID:(id)arg1 appleID:(id)arg2 callerID:(id)arg3 primaryUser:(BOOL)arg4 profile:(id)arg5 error:(id*)arg6 ;
-(id)appleIDInProfile:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateAppleID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
-(id)callerIDInProfile:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateCallerID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
-(id)modificationDateInProfile:(id)arg1 error:(id*)arg2 ;
-(id)syncAnchorInProfile:(id)arg1 error:(id*)arg2 ;
-(BOOL)deletedInProfile:(id)arg1 error:(id*)arg2 ;
@end

