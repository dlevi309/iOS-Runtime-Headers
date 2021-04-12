/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(int)_migrateToSchemaVersion:(int)arg1 ;
-(int)_setDatabaseSchemaVersion:(int)arg1 ;
-(int)_migrateToSchemaVersion_2;
-(int)_migrateToSchemaVersion_3;
-(int)_migrateToSchemaVersion_4;
-(int)_migrateToSchemaVersion_5;
-(id)initWithDatabase:(id)arg1 crypto:(id)arg2 migrateVisitsAfterDate:(id)arg3 ;
-(int)migrateToCurrentSchemaVersionIfNeeded;
-(void)_migrateLegacyDatabase;
-(long long)_migrateLegacyItem:(id)arg1 dailyVisitCounts:(Vector<int, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)arg2 weeklyVisitCounts:(Vector<int, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)arg3 ;
-(long long)_migrateLegacyVisitWithItemID:(long long)arg1 visitTime:(double)arg2 title:(id)arg3 score:(unsigned long long)arg4 loadSuccessful:(BOOL)arg5 httpNonGet:(BOOL)arg6 synthesized:(BOOL)arg7 ;
-(NSDictionary *)legacyDatabase;
-(void)_removeLegacyHistoryDatabaseIfNeeded;
-(id)_migrateLegacyDatabaseCreatingItemsAndVisits:(id)arg1 outVisitsToUseForRedirectChains:(id)arg2 ;
-(BOOL)migrateLegacyDatabaseCreatingRedirectChains:(id)arg1 urlsToItemAndLastVisitID:(id)arg2 visitsToUseForRedirectChains:(id)arg3 ;
-(int)_migrateToSchemaVersion_6;
-(int)_migrateToSchemaVersion_7;
-(int)_migrateToSchemaVersion_8;
-(int)_migrateToSchemaVersion_9;
-(int)_migrateToSchemaVersion_10;
-(int)_migrateToSchemaVersion_11;
-(int)_migrateToSchemaVersion_12;
-(int)_migrateToSchemaVersion_13;
-(int)_migrateToSchemaVersion_14;
-(int)_migrateToSchemaVersion_15;
@end

