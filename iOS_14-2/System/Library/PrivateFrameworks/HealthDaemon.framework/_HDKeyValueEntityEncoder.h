/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDEntityEncoder.h>

@interface _HDKeyValueEntityEncoder : HDEntityEncoder
-(id)initWithHealthEntityClass:(Class)arg1 profile:(id)arg2 transaction:(id)arg3 purpose:(long long)arg4 encodingOptions:(id)arg5 authorizationFilter:(/*^block*/id)arg6 ;
-(id)objectForPersistentID:(long long)arg1 row:(HDSQLiteRowRef)arg2 error:(id*)arg3 ;
-(id)orderedProperties;
-(id)codableRepresentationForPersistentID:(long long)arg1 row:(HDSQLiteRowRef)arg2 error:(id*)arg3 ;
-(BOOL)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(HDSQLiteRowRef)arg3 error:(id*)arg4 ;
@end

