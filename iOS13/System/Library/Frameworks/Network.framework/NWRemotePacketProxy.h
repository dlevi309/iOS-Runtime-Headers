/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@protocol NWRemotePacketProxyDelegate;
#import <Network/Network-Structs.h>
@class NSObject, NSMutableArray;

@interface NWRemotePacketProxy : NSObject {

	unsigned _receiveWindowPacketCount;
	NSObject*<NWRemotePacketProxyDelegate> _delegate;
	NSMutableArray* _writeRequests;
	nw_protocol* _packetProtocol;
	nw_protocol* _defaultOutputHandler;
	nw_hash_tableRef _packetHashTable;

}

@property (__weak) NSObject*<NWRemotePacketProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSMutableArray * writeRequests;                               //@synthesize writeRequests=_writeRequests - In the implementation block
@property (assign) nw_protocol* packetProtocol;                                  //@synthesize packetProtocol=_packetProtocol - In the implementation block
@property (assign) nw_protocol* defaultOutputHandler;                            //@synthesize defaultOutputHandler=_defaultOutputHandler - In the implementation block
@property (assign) nw_hash_tableRef packetHashTable;                             //@synthesize packetHashTable=_packetHashTable - In the implementation block
@property (nonatomic,readonly) nw_protocol* protocol; 
@property (assign,nonatomic) unsigned receiveWindowPacketCount;                  //@synthesize receiveWindowPacketCount=_receiveWindowPacketCount - In the implementation block
-(void)dealloc;
-(NSObject*<NWRemotePacketProxyDelegate>)delegate;
-(void)setDelegate:(NSObject*<NWRemotePacketProxyDelegate>)arg1 ;
-(nw_protocol*)protocol;
-(id)initWithDelegate:(id)arg1 ;
-(void)setReceiveWindowPacketCount:(unsigned)arg1 ;
-(nw_protocol*)outputHandlerForPacket:(id)arg1 inbound:(BOOL)arg2 ;
-(void)setDefaultOutputProtocolHandler:(nw_protocol*)arg1 ;
-(void)setOutputProtocolHandler:(nw_protocol*)arg1 local:(id)arg2 remote:(id)arg3 ipProtocol:(unsigned char)arg4 ;
-(BOOL)receiveRemotePacket:(id)arg1 ;
-(unsigned)receiveWindowPacketCount;
-(NSMutableArray *)writeRequests;
-(void)setWriteRequests:(NSMutableArray *)arg1 ;
-(nw_protocol*)packetProtocol;
-(void)setPacketProtocol:(nw_protocol*)arg1 ;
-(nw_protocol*)defaultOutputHandler;
-(void)setDefaultOutputHandler:(nw_protocol*)arg1 ;
-(nw_hash_tableRef)packetHashTable;
-(void)setPacketHashTable:(nw_hash_tableRef)arg1 ;
@end

