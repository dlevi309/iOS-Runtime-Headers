/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@class NSUUID, NWConnection;

@interface NWRemoteConnectionWrapper : NSObject {

	NSUUID* _clientID;
	NWConnection* _connection;

}

@property (retain) NSUUID * clientID;                      //@synthesize clientID=_clientID - In the implementation block
@property (retain) NWConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(NWConnection *)connection;
-(void)setConnection:(NWConnection *)arg1 ;
-(void)setClientID:(NSUUID *)arg1 ;
-(NSUUID *)clientID;
@end

