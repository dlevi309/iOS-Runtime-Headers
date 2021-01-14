/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDDeviceEntity : HDHealthEntity
+(id)databaseTable;
+(id)uniquedColumns;
+(id)_predicateForDeviceWithUUID:(id)arg1 ;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)_codableDeviceWithRow:(HDSQLiteRowRef)arg1 ;
+(id)_deviceWithRow:(HDSQLiteRowRef)arg1 ;
+(BOOL)_insertCodableDevices:(id)arg1 syncStore:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 ;
+(BOOL)_validateCodableDevice:(id)arg1 error:(id*)arg2 ;
+(id)_insertDeviceWithUUID:(id)arg1 creationDate:(double)arg2 name:(id)arg3 manufacturer:(id)arg4 model:(id)arg5 hardwareVersion:(id)arg6 firmwareVersion:(id)arg7 softwareVersion:(id)arg8 localIdentifier:(id)arg9 UDIDeviceIdentifier:(id)arg10 syncProvenance:(long long)arg11 database:(id)arg12 error:(id*)arg13 ;
+(id)_predicateForDeviceProperty:(id)arg1 withValues:(id)arg2 ;
+(id)_deviceEntityWithDevice:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)_predicateForDevice:(id)arg1 ;
+(id)deviceEntitiesWithProperty:(id)arg1 matchingValues:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 ;
+(id)_deviceEntitiesWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)propertyForSyncProvenance;
+(id)deviceEntityWithDevice:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(long long)protectionClass;
+(id)_sqlPropertyForPredicateProperty:(id)arg1 ;
+(id)deviceEntitiesWithDevice:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)deviceEntityWithUUID:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)_propertiesForDevice;
-(id)deviceUUIDInDatabase:(id)arg1 error:(id*)arg2 ;
-(id)deviceInHealthDatabase:(id)arg1 error:(id*)arg2 ;
-(id)deviceUUIDInHealthDatabase:(id)arg1 error:(id*)arg2 ;
-(id)creationDateInHealthDatabase:(id)arg1 error:(id*)arg2 ;
@end

