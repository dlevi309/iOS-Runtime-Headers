/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class NSData;

@interface GKMatchPacket : NSObject {

	unsigned char _version;
	unsigned char _packetType;
	unsigned _sequenceNumber;
	unsigned _totalLength;
	unsigned short _checksum;
	BOOL _valid;
	NSData* _data;

}

@property (assign,nonatomic) unsigned char version;                 //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned char packetType;              //@synthesize packetType=_packetType - In the implementation block
@property (assign,nonatomic) unsigned sequenceNumber;               //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) unsigned totalLength;                  //@synthesize totalLength=_totalLength - In the implementation block
@property (assign,nonatomic) unsigned short checksum;               //@synthesize checksum=_checksum - In the implementation block
@property (assign,nonatomic) BOOL valid;                            //@synthesize valid=_valid - In the implementation block
@property (nonatomic,retain) NSData * data;                         //@synthesize data=_data - In the implementation block
-(id)init;
-(void)dealloc;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(unsigned char)version;
-(void)setVersion:(unsigned char)arg1 ;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(unsigned)sequenceNumber;
-(id)message;
-(id)initWithMessage:(id)arg1 ;
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
-(unsigned short)checksum;
-(void)setChecksum:(unsigned short)arg1 ;
-(void)setTotalLength:(unsigned)arg1 ;
-(unsigned)totalLength;
-(unsigned char)packetType;
-(void)setPacketType:(unsigned char)arg1 ;
@end

