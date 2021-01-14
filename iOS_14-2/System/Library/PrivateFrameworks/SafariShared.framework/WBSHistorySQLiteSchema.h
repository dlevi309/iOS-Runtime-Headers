/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


#import <SafariShared/SafariShared-Structs.h>
@class WBSSQLiteDatabase, WBSHistoryCrypto, NSDate, NSDictionary;

@interface WBSHistorySQLiteSchema : NSObject {

	WBSSQLiteDatabase* _database;
	WBSHistoryCrypto* _crypto;
	NSDate* _migrateVisitsAfterDate;

}

@property (nonatomic,readonly) NSDictionary * legacyDatabase; 
-(int)_migrateToSchemaVersion_14;
-(id)_migrateLegacyDatabaseCreatingItemsAndVisits:(id)arg1 outVisitsToUseForRedirectChains:(id)arg2 ;
-(NSDictionary *)legacyDatabase;
-(int)_migrateToSchemaVersion_9;
-(id)init;
-(int)_migrateToSchemaVersion_7;
-(int)_migrateToSchemaVersion_3;
-(long long)_migrateLegacyItem:(id)arg1 dailyVisitCounts:(Vector<int, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)arg2 weeklyVisitCounts:(Vector<int, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)arg3 ;
-(BOOL)migrateLegacyDatabaseCreatingRedirectChains:(id)arg1 urlsToItemAndLastVisitID:(id)arg2 visitsToUseForRedirectChains:(id)arg3 ;
-(long long)_migrateLegacyVisitWithItemID:(long long)arg1 visitTime:(double)arg2 title:(id)arg3 score:(unsigned long long)arg4 loadSuccessful:(BOOL)arg5 httpNonGet:(BOOL)arg6 synthesized:(BOOL)arg7 ;
-(int)_migrateToSchemaVersion_13;
-(int)_setDatabaseSchemaVersion:(int)arg1 ;
-(void)_migrateLegacyDatabase;
-(int)_migrateToSchemaVersion_8;
-(int)_migrateToSchemaVersion_5;
-(void)_removeLegacyHistoryDatabaseIfNeeded;
-(int)migrateToCurrentSchemaVersionIfNeeded;
-(id)initWithDatabase:(id)arg1 crypto:(id)arg2 migrateVisitsAfterDate:(id)arg3 ;
-(int)_migrateToSchemaVersion_2;
-(int)_migrateToSchemaVersion_6;
-(int)_migrateToSchemaVersion_4;
-(int)_migrateToSchemaVersion:(int)arg1 ;
-(int)_migrateToSchemaVersion_15;
-(int)_migrateToSchemaVersion_10;
-(int)_migrateToSchemaVersion_12;
-(int)_migrateToSchemaVersion_11;
@end

