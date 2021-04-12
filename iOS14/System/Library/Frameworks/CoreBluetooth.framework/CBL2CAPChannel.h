/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/


@class CBPeer, NSInputStream, NSOutputStream, CBUUID;

@interface CBL2CAPChannel : NSObject {

	unsigned short _PSM;
	int _socketFD;
	CBPeer* _peer;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	CBUUID* _serviceUUID;

}

@property (nonatomic,retain) CBUUID * serviceUUID;                         //@synthesize serviceUUID=_serviceUUID - In the implementation block
@property (nonatomic,readonly) int socketFD;                               //@synthesize socketFD=_socketFD - In the implementation block
@property (nonatomic,readonly) CBPeer * peer;                              //@synthesize peer=_peer - In the implementation block
@property (nonatomic,readonly) NSInputStream * inputStream;                //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) NSOutputStream * outputStream;              //@synthesize outputStream=_outputStream - In the implementation block
@property (nonatomic,readonly) unsigned short PSM;                         //@synthesize PSM=_PSM - In the implementation block
-(unsigned short)PSM;
-(CBUUID *)serviceUUID;
-(NSOutputStream *)outputStream;
-(id)description;
-(int)socketFD;
-(id)initWithPeer:(id)arg1 info:(id)arg2 ;
-(NSInputStream *)inputStream;
-(void)setServiceUUID:(CBUUID *)arg1 ;
-(void)dealloc;
-(CBPeer *)peer;
@end

