/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVCPacketRelayConnectionProtocol.h>

@class IDSDatagramChannel, IDSService, AVCPacketFilter;

@interface AVCPacketRelayIDSConnection : NSObject <AVCPacketRelayConnectionProtocol> {

	unsigned char _type;
	/*^block*/id _readHandler;
	BOOL _isDemuxNeeded;
	BOOL _isResumed;
	IDSDatagramChannel* _datagramChannel;
	IDSService* _packetRelayService;
	AVCPacketFilter* _packetFilter;

}

@property (assign) BOOL isResumed;                              //@synthesize isResumed=_isResumed - In the implementation block
@property (readonly) unsigned char type;                        //@synthesize type=_type - In the implementation block
@property (assign) BOOL isDemuxNeeded;                          //@synthesize isDemuxNeeded=_isDemuxNeeded - In the implementation block
@property (copy) id readHandler;                                //@synthesize readHandler=_readHandler - In the implementation block
@property (retain) AVCPacketFilter * packetFilter;              //@synthesize packetFilter=_packetFilter - In the implementation block
-(void)dealloc;
-(unsigned char)type;
-(int)stop;
-(int)start;
-(id)readHandler;
-(void)setReadHandler:(id)arg1 ;
-(void)readyToRead;
-(BOOL)isResumed;
-(void)setIsResumed:(BOOL)arg1 ;
-(void)setPacketFilter:(AVCPacketFilter *)arg1 ;
-(BOOL)sendData:(const void*)arg1 size:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)isDemuxNeeded;
-(void)setIsDemuxNeeded:(BOOL)arg1 ;
-(AVCPacketFilter *)packetFilter;
-(id)initWithIDSSocketDescriptor:(unsigned short)arg1 ;
-(id)initWithIDSDestination:(id)arg1 ;
@end

