/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/


@class CBClassicPeer, NSInputStream, NSOutputStream, CBUUID;

@interface CBRFCOMMChannel : NSObject {

	unsigned char _channelID;
	BOOL _isIncoming;
	unsigned short _mtu;
	int _socketFD;
	CBClassicPeer* _peer;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	CBUUID* _serviceUUID;

}

@property (nonatomic,readonly) int socketFD;                               //@synthesize socketFD=_socketFD - In the implementation block
@property (nonatomic,readonly) CBClassicPeer * peer;                       //@synthesize peer=_peer - In the implementation block
@property (nonatomic,readonly) NSInputStream * inputStream;                //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) NSOutputStream * outputStream;              //@synthesize outputStream=_outputStream - In the implementation block
@property (nonatomic,readonly) CBUUID * serviceUUID;                       //@synthesize serviceUUID=_serviceUUID - In the implementation block
@property (nonatomic,readonly) unsigned char channelID;                    //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,readonly) unsigned short mtu;                         //@synthesize mtu=_mtu - In the implementation block
@property (nonatomic,readonly) BOOL isIncoming;                            //@synthesize isIncoming=_isIncoming - In the implementation block
-(unsigned short)mtu;
-(CBUUID *)serviceUUID;
-(NSOutputStream *)outputStream;
-(unsigned char)channelID;
-(id)description;
-(int)socketFD;
-(id)initWithPeer:(id)arg1 info:(id)arg2 ;
-(NSInputStream *)inputStream;
-(BOOL)isIncoming;
-(void)dealloc;
-(CBClassicPeer *)peer;
@end

