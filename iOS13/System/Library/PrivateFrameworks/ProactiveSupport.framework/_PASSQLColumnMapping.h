/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASSQLColumnMapping : NSObject {

	sqlite3_stmtRef _stmt;
	const PASCompactStringArrayRef _tableColumnNamesFromSchema;
	const PASCompactStringArrayRef _columnAliases;
	const char* _uniqueTableName;

}
-(void)dealloc;
-(id)initWithStatementPtr:(sqlite3_stmtRef)arg1 ;
-(void)resetSearchHint;
-(void)_ensureColumnMappingExists;
-(int)indexForColumnName:(const char*)arg1 table:(const char*)arg2 ;
-(int)indexForColumnAlias:(const char*)arg1 ;
@end

