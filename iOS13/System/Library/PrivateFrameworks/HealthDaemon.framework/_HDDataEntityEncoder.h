/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDEntityEncoder.h>

@class HDMetadataValueStatement, HDDataProvenanceCache;

@interface _HDDataEntityEncoder : HDEntityEncoder {

	HDMetadataValueStatement* _metadataValueStatement;
	HDDataProvenanceCache* _dataProvenanceCache;
	/*^block*/id _metadataKeyFilter;
	BOOL _includeAutomaticTimeZones;

}
-(void)finish;
-(id)initWithHealthEntityClass:(Class)arg1 profile:(id)arg2 database:(id)arg3 purpose:(long long)arg4 encodingOptions:(id)arg5 authorizationFilter:(/*^block*/id)arg6 ;
-(id)orderedProperties;
-(id)objectForPersistentID:(long long)arg1 row:(HDSQLiteRowRef)arg2 error:(id*)arg3 ;
-(id)codableRepresentationForPersistentID:(long long)arg1 row:(HDSQLiteRowRef)arg2 error:(id*)arg3 ;
-(BOOL)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(HDSQLiteRowRef)arg3 error:(id*)arg4 ;
-(id)_copyBaseMetadataForRow:(HDSQLiteRowRef)arg1 ;
@end

