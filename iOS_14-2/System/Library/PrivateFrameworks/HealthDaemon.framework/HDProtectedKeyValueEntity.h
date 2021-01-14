/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDKeyValueEntity.h>

@interface HDProtectedKeyValueEntity : HDKeyValueEntity
+(id)databaseTable;
+(const char*)_insertStatementKey;
+(long long)protectionClass;
+(id)modificationDateForCharacteristicWithType:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)userCharacteristicForType:(id)arg1 profile:(id)arg2 entity:(id*)arg3 error:(id*)arg4 ;
+(BOOL)setUserCharacteristic:(id)arg1 forType:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(long long)_deviceLocalCategory;
+(id)keyForUserCharacteristicType:(id)arg1 ;
+(id)_keyForDataType:(id)arg1 error:(id*)arg2 ;
@end

