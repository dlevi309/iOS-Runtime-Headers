/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)executeWithBindings:(id)arg1 resultRowHandler:(/*^block*/id)arg2 error:(out id*)arg3 ;
-(void)sqliteDatabaseConnectionWillClose:(id)arg1 ;
-(void)dealloc;
@end

