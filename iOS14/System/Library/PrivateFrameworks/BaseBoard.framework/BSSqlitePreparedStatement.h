/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@class BSSqliteDatabaseConnection;

@interface BSSqlitePreparedStatement : NSObject {

	BSSqliteDatabaseConnection* _dbConnection;

}
-(id)init;
-(BOOL)executeWithBindings:(id)arg1 resultRowHandler:(/*^block*/id)arg2 error:(out id*)arg3 ;
-(void)dealloc;
@end

