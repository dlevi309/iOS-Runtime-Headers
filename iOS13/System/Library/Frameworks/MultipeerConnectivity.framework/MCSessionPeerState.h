/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
*/


@class MCPeerID, NSMutableDictionary, NSData;

@interface MCSessionPeerState : NSObject {

	BOOL _connectPeerCalled;
	unsigned _newStreamOpenRequestID;
	unsigned _newStreamID;
	MCPeerID* _peerID;
	long long _state;
	NSMutableDictionary* _outgoingStreamRequests;
	NSMutableDictionary* _incomingStreams;
	NSMutableDictionary* _outgoingStreams;
	NSData* _nearbyConnectionData;
	long long _certificateDecision;

}

@property (nonatomic,copy,readonly) MCPeerID * peerID;                                  //@synthesize peerID=_peerID - In the implementation block
@property (assign,nonatomic) long long state;                                           //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL connectPeerCalled;                                    //@synthesize connectPeerCalled=_connectPeerCalled - In the implementation block
@property (nonatomic,copy) NSData * nearbyConnectionData;                               //@synthesize nearbyConnectionData=_nearbyConnectionData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * outgoingStreamRequests;              //@synthesize outgoingStreamRequests=_outgoingStreamRequests - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * outgoingStreams;                     //@synthesize outgoingStreams=_outgoingStreams - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * incomingStreams;                     //@synthesize incomingStreams=_incomingStreams - In the implementation block
@property (nonatomic,readonly) unsigned newStreamOpenRequestID;                         //@synthesize newStreamOpenRequestID=_newStreamOpenRequestID - In the implementation block
@property (nonatomic,readonly) unsigned newStreamID;                                    //@synthesize newStreamID=_newStreamID - In the implementation block
@property (assign,nonatomic) long long certificateDecision;                             //@synthesize certificateDecision=_certificateDecision - In the implementation block
-(void)dealloc;
-(id)description;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(MCPeerID *)peerID;
-(long long)certificateDecision;
-(BOOL)connectPeerCalled;
-(NSMutableDictionary *)outgoingStreamRequests;
-(NSMutableDictionary *)outgoingStreams;
-(NSMutableDictionary *)incomingStreams;
-(id)initWithPeer:(id)arg1 ;
-(unsigned)newStreamID;
-(unsigned)newStreamOpenRequestID;
-(void)setOutgoingStreamRequests:(NSMutableDictionary *)arg1 ;
-(void)setIncomingStreams:(NSMutableDictionary *)arg1 ;
-(void)setOutgoingStreams:(NSMutableDictionary *)arg1 ;
-(NSData *)nearbyConnectionData;
-(void)setNearbyConnectionData:(NSData *)arg1 ;
-(void)setConnectPeerCalled:(BOOL)arg1 ;
-(void)setCertificateDecision:(long long)arg1 ;
@end

