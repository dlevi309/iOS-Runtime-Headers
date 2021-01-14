/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDEntityEncoder.h>

@class NSSet;

@interface _HDActivityCacheEntityEncoder : HDEntityEncoder {

	NSSet* _activityStatisticsQuantityInfoClasses;

}
-(id)createBareObject;
-(id)orderedProperties;
-(id)codableRepresentationForPersistentID:(long long)arg1 row:(HDSQLiteRowRef)arg2 error:(id*)arg3 ;
-(BOOL)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(HDSQLiteRowRef)arg3 error:(id*)arg4 ;
-(BOOL)_shouldIncludeActivityCachePrivateProperties;
-(BOOL)_shouldIncludeActivityCacheStatistics;
-(id)_decodeActivityQuantityStatisticsInfosWithRow:(HDSQLiteRowRef)arg1 column:(int)arg2 ;
-(void)_applyPrivateActivityCachePropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(HDSQLiteRowRef)arg3 ;
-(void)_applyActivityCacheStatisticsToObject:(id)arg1 persistentID:(long long)arg2 row:(HDSQLiteRowRef)arg3 ;
@end

