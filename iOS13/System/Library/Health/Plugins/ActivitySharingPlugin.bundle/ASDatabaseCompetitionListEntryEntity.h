/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <ActivitySharingPlugin/ActivitySharingPlugin-Structs.h>
#import <HealthDaemon/HDDataEntity.h>

@interface ASDatabaseCompetitionListEntryEntity : HDDataEntity
+(long long)protectionClass;
+(id)databaseTable;
+(id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(const SCD_Struct_AS0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)uniquedColumns;
+(BOOL)_insertCompetitionLists:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_insertCompetitionList:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(BOOL)saveCompetitionList:(id)arg1 profile:(id)arg2 withError:(id*)arg3 ;
+(BOOL)enumerateAllCompetitionListsWithProfile:(id)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
+(BOOL)removeAllCompetitionListsWithProfile:(id)arg1 error:(id*)arg2 ;
@end

