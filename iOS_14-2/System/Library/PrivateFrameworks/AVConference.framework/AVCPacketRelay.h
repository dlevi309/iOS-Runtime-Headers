/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol AVCPacketRelayDelegate, AVCPacketRelayConnectionProtocol, OS_dispatch_queue;
@class AVCPacketRelayDriver, NSArray, NSObject;

@interface AVCPacketRelay : NSObject {

	AVCPacketRelayDriver* _packetDriver;
	id<AVCPacketRelayDelegate> _delegate;
	NSArray* _connections;
	id<AVCPacketRelayConnectionProtocol> _multiplexedConnection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NSArray * connections;                                                   //@synthesize connections=_connections - In the implementation block
@property (retain) id<AVCPacketRelayConnectionProtocol> multiplexedConnection;              //@synthesize multiplexedConnection=_multiplexedConnection - In the implementation block
@property (assign,nonatomic) id<AVCPacketRelayDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
-(void)setConnections:(NSArray *)arg1 ;
-(id<AVCPacketRelayDelegate>)delegate;
-(NSArray *)connections;
-(void)start;
-(void)stop;
-(void)setDelegate:(id<AVCPacketRelayDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithConnections:(id)arg1 multiplexedConnection:(id)arg2 error:(id*)arg3 ;
-(BOOL)isAllConnectionTypeValid:(id)arg1 ;
-(id)findConnectionToForwardData:(const void*)arg1 size:(int)arg2 ;
-(id<AVCPacketRelayConnectionProtocol>)multiplexedConnection;
-(void)setMultiplexedConnection:(id<AVCPacketRelayConnectionProtocol>)arg1 ;
-(int)startAllConnections;
-(BOOL)stopAllConnections;
-(id)initWithConnection:(id)arg1 connection:(id)arg2 error:(id*)arg3 ;
@end

