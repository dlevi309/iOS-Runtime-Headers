/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <ProactiveSupport/_PASSqliteDatabase.h>

@class SGSqliteDatabase;

@interface SGSqliteDatabaseImpl : _PASSqliteDatabase {

	SGSqliteDatabase* _sgDb;

}
-(BOOL)handleError:(long long)arg1 sqliteError:(int)arg2 forQuery:(id)arg3 onError:(/*^block*/id)arg4 ;
-(id)initWithFilename:(id)arg1 flags:(int)arg2 error:(id*)arg3 sgDb:(id)arg4 ;
@end

