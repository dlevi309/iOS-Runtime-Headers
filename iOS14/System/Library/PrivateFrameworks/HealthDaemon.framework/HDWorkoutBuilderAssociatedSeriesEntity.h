/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutBuilderAssociatedSeriesEntity : HDHealthEntity
+(id)databaseTable;
+(id)uniquedColumns;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)foreignKeys;
+(BOOL)enumerateSeriesForBuilder:(id)arg1 transaction:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
+(long long)protectionClass;
+(id)seriesForBuilder:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(long long)associateSeries:(id)arg1 toWorkoutBuilderID:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)allBuilderAssociatedSeriesWithProfile:(id)arg1 error:(id*)arg2 ;
@end

