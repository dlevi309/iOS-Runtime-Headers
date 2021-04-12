/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SEService.framework/SEService
*/


@class NSString, NSXPCConnection;

@interface SESClient : NSObject {

	NSString* _serviceName;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSString * serviceName;                    //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)sharedClient;
-(NSString *)serviceName;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(id)synchronousRemoteObjectProxyWithError:(id*)arg1 ;
-(void)connectionResetHandler;
-(id)connectToService;
-(id)remoteObjectProxyWithError:(id*)arg1 ;
@end

