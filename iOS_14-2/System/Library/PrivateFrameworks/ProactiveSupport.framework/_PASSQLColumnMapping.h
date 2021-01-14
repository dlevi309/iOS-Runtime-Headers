/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASSQLColumnMapping : NSObject {

	sqlite3_stmtRef _stmt;
	const PASCompactStringArrayRef _tableColumnNamesFromSchema;
	const PASCompactStringArrayRef _columnAliases;
	const char* _uniqueTableName;

}
-(int)indexForColumnName:(const char*)arg1 table:(const char*)arg2 ;
-(id)initWithStatementPtr:(sqlite3_stmtRef)arg1 ;
-(void)_ensureColumnMappingExists;
-(void)resetSearchHint;
-(int)indexForColumnAlias:(const char*)arg1 ;
-(void)dealloc;
@end

