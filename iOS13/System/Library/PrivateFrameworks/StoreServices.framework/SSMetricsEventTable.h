/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSEventsTableBase.h>

@interface SSMetricsEventTable : SSEventsTableBase
+(id)databasePath;
+(id)_eventsTableName;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_setupDatabase;
-(id)_pragmaValueForName:(id)arg1 ;
-(BOOL)_migrateToVersion1;
-(BOOL)_migrateToVersion2;
-(BOOL)_migrateToVersion3;
@end

