/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <HealthDaemon/HDEntityEncoder.h>

@interface _HDClinicalAPIReminderEntityEncoder : HDEntityEncoder
-(id)orderedProperties;
-(BOOL)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(HDSQLiteRowRef)arg3 error:(id*)arg4 ;
-(id)createBareObject;
-(id)_clientSourceForRow:(HDSQLiteRowRef)arg1 error:(id*)arg2 ;
@end

