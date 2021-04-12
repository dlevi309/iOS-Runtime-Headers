/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@class NSXPCConnection, SLDatabase;

@interface SLRemoteSession : NSObject {

	NSXPCConnection* _connection;
	SLDatabase* _database;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) SLDatabase * database;                     //@synthesize database=_database - In the implementation block
-(void)setDatabase:(SLDatabase *)arg1 ;
-(NSXPCConnection *)connection;
-(SLDatabase *)database;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)initWithConnection:(id)arg1 database:(id)arg2 ;
-(BOOL)clientHasEntitlement:(id)arg1 ;
@end

