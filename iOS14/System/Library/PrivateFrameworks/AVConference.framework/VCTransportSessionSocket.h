/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCTransportSession.h>

@class VCNetworkAddress;

@interface VCTransportSessionSocket : VCTransportSession {

	int _rtpVFD;
	int _rtcpVFD;
	BOOL _isRTPUsable;
	BOOL _isRTCPUsable;
	BOOL _isSharedSocket;
	sockaddr_storage _rtpIPPort;
	unsigned _rtpIPPortLength;
	sockaddr_storage _rtcpIPPort;
	unsigned _rtcpIPPortLength;
	VCNetworkAddress* _remoteAddress;
	int _networkInterfaceType;
	BOOL _isIPv6;
	unsigned _networkMTU;

}
-(void)start;
-(BOOL)isIPv6;
-(int)networkInterfaceType;
-(id)streams;
-(void)dealloc;
-(int)createVFD:(int*)arg1 forStreamType:(unsigned)arg2 ;
-(unsigned)networkMTU;
-(id)initWithRTPSocket:(int)arg1 RTCPSocket:(int)arg2 ;
-(int)createVFD:(int*)arg1 realSocket:(int)arg2 sockAddr:(sockaddr_storage*)arg3 length:(unsigned*)arg4 isUsable:(BOOL*)arg5 ;
-(int)initializeNetworkInfoWithSocket:(int)arg1 ;
-(void)initializeInterfaceTypeWithSocket:(int)arg1 ;
-(int)connectSocket:(int)arg1 remoteAddress:(id)arg2 storage:(sockaddr_storage*)arg3 ;
-(int)updateTransportStream:(OpaqueVCTransportStreamRef)arg1 ;
-(int)setAudioRTPStreamParamatersForSocket:(int*)arg1 packetType:(int*)arg2 remoteIP:(sockaddr_storage*)arg3 remoteIPLength:(unsigned*)arg4 ;
-(int)setAudioRTCPStreamParamatersForSocket:(int*)arg1 packetType:(int*)arg2 remoteIP:(sockaddr_storage*)arg3 remoteIPLength:(unsigned*)arg4 ;
-(int)setVideoRTPStreamParamatersForSocket:(int*)arg1 packetType:(int*)arg2 remoteIP:(sockaddr_storage*)arg3 remoteIPLength:(unsigned*)arg4 ;
-(int)setVideoRTCPStreamParamatersForSocket:(int*)arg1 packetType:(int*)arg2 remoteIP:(sockaddr_storage*)arg3 remoteIPLength:(unsigned*)arg4 ;
-(int)setBasebandNotificationStreamParamatersForSocket:(int*)arg1 packetType:(int*)arg2 remoteIP:(sockaddr_storage*)arg3 remoteIPLength:(unsigned*)arg4 ;
-(int)configureParamatersForStreamType:(unsigned)arg1 socket:(int*)arg2 packetType:(int*)arg3 remoteIP:(sockaddr_storage*)arg4 remoteIPLength:(unsigned*)arg5 ;
-(int)createAndConfigureVFDForSocket:(int)arg1 packetType:(int)arg2 remoteIP:(sockaddr_storage*)arg3 remoteIPLength:(unsigned)arg4 vfd:(int*)arg5 ;
-(id)initWithSocketDictionary:(id)arg1 ;
-(id)initWithSharedSocket:(int)arg1 ;
-(int)setRemoteAddress:(id)arg1 remoteRTCPPort:(int)arg2 ;
@end

