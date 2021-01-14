/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/


@class NSString, NSNumber;

@interface SiriCoreConnectionTCPInfoMetrics : NSObject {

	NSString* _interfaceName;
	NSNumber* _rttCurrent;
	NSNumber* _rttSmoothed;
	NSNumber* _rttVariance;
	NSNumber* _rttBest;
	NSNumber* _packetsSent;
	NSNumber* _bytesSent;
	NSNumber* _bytesRetransmitted;
	NSNumber* _bytesUnacked;
	NSNumber* _packetsReceived;
	NSNumber* _bytesReceived;
	NSNumber* _duplicateBytesReceived;
	NSNumber* _outOfOrderBytesReceived;
	NSNumber* _sendBandwidth;
	NSNumber* _synRetransmits;
	NSNumber* _tfoSynDataAcked;

}

@property (nonatomic,copy,readonly) NSString * interfaceName;                        //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * rttCurrent;                           //@synthesize rttCurrent=_rttCurrent - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * rttSmoothed;                          //@synthesize rttSmoothed=_rttSmoothed - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * rttVariance;                          //@synthesize rttVariance=_rttVariance - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * rttBest;                              //@synthesize rttBest=_rttBest - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * packetsSent;                          //@synthesize packetsSent=_packetsSent - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * bytesSent;                            //@synthesize bytesSent=_bytesSent - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * bytesRetransmitted;                   //@synthesize bytesRetransmitted=_bytesRetransmitted - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * bytesUnacked;                         //@synthesize bytesUnacked=_bytesUnacked - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * packetsReceived;                      //@synthesize packetsReceived=_packetsReceived - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * bytesReceived;                        //@synthesize bytesReceived=_bytesReceived - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * duplicateBytesReceived;               //@synthesize duplicateBytesReceived=_duplicateBytesReceived - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * outOfOrderBytesReceived;              //@synthesize outOfOrderBytesReceived=_outOfOrderBytesReceived - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * sendBandwidth;                        //@synthesize sendBandwidth=_sendBandwidth - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * synRetransmits;                       //@synthesize synRetransmits=_synRetransmits - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * tfoSynDataAcked;                      //@synthesize tfoSynDataAcked=_tfoSynDataAcked - In the implementation block
-(id)init;
-(NSNumber *)bytesRetransmitted;
-(NSString *)interfaceName;
-(id)description;
-(NSNumber *)bytesReceived;
-(NSNumber *)packetsSent;
-(NSNumber *)packetsReceived;
-(NSNumber *)bytesSent;
-(NSNumber *)rttBest;
-(id)initWithInterfaceName:(id)arg1 rttCurrent:(id)arg2 rttSmoothed:(id)arg3 rttVariance:(id)arg4 rttBest:(id)arg5 packetsSent:(id)arg6 bytesSent:(id)arg7 bytesRetransmitted:(id)arg8 bytesUnacked:(id)arg9 packetsReceived:(id)arg10 bytesReceived:(id)arg11 duplicateBytesReceived:(id)arg12 outOfOrderBytesReceived:(id)arg13 sendBandwidth:(id)arg14 synRetransmits:(id)arg15 tfoSynDataAcked:(id)arg16 ;
-(NSNumber *)rttCurrent;
-(NSNumber *)rttSmoothed;
-(NSNumber *)rttVariance;
-(NSNumber *)bytesUnacked;
-(NSNumber *)duplicateBytesReceived;
-(NSNumber *)outOfOrderBytesReceived;
-(NSNumber *)sendBandwidth;
-(NSNumber *)synRetransmits;
-(NSNumber *)tfoSynDataAcked;
@end
