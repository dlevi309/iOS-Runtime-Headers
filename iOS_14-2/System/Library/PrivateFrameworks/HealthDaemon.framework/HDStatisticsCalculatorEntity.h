/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDStatisticsCalculatorEntity : HDHealthEntity
+(id)databaseTable;
+(id)uniquedColumns;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)foreignKeys;
+(long long)protectionClass;
+(id)ownerEntityReferenceColumn;
+(Class)ownerEntityClass;
+(id)statisticsForOwner:(id)arg1 type:(id)arg2 anchor:(id*)arg3 transaction:(id)arg4 error:(id*)arg5 ;
+(id)calculatorForOwner:(id)arg1 type:(id)arg2 anchor:(id*)arg3 transaction:(id)arg4 error:(id*)arg5 ;
+(BOOL)setStatistics:(id)arg1 forOwner:(id)arg2 anchor:(id)arg3 transaction:(id)arg4 error:(id*)arg5 ;
+(BOOL)setCalculator:(id)arg1 forOwner:(id)arg2 anchor:(id)arg3 transaction:(id)arg4 error:(id*)arg5 ;
+(BOOL)deleteStatisticsForOwner:(id)arg1 type:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
+(BOOL)enumerateStatisticsForOwner:(id)arg1 transaction:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
@end

