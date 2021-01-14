/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/


@class NSXPCConnection;

@interface SecuritydXPCClient : NSObject {

	NSXPCConnection* _connection;

}

@property (retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(void)configureSecuritydXPCProtocol:(id)arg1 ;
-(id)init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

