/*
* Generated on Thursday, January 14, 2021 at 2:29:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDWiFiDPSAWDLSnapshot, AWDWiFiDPSBTSnapshot, AWDWiFiDPSPerACTxCompletionSnapshot;

@interface AWDWiFiDPSSnapshot : PBCodable <NSCopying> {

	AWDWiFiDPSAWDLSnapshot* _awdlSnapshot;
	AWDWiFiDPSBTSnapshot* _btSnapshot;
	AWDWiFiDPSPerACTxCompletionSnapshot* _txCompletionSnapshotBE;
	AWDWiFiDPSPerACTxCompletionSnapshot* _txCompletionSnapshotBK;
	AWDWiFiDPSPerACTxCompletionSnapshot* _txCompletionSnapshotVI;
	AWDWiFiDPSPerACTxCompletionSnapshot* _txCompletionSnapshotVO;

}

@property (nonatomic,readonly) BOOL hasTxCompletionSnapshotBE; 
@property (nonatomic,retain) AWDWiFiDPSPerACTxCompletionSnapshot * txCompletionSnapshotBE;              //@synthesize txCompletionSnapshotBE=_txCompletionSnapshotBE - In the implementation block
@property (nonatomic,readonly) BOOL hasTxCompletionSnapshotBK; 
@property (nonatomic,retain) AWDWiFiDPSPerACTxCompletionSnapshot * txCompletionSnapshotBK;              //@synthesize txCompletionSnapshotBK=_txCompletionSnapshotBK - In the implementation block
@property (nonatomic,readonly) BOOL hasTxCompletionSnapshotVO; 
@property (nonatomic,retain) AWDWiFiDPSPerACTxCompletionSnapshot * txCompletionSnapshotVO;              //@synthesize txCompletionSnapshotVO=_txCompletionSnapshotVO - In the implementation block
@property (nonatomic,readonly) BOOL hasTxCompletionSnapshotVI; 
@property (nonatomic,retain) AWDWiFiDPSPerACTxCompletionSnapshot * txCompletionSnapshotVI;              //@synthesize txCompletionSnapshotVI=_txCompletionSnapshotVI - In the implementation block
@property (nonatomic,readonly) BOOL hasBtSnapshot; 
@property (nonatomic,retain) AWDWiFiDPSBTSnapshot * btSnapshot;                                         //@synthesize btSnapshot=_btSnapshot - In the implementation block
@property (nonatomic,readonly) BOOL hasAwdlSnapshot; 
@property (nonatomic,retain) AWDWiFiDPSAWDLSnapshot * awdlSnapshot;                                     //@synthesize awdlSnapshot=_awdlSnapshot - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setTxCompletionSnapshotBE:(AWDWiFiDPSPerACTxCompletionSnapshot *)arg1 ;
-(void)setTxCompletionSnapshotBK:(AWDWiFiDPSPerACTxCompletionSnapshot *)arg1 ;
-(void)setTxCompletionSnapshotVO:(AWDWiFiDPSPerACTxCompletionSnapshot *)arg1 ;
-(void)setTxCompletionSnapshotVI:(AWDWiFiDPSPerACTxCompletionSnapshot *)arg1 ;
-(void)setBtSnapshot:(AWDWiFiDPSBTSnapshot *)arg1 ;
-(void)setAwdlSnapshot:(AWDWiFiDPSAWDLSnapshot *)arg1 ;
-(BOOL)hasTxCompletionSnapshotBE;
-(BOOL)hasTxCompletionSnapshotBK;
-(BOOL)hasTxCompletionSnapshotVO;
-(BOOL)hasTxCompletionSnapshotVI;
-(BOOL)hasBtSnapshot;
-(BOOL)hasAwdlSnapshot;
-(AWDWiFiDPSPerACTxCompletionSnapshot *)txCompletionSnapshotBE;
-(AWDWiFiDPSPerACTxCompletionSnapshot *)txCompletionSnapshotBK;
-(AWDWiFiDPSPerACTxCompletionSnapshot *)txCompletionSnapshotVO;
-(AWDWiFiDPSPerACTxCompletionSnapshot *)txCompletionSnapshotVI;
-(AWDWiFiDPSBTSnapshot *)btSnapshot;
-(AWDWiFiDPSAWDLSnapshot *)awdlSnapshot;
@end

