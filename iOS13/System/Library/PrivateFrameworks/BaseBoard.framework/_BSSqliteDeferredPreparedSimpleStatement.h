/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/_BSSqlitePreparedSimpleStatement.h>

@class NSString;

@interface _BSSqliteDeferredPreparedSimpleStatement : _BSSqlitePreparedSimpleStatement {

	NSString* _deferredSql;

}
-(id)initWithDatabaseConnection:(id)arg1 deferredSql:(id)arg2 ;
-(BOOL)executeWithBindings:(id)arg1 resultRowHandler:(/*^block*/id)arg2 error:(out id*)arg3 ;
@end

