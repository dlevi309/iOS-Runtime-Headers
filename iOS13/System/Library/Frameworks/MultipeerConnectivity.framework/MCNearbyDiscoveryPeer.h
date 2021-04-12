/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
*/


@class MCPeerID, NSNetService, MCNearbyDiscoveryPeerConnection, NSMutableArray;

@interface MCNearbyDiscoveryPeer : NSObject {

	MCPeerID* _peerID;
	NSNetService* _netService;
	int _state;
	MCNearbyDiscoveryPeerConnection* _connection;
	MCNearbyDiscoveryPeerConnection* _trialConnection;
	NSMutableArray* _sendDataBuffer;

}

@property (nonatomic,retain) NSMutableArray * sendDataBuffer;                                //@synthesize sendDataBuffer=_sendDataBuffer - In the implementation block
@property (nonatomic,retain) MCNearbyDiscoveryPeerConnection * connection;                   //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) MCPeerID * peerID;                                                //@synthesize peerID=_peerID - In the implementation block
@property (assign,nonatomic) int state;                                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSNetService * netService;                                      //@synthesize netService=_netService - In the implementation block
@property (nonatomic,retain) MCNearbyDiscoveryPeerConnection * trialConnection;              //@synthesize trialConnection=_trialConnection - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(int)state;
-(MCNearbyDiscoveryPeerConnection *)connection;
-(void)setConnection:(MCNearbyDiscoveryPeerConnection *)arg1 ;
-(void)setState:(int)arg1 ;
-(id)stringForState:(int)arg1 ;
-(MCPeerID *)peerID;
-(void)setPeerID:(MCPeerID *)arg1 ;
-(void)closeConnection;
-(NSNetService *)netService;
-(void)setNetService:(NSNetService *)arg1 ;
-(void)sendData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)attachConnection:(id)arg1 ;
-(void)flushDataBuffer;
-(id)initWithPeerID:(id)arg1 ;
-(MCNearbyDiscoveryPeerConnection *)trialConnection;
-(void)setTrialConnection:(MCNearbyDiscoveryPeerConnection *)arg1 ;
-(NSMutableArray *)sendDataBuffer;
-(void)setSendDataBuffer:(NSMutableArray *)arg1 ;
@end

