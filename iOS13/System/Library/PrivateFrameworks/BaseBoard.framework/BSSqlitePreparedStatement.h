/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@class BSSqliteDatabaseConnection;

@interface BSSqlitePreparedStatement : NSObject {

	BSSqliteDatabaseConnection* _dbConnection;

}
+(id)_newPreparedStatementForDatabaseConnection:(id)arg1 withSQLQuery:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)_initWithDatabaseConnection:(id)arg1 ;
-(BOOL)executeWithBindings:(id)arg1 resultRowHandler:(/*^block*/id)arg2 error:(out id*)arg3 ;
@end

