/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDSeriesBuilderEntity : HDHealthEntity
+(long long)protectionClass;
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)freezeSeriesWithIdentifier:(id)arg1 metadata:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)discardBuilderWithIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)persistentEntityForBuilderIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)createPersistentEntityForBuilderIdentifier:(id)arg1 seriesType:(id)arg2 state:(long long)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(Class)seriesEntityClass;
-(BOOL)insertMetadata:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(long long)stateWithTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)setBuilderState:(long long)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(id)metadataWithTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setMetadata:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
@end

