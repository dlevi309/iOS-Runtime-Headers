/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutBuilderAssociatedSeriesEntity : HDHealthEntity
+(long long)protectionClass;
+(id)foreignKeys;
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)uniquedColumns;
+(long long)associateSeries:(id)arg1 toWorkoutBuilderID:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)seriesForBuilder:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)enumerateSeriesForBuilder:(id)arg1 transaction:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
+(id)allBuilderAssociatedSeriesWithProfile:(id)arg1 error:(id*)arg2 ;
@end

