/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <ActivitySharingPlugin/ActivitySharingPlugin-Structs.h>
#import <HealthDaemon/HDDataEntity.h>

@interface ASDatabaseCompetitionListEntryEntity : HDDataEntity
+(id)databaseTable;
+(id)uniquedColumns;
+(const SCD_Struct_AS0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(long long)protectionClass;
+(BOOL)_insertCompetitionLists:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_insertCompetitionList:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(BOOL)saveCompetitionList:(id)arg1 profile:(id)arg2 withError:(id*)arg3 ;
+(BOOL)enumerateAllCompetitionListsWithProfile:(id)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
+(BOOL)removeAllCompetitionListsWithProfile:(id)arg1 error:(id*)arg2 ;
@end

