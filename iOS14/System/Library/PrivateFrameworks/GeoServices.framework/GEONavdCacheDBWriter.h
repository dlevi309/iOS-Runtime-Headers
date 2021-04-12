/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithPath:(id)arg1 ;
-(void)_deleteRowsWithRowIDs:(id)arg1 ;
-(void)_openIfNecessary;
-(long long)_insertWithKey:(id)arg1 value:(id)arg2 ;
-(void)_createCacheTable;
-(void)_deleteAllRows;
-(void)performStatementPreparationTasks;
-(BOOL)_updateRowId:(long long)arg1 withKey:(id)arg2 value:(id)arg3 ;
-(void)performTableCreationTasks;
-(void)dealloc;
@end

