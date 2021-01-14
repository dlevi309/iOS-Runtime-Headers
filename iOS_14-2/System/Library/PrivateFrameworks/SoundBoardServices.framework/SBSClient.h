/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
*/


@class NSXPCConnection;

@interface SBSClient : NSObject {

	NSXPCConnection* _connection;
	unsigned long long _clientType;

}

@property (nonatomic,retain) NSXPCConnection * connection;               //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) unsigned long long clientType;              //@synthesize clientType=_clientType - In the implementation block
-(NSXPCConnection *)connection;
-(void)setClientType:(unsigned long long)arg1 ;
-(unsigned long long)clientType;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

