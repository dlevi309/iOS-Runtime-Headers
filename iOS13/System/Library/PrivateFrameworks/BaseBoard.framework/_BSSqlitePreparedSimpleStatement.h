/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSSqlitePreparedStatement.h>
#import <libobjc.A.dylib/BSSqliteDatabaseConnectionObserver.h>

@class NSString;

@interface _BSSqlitePreparedSimpleStatement : BSSqlitePreparedStatement <BSSqliteDatabaseConnectionObserver> {

	sqlite3_stmtRef _statement;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithDatabaseConnection:(id)arg1 statement:(sqlite3_stmtRef)arg2 ;
-(BOOL)executeWithBindings:(id)arg1 resultRowHandler:(/*^block*/id)arg2 error:(out id*)arg3 ;
-(int)_bindKey:(id)arg1 value:(id)arg2 ;
-(id)_sqliteError:(int)arg1 ;
-(int)_bindParameterIndex:(int)arg1 nullValue:(id)arg2 ;
-(int)_bindParameterIndex:(int)arg1 stringValue:(id)arg2 ;
-(int)_bindParameterIndex:(int)arg1 numberValue:(id)arg2 ;
-(int)_bindParameterIndex:(int)arg1 dataValue:(id)arg2 ;
-(void)sqliteDatabaseConnectionWillClose:(id)arg1 ;
@end

