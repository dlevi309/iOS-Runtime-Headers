/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <ActivitySharingPlugin/ActivitySharingPlugin-Structs.h>
#import <HealthDaemon/HDDataEntity.h>

@interface ASDatabaseCompetitionEntity : HDDataEntity
+(id)databaseTable;
+(id)uniquedColumns;
+(const SCD_Struct_AS0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(long long)protectionClass;
+(BOOL)_insertCompetitions:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_competitionsWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_insertCompetition:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(BOOL)saveCompetitions:(id)arg1 profile:(id)arg2 withError:(id*)arg3 ;
+(BOOL)removeCompetitionsForFriendUUID:(id)arg1 type:(long long)arg2 profile:(id)arg3 withError:(id*)arg4 ;
+(BOOL)removeAllCompetitionsWithProfile:(id)arg1 error:(id*)arg2 ;
+(id)allDatabaseCompetitionsWithProfile:(id)arg1 withError:(id*)arg2 ;
@end

