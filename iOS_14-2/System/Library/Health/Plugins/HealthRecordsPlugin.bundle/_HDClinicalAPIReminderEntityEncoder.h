/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <HealthDaemon/HDEntityEncoder.h>

@interface _HDClinicalAPIReminderEntityEncoder : HDEntityEncoder
-(id)createBareObject;
-(id)orderedProperties;
-(BOOL)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(HDSQLiteRowRef)arg3 error:(id*)arg4 ;
-(id)_clientSourceForRow:(HDSQLiteRowRef)arg1 error:(id*)arg2 ;
@end

