/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCameraSnapshotIDSTransfer : PBCodable <NSCopying> {

	unsigned _receivedImage;
	unsigned _sentImage;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasSentImage; 
@property (assign,nonatomic) unsigned sentImage;                  //@synthesize sentImage=_sentImage - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedImage; 
@property (assign,nonatomic) unsigned receivedImage;              //@synthesize receivedImage=_receivedImage - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSentImage:(unsigned)arg1 ;
-(void)setHasSentImage:(BOOL)arg1 ;
-(BOOL)hasSentImage;
-(void)setReceivedImage:(unsigned)arg1 ;
-(void)setHasReceivedImage:(BOOL)arg1 ;
-(BOOL)hasReceivedImage;
-(unsigned)sentImage;
-(unsigned)receivedImage;
@end

