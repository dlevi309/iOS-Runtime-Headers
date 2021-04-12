/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDXPCProcess, NSXPCConnection;

@interface HDXPCClient : NSObject {

	HDXPCProcess* _process;
	NSXPCConnection* _connection;

}

@property (readonly) HDXPCProcess * process;                    //@synthesize process=_process - In the implementation block
@property (readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)clientWithConnection:(id)arg1 error:(id*)arg2 ;
-(HDXPCProcess *)process;
-(id)initWithProcess:(id)arg1 ;
-(id)description;
-(NSXPCConnection *)connection;
-(id)initWithConnection:(id)arg1 process:(id)arg2 ;
-(id)_initWithConnection:(id)arg1 process:(id)arg2 ;
@end

