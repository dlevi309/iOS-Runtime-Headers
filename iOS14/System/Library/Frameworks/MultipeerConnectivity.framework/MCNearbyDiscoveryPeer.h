/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)closeConnection;
-(void)setPeerID:(MCPeerID *)arg1 ;
-(id)init;
-(MCPeerID *)peerID;
-(NSNetService *)netService;
-(void)setNetService:(NSNetService *)arg1 ;
-(id)description;
-(MCNearbyDiscoveryPeerConnection *)connection;
-(id)stringForState:(int)arg1 ;
-(void)setState:(int)arg1 ;
-(int)state;
-(void)invalidate;
-(void)setConnection:(MCNearbyDiscoveryPeerConnection *)arg1 ;
-(void)dealloc;
-(void)sendData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)attachConnection:(id)arg1 ;
-(void)flushDataBuffer;
-(id)initWithPeerID:(id)arg1 ;
-(MCNearbyDiscoveryPeerConnection *)trialConnection;
-(void)setTrialConnection:(MCNearbyDiscoveryPeerConnection *)arg1 ;
-(NSMutableArray *)sendDataBuffer;
-(void)setSendDataBuffer:(NSMutableArray *)arg1 ;
@end

