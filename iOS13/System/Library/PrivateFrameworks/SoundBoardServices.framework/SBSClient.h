/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(unsigned long long)clientType;
-(void)setClientType:(unsigned long long)arg1 ;
@end

