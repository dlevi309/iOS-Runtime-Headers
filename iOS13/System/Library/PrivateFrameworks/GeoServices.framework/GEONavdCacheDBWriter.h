/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEODBWriter.h>

@interface GEONavdCacheDBWriter : GEODBWriter {

	sqlite3_stmtRef _sqlInsertCache;
	sqlite3_stmtRef _sqlDeleteRowForRowID;
	sqlite3_stmtRef _sqlUpdateCache;
	sqlite3_stmtRef _sqlDeleteAllRows;

}
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(long long)_insertWithKey:(id)arg1 value:(id)arg2 ;
-(BOOL)_updateRowId:(long long)arg1 withKey:(id)arg2 value:(id)arg3 ;
-(void)_deleteRowsWithRowIDs:(id)arg1 ;
-(void)_deleteAllRows;
-(void)_openIfNecessary;
-(void)performTableCreationTasks;
-(void)performStatementPreparationTasks;
-(void)_createCacheTable;
@end

