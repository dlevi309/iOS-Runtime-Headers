/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@class NSXPCConnection, SLDatabase;

@interface SLRemoteSession : NSObject {

	NSXPCConnection* _connection;
	SLDatabase* _database;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) SLDatabase * database;                     //@synthesize database=_database - In the implementation block
-(NSXPCConnection *)connection;
-(void)setDatabase:(SLDatabase *)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(SLDatabase *)database;
-(id)initWithConnection:(id)arg1 database:(id)arg2 ;
-(BOOL)clientHasEntitlement:(id)arg1 ;
@end

