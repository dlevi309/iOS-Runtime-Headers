/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDStatisticsCalculatorEntity : HDHealthEntity
+(long long)protectionClass;
+(id)foreignKeys;
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)uniquedColumns;
+(Class)ownerEntityClass;
+(id)ownerEntityReferenceColumn;
+(id)statisticsForOwner:(id)arg1 type:(id)arg2 anchor:(id*)arg3 transaction:(id)arg4 error:(id*)arg5 ;
+(id)calculatorForOwner:(id)arg1 type:(id)arg2 anchor:(id*)arg3 transaction:(id)arg4 error:(id*)arg5 ;
+(BOOL)setStatistics:(id)arg1 forOwner:(id)arg2 anchor:(id)arg3 transaction:(id)arg4 error:(id*)arg5 ;
+(BOOL)setCalculator:(id)arg1 forOwner:(id)arg2 anchor:(id)arg3 transaction:(id)arg4 error:(id*)arg5 ;
+(BOOL)deleteStatisticsForOwner:(id)arg1 type:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
+(BOOL)enumerateStatisticsForOwner:(id)arg1 transaction:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
@end

