/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@class EDPersistenceDatabaseConnection, NSMutableDictionary;

@interface _EDThreadPersistence_StatementCache : NSObject {

	EDPersistenceDatabaseConnection* _connection;
	NSMutableDictionary* _preparedStatements;

}

@property (nonatomic,readonly) NSMutableDictionary * preparedStatements;                  //@synthesize preparedStatements=_preparedStatements - In the implementation block
@property (nonatomic,readonly) EDPersistenceDatabaseConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(id)initWithConnection:(id)arg1 ;
-(id)preparedStatementForQueryString:(id)arg1 ;
-(EDPersistenceDatabaseConnection *)connection;
-(NSMutableDictionary *)preparedStatements;
@end

