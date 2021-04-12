/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/


@class NSUUID, NSData, NSMutableData;

@interface PipeDataTransfer : NSObject {

	unsigned char _txSeqNum;
	unsigned char _rxSeqNum;
	BOOL _rxFirstPacket;
	BOOL _rxWaitForMoreData;
	unsigned short _txTotalLenToSend;
	unsigned short _rxTotalLenToReceive;
	unsigned short _rxCurrentDataSize;
	NSUUID* _peerUUID;
	NSData* _txTotalDataToSend;
	NSData* _txData;
	unsigned long long _txDataLeftToSend;
	NSData* _rxTotalDataToReceive;
	NSData* _rxData;
	NSMutableData* _rxCurrentReceivedData;
	NSMutableData* _rxTotalDataWithLen;

}

@property (retain) NSUUID * peerUUID;                                  //@synthesize peerUUID=_peerUUID - In the implementation block
@property (assign) unsigned char txSeqNum;                             //@synthesize txSeqNum=_txSeqNum - In the implementation block
@property (assign) unsigned short txTotalLenToSend;                    //@synthesize txTotalLenToSend=_txTotalLenToSend - In the implementation block
@property (retain) NSData * txTotalDataToSend;                         //@synthesize txTotalDataToSend=_txTotalDataToSend - In the implementation block
@property (retain) NSData * txData;                                    //@synthesize txData=_txData - In the implementation block
@property (assign) unsigned long long txDataLeftToSend;                //@synthesize txDataLeftToSend=_txDataLeftToSend - In the implementation block
@property (assign) unsigned char rxSeqNum;                             //@synthesize rxSeqNum=_rxSeqNum - In the implementation block
@property (assign) BOOL rxFirstPacket;                                 //@synthesize rxFirstPacket=_rxFirstPacket - In the implementation block
@property (assign) unsigned short rxTotalLenToReceive;                 //@synthesize rxTotalLenToReceive=_rxTotalLenToReceive - In the implementation block
@property (retain) NSData * rxTotalDataToReceive;                      //@synthesize rxTotalDataToReceive=_rxTotalDataToReceive - In the implementation block
@property (retain) NSData * rxData;                                    //@synthesize rxData=_rxData - In the implementation block
@property (assign) unsigned short rxCurrentDataSize;                   //@synthesize rxCurrentDataSize=_rxCurrentDataSize - In the implementation block
@property (retain) NSMutableData * rxCurrentReceivedData;              //@synthesize rxCurrentReceivedData=_rxCurrentReceivedData - In the implementation block
@property (retain) NSMutableData * rxTotalDataWithLen;                 //@synthesize rxTotalDataWithLen=_rxTotalDataWithLen - In the implementation block
@property (assign) BOOL rxWaitForMoreData;                             //@synthesize rxWaitForMoreData=_rxWaitForMoreData - In the implementation block
-(id)description;
-(NSData *)txData;
-(NSData *)rxData;
-(NSUUID *)peerUUID;
-(void)setPeerUUID:(NSUUID *)arg1 ;
-(void)setTxSeqNum:(unsigned char)arg1 ;
-(void)resetRxTransfer;
-(void)resetTxTransfer;
-(void)setTxTotalLenToSend:(unsigned short)arg1 ;
-(void)setTxTotalDataToSend:(NSData *)arg1 ;
-(void)setTxData:(NSData *)arg1 ;
-(void)setTxDataLeftToSend:(unsigned long long)arg1 ;
-(void)setRxSeqNum:(unsigned char)arg1 ;
-(void)setRxFirstPacket:(BOOL)arg1 ;
-(void)setRxTotalLenToReceive:(unsigned short)arg1 ;
-(void)setRxTotalDataToReceive:(NSData *)arg1 ;
-(void)setRxData:(NSData *)arg1 ;
-(void)setRxCurrentDataSize:(unsigned short)arg1 ;
-(void)setRxCurrentReceivedData:(NSMutableData *)arg1 ;
-(void)setRxTotalDataWithLen:(NSMutableData *)arg1 ;
-(void)setRxWaitForMoreData:(BOOL)arg1 ;
-(unsigned char)txSeqNum;
-(id)initPipeDataTransferForPeer:(id)arg1 ;
-(void)resetAllTransfer;
-(unsigned char)generateSequenceNumber;
-(unsigned short)txTotalLenToSend;
-(NSData *)txTotalDataToSend;
-(unsigned long long)txDataLeftToSend;
-(unsigned char)rxSeqNum;
-(BOOL)rxFirstPacket;
-(unsigned short)rxTotalLenToReceive;
-(NSData *)rxTotalDataToReceive;
-(unsigned short)rxCurrentDataSize;
-(NSMutableData *)rxCurrentReceivedData;
-(NSMutableData *)rxTotalDataWithLen;
-(BOOL)rxWaitForMoreData;
@end

