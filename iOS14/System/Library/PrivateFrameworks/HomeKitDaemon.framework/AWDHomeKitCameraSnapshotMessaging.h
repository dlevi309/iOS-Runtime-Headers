/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCameraSnapshotMessaging : PBCodable <NSCopying> {

	unsigned _receivedSnapshotRequest;
	unsigned _sentSnapshotRequest;
	unsigned _sentSnapshotResponse;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasReceivedSnapshotRequest; 
@property (assign,nonatomic) unsigned receivedSnapshotRequest;              //@synthesize receivedSnapshotRequest=_receivedSnapshotRequest - In the implementation block
@property (assign,nonatomic) BOOL hasSentSnapshotRequest; 
@property (assign,nonatomic) unsigned sentSnapshotRequest;                  //@synthesize sentSnapshotRequest=_sentSnapshotRequest - In the implementation block
@property (assign,nonatomic) BOOL hasSentSnapshotResponse; 
@property (assign,nonatomic) unsigned sentSnapshotResponse;                 //@synthesize sentSnapshotResponse=_sentSnapshotResponse - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
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

