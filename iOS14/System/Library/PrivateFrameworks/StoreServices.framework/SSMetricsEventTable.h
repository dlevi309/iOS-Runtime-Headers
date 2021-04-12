/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSEventsTableBase.h>

@interface SSMetricsEventTable : SSEventsTableBase
+(id)databasePath;
+(id)_eventsTableName;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_migrateToVersion3;
-(BOOL)_setupDatabase;
-(id)_pragmaValueForName:(id)arg1 ;
-(BOOL)_migrateToVersion2;
-(BOOL)_migrateToVersion1;
@end

