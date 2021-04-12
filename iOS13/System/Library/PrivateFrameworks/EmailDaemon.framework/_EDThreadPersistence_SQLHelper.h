/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@class EDPersistenceDatabaseConnection, _EDThreadPersistence_StatementCache;

@interface _EDThreadPersistence_SQLHelper : NSObject {

	EDPersistenceDatabaseConnection* _connection;
	_EDThreadPersistence_StatementCache* _cache;

}

@property (nonatomic,readonly) EDPersistenceDatabaseConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) _EDThreadPersistence_StatementCache * cache;               //@synthesize cache=_cache - In the implementation block
-(EDPersistenceDatabaseConnection *)connection;
-(_EDThreadPersistence_StatementCache *)cache;
-(id)initWithCache:(id)arg1 ;
-(int)executeUpdateSQL:(id)arg1 bindings:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(long long)executeUpsertSQL:(id)arg1 bindings:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(BOOL)executeSelectSQL:(id)arg1 bindings:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 rowHandler:(/*^block*/id)arg4 ;
-(BOOL)executeSQL:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(BOOL)executeSQL:(id)arg1 indexBindings:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
@end

