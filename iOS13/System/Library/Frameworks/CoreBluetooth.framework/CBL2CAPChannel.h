/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/


@class CBPeer, NSInputStream, NSOutputStream;

@interface CBL2CAPChannel : NSObject {

	unsigned short _PSM;
	int _socketFD;
	CBPeer* _peer;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;

}

@property (nonatomic,readonly) int socketFD;                               //@synthesize socketFD=_socketFD - In the implementation block
@property (nonatomic,readonly) CBPeer * peer;                              //@synthesize peer=_peer - In the implementation block
@property (nonatomic,readonly) NSInputStream * inputStream;                //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) NSOutputStream * outputStream;              //@synthesize outputStream=_outputStream - In the implementation block
@property (nonatomic,readonly) unsigned short PSM;                         //@synthesize PSM=_PSM - In the implementation block
-(void)dealloc;
-(id)description;
-(NSOutputStream *)outputStream;
-(CBPeer *)peer;
-(NSInputStream *)inputStream;
-(unsigned short)PSM;
-(int)socketFD;
-(id)initWithPeer:(id)arg1 info:(id)arg2 ;
@end

