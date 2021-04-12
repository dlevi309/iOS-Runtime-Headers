/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@class NSDictionary, NSXPCConnection;

@interface TKSmartCardSessionRequest : NSObject {

	NSDictionary* _parameters;
	/*^block*/id _reply;
	NSXPCConnection* _connection;

}

@property (retain) NSDictionary * parameters;                 //@synthesize parameters=_parameters - In the implementation block
@property (copy) id reply;                                    //@synthesize reply=_reply - In the implementation block
@property (__weak) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(NSXPCConnection *)connection;
-(id)reply;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setReply:(id)arg1 ;
@end

