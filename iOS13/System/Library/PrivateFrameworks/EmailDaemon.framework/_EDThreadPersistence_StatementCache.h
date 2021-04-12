/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@class EDPersistenceDatabaseConnection, NSMutableDictionary;

@interface _EDThreadPersistence_StatementCache : NSObject {

	EDPersistenceDatabaseConnection* _connection;
	NSMutableDictionary* _preparedStatements;

}

@property (nonatomic,readonly) NSMutableDictionary * preparedStatements;                  //@synthesize preparedStatements=_preparedStatements - In the implementation block
@property (nonatomic,readonly) EDPersistenceDatabaseConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(EDPersistenceDatabaseConnection *)connection;
-(id)initWithConnection:(id)arg1 ;
-(id)preparedStatementForQueryString:(id)arg1 ;
-(NSMutableDictionary *)preparedStatements;
@end

