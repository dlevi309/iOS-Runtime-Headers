/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/


@class CBClassicPeer, NSInputStream, NSOutputStream, CBUUID;

@interface CBRFCOMMChannel : NSObject {

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
-(NSOutputStream *)outputStream;
-(CBClassicPeer *)peer;
-(NSInputStream *)inputStream;
-(int)socketFD;
-(CBUUID *)serviceUUID;
-(id)initWithPeer:(id)arg1 info:(id)arg2 ;
@end

