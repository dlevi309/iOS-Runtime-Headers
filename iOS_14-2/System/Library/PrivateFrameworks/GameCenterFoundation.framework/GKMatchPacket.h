/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setValid:(BOOL)arg1 ;
-(id)message;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(void)setTotalLength:(unsigned)arg1 ;
-(id)init;
-(unsigned)sequenceNumber;
-(unsigned)totalLength;
-(void)setData:(NSData *)arg1 ;
-(id)initWithMessage:(id)arg1 ;
-(NSData *)data;
-(BOOL)valid;
-(void)setVersion:(unsigned char)arg1 ;
-(unsigned char)version;
-(void)setChecksum:(unsigned short)arg1 ;
-(unsigned short)checksum;
-(void)setPacketType:(unsigned char)arg1 ;
-(unsigned char)packetType;
@end

