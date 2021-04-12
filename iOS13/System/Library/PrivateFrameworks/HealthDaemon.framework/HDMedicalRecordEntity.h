/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSampleEntity.h>

@interface HDMedicalRecordEntity : HDSampleEntity
+(id)databaseTable;
+(id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5 ;
+(long long)preferredEntityType;
+(id)mostRecentlyNotifiedLatestModifiedDateWithProfile:(id)arg1 error:(id*)arg2 ;
+(id)latestCreationDateWithProfile:(id)arg1 error:(id*)arg2 ;
+(BOOL)storeMostRecentlyNotifiedLatestModifiedDate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)orderingTermForSortDescriptor:(id)arg1 ;
+(id)_keyValueDomainWithProfile:(id)arg1 ;
+(id)latestDateForProperty:(id)arg1 sampleTypes:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)latestModifiedDateWithProfile:(id)arg1 error:(id*)arg2 ;
@end

