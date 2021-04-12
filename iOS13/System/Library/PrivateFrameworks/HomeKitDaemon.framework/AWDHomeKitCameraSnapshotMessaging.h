/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCameraSnapshotMessaging : PBCodable <NSCopying> {

	unsigned _receivedSnapshotRequest;
	unsigned _sentSnapshotRequest;
	unsigned _sentSnapshotResponse;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasReceivedSnapshotRequest; 
@property (assign,nonatomic) unsigned receivedSnapshotRequest;              //@synthesize receivedSnapshotRequest=_receivedSnapshotRequest - In the implementation block
@property (assign,nonatomic) BOOL hasSentSnapshotRequest; 
@property (assign,nonatomic) unsigned sentSnapshotRequest;                  //@synthesize sentSnapshotRequest=_sentSnapshotRequest - In the implementation block
@property (assign,nonatomic) BOOL hasSentSnapshotResponse; 
@property (assign,nonatomic) unsigned sentSnapshotResponse;                 //@synthesize sentSnapshotResponse=_sentSnapshotResponse - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setReceivedSnapshotRequest:(unsigned)arg1 ;
-(void)setHasReceivedSnapshotRequest:(BOOL)arg1 ;
-(BOOL)hasReceivedSnapshotRequest;
-(void)setSentSnapshotRequest:(unsigned)arg1 ;
-(void)setHasSentSnapshotRequest:(BOOL)arg1 ;
-(BOOL)hasSentSnapshotRequest;
-(void)setSentSnapshotResponse:(unsigned)arg1 ;
-(void)setHasSentSnapshotResponse:(BOOL)arg1 ;
-(BOOL)hasSentSnapshotResponse;
-(unsigned)receivedSnapshotRequest;
-(unsigned)sentSnapshotRequest;
-(unsigned)sentSnapshotResponse;
@end

