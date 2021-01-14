/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/AVCPacketRelayConnectionProtocol.h>

@protocol OS_dispatch_queue;
@class AVCPacketFilter, NSObject;

@interface AVCPacketRelaySocketConnection : NSObject <AVCPacketRelayConnectionProtocol> {

	unsigned char _type;
	BOOL _isDemuxNeeded;
	int _unixSocket;
	BOOL _isConnectedSocket;
	sockaddr _remoteIPPort;
	unsigned _remoteIPPortLength;
	NSObject*<OS_dispatch_queue> _queue;
	char* dataBuffer;
	/*^block*/id _readHandler;
	AVCPacketFilter* _packetFilter;

}

@property (readonly) unsigned char type;                        //@synthesize type=_type - In the implementation block
@property (assign) BOOL isDemuxNeeded;                          //@synthesize isDemuxNeeded=_isDemuxNeeded - In the implementation block
@property (copy) id readHandler;                                //@synthesize readHandler=_readHandler - In the implementation block
@property (retain) AVCPacketFilter * packetFilter;              //@synthesize packetFilter=_packetFilter - In the implementation block
-(void)readyToRead;
-(int)start;
-(void)setReadHandler:(id)arg1 ;
-(int)stop;
-(id)description;
-(id)readHandler;
-(unsigned char)type;
-(void)dealloc;
-(void)setPacketFilter:(AVCPacketFilter *)arg1 ;
-(void)receiveDataOnSocket:(unsigned short)arg1 ;
-(BOOL)sendData:(const void*)arg1 size:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)isDemuxNeeded;
-(void)setIsDemuxNeeded:(BOOL)arg1 ;
-(AVCPacketFilter *)packetFilter;
-(id)initWithSocket:(unsigned short)arg1 remoteAddress:(id)arg2 packetFilter:(id)arg3 ;
@end

