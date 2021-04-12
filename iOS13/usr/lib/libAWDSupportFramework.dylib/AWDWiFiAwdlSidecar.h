/*
* Generated on Monday, March 1, 2021 at 2:35:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDSidecarBssSteering, AWDSidecarPeerTraffic;

@interface AWDWiFiAwdlSidecar : PBCodable <NSCopying> {

	SCD_Struct_AW21* _channelSequences;
	unsigned long long _bgDuration;
	unsigned long long _fgDuration;
	unsigned long long _timestamp;
	unsigned _bgEntryCount;
	unsigned _dfspState;
	unsigned _infraDisconnectedCount;
	int _peerRssi24G;
	int _peerRssi5G;
	AWDSidecarBssSteering* _sidecarBssSteering;
	AWDSidecarPeerTraffic* _sidecarPeerTraffic;
	BOOL _isSDB;
	SCD_Struct_AW12 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasFgDuration; 
@property (assign,nonatomic) unsigned long long fgDuration;                           //@synthesize fgDuration=_fgDuration - In the implementation block
@property (assign,nonatomic) BOOL hasBgDuration; 
@property (assign,nonatomic) unsigned long long bgDuration;                           //@synthesize bgDuration=_bgDuration - In the implementation block
@property (assign,nonatomic) BOOL hasBgEntryCount; 
@property (assign,nonatomic) unsigned bgEntryCount;                                   //@synthesize bgEntryCount=_bgEntryCount - In the implementation block
@property (assign,nonatomic) BOOL hasPeerRssi24G; 
@property (assign,nonatomic) int peerRssi24G;                                         //@synthesize peerRssi24G=_peerRssi24G - In the implementation block
@property (assign,nonatomic) BOOL hasPeerRssi5G; 
@property (assign,nonatomic) int peerRssi5G;                                          //@synthesize peerRssi5G=_peerRssi5G - In the implementation block
@property (assign,nonatomic) BOOL hasIsSDB; 
@property (assign,nonatomic) BOOL isSDB;                                              //@synthesize isSDB=_isSDB - In the implementation block
@property (nonatomic,readonly) BOOL hasSidecarBssSteering; 
@property (nonatomic,retain) AWDSidecarBssSteering * sidecarBssSteering;              //@synthesize sidecarBssSteering=_sidecarBssSteering - In the implementation block
@property (nonatomic,readonly) BOOL hasSidecarPeerTraffic; 
@property (nonatomic,retain) AWDSidecarPeerTraffic * sidecarPeerTraffic;              //@synthesize sidecarPeerTraffic=_sidecarPeerTraffic - In the implementation block
@property (assign,nonatomic) BOOL hasDfspState; 
@property (assign,nonatomic) unsigned dfspState;                                      //@synthesize dfspState=_dfspState - In the implementation block
@property (assign,nonatomic) BOOL hasInfraDisconnectedCount; 
@property (assign,nonatomic) unsigned infraDisconnectedCount;                         //@synthesize infraDisconnectedCount=_infraDisconnectedCount - In the implementation block
@property (nonatomic,readonly) unsigned long long channelSequencesCount; 
@property (nonatomic,readonly) unsigned* channelSequences; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setSidecarBssSteering:(AWDSidecarBssSteering *)arg1 ;
-(void)setSidecarPeerTraffic:(AWDSidecarPeerTraffic *)arg1 ;
-(unsigned long long)channelSequencesCount;
-(void)clearChannelSequences;
-(unsigned)channelSequenceAtIndex:(unsigned long long)arg1 ;
-(void)addChannelSequence:(unsigned)arg1 ;
-(void)setFgDuration:(unsigned long long)arg1 ;
-(void)setHasFgDuration:(BOOL)arg1 ;
-(BOOL)hasFgDuration;
-(void)setBgDuration:(unsigned long long)arg1 ;
-(void)setHasBgDuration:(BOOL)arg1 ;
-(BOOL)hasBgDuration;
-(void)setBgEntryCount:(unsigned)arg1 ;
-(void)setHasBgEntryCount:(BOOL)arg1 ;
-(BOOL)hasBgEntryCount;
-(void)setPeerRssi24G:(int)arg1 ;
-(void)setHasPeerRssi24G:(BOOL)arg1 ;
-(BOOL)hasPeerRssi24G;
-(void)setPeerRssi5G:(int)arg1 ;
-(void)setHasPeerRssi5G:(BOOL)arg1 ;
-(BOOL)hasPeerRssi5G;
-(void)setIsSDB:(BOOL)arg1 ;
-(void)setHasIsSDB:(BOOL)arg1 ;
-(BOOL)hasIsSDB;
-(BOOL)hasSidecarBssSteering;
-(BOOL)hasSidecarPeerTraffic;
-(void)setDfspState:(unsigned)arg1 ;
-(void)setHasDfspState:(BOOL)arg1 ;
-(BOOL)hasDfspState;
-(void)setInfraDisconnectedCount:(unsigned)arg1 ;
-(void)setHasInfraDisconnectedCount:(BOOL)arg1 ;
-(BOOL)hasInfraDisconnectedCount;
-(unsigned*)channelSequences;
-(void)setChannelSequences:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)fgDuration;
-(unsigned long long)bgDuration;
-(unsigned)bgEntryCount;
-(int)peerRssi24G;
-(int)peerRssi5G;
-(BOOL)isSDB;
-(AWDSidecarBssSteering *)sidecarBssSteering;
-(AWDSidecarPeerTraffic *)sidecarPeerTraffic;
-(unsigned)dfspState;
-(unsigned)infraDisconnectedCount;
@end

