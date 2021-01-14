/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDEntityEncoder.h>

@interface _HDECGSampleEntityEncoder : HDEntityEncoder
-(id)createBareObject;
-(id)orderedProperties;
-(id)codableRepresentationForPersistentID:(long long)arg1 row:(HDSQLiteRowRef)arg2 error:(id*)arg3 ;
-(BOOL)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(HDSQLiteRowRef)arg3 error:(id*)arg4 ;
@end

