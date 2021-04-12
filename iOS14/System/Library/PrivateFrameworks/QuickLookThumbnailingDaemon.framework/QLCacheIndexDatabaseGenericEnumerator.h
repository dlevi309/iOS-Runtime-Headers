/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
*/


#import <QuickLookThumbnailingDaemon/QuickLookThumbnailingDaemon-Structs.h>
@class QLSqliteDatabase;

@interface QLCacheIndexDatabaseGenericEnumerator : NSObject {

	QLSqliteDatabase* _sqliteDatabase;
	sqlite3_stmtRef _stmt;

}
-(void)dealloc;
-(id)initWithSqliteDatabase:(id)arg1 ;
@end

