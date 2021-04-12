/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutSessionControllerEntity : HDHealthEntity
+(id)databaseTable;
+(id)uniquedColumns;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)foreignKeys;
+(long long)protectionClass;
+(id)_predicateForRecoveryIdentifier:(id)arg1 workoutSession:(id)arg2 ;
+(BOOL)storeArchivedStateWithRecoveryIdentifier:(id)arg1 archivedState:(id)arg2 workoutSession:(id)arg3 transaction:(id)arg4 error:(id*)arg5 ;
+(BOOL)retrieveArchivedStateFromRecoveryIdentifier:(id)arg1 workoutSession:(id)arg2 transaction:(id)arg3 error:(id*)arg4 block:(/*^block*/id)arg5 ;
@end

