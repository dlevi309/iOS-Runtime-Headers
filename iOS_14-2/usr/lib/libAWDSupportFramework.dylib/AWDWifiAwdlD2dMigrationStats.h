/*
* Generated on Thursday, January 14, 2021 at 2:29:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWifiAwdlD2dMigrationStats : PBCodable <NSCopying> {

	unsigned long long _rxBytes;
	unsigned long long _sessionDuration;
	unsigned long long _txBytes;
	unsigned _avgCCA;
	unsigned _channel;
	unsigned _migrationRole;
	int _peerRssi;
	unsigned _txFailureCount;
	SCD_Struct_AW12 _has;

}

@property (assign,nonatomic) BOOL hasSessionDuration; 
@property (assign,nonatomic) unsigned long long sessionDuration;              //@synthesize sessionDuration=_sessionDuration - In the implementation block
@property (assign,nonatomic) BOOL hasChannel; 
@property (assign,nonatomic) unsigned channel;                                //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) BOOL hasRxBytes; 
@property (assign,nonatomic) unsigned long long rxBytes;                      //@synthesize rxBytes=_rxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasPeerRssi; 
@property (assign,nonatomic) int peerRssi;                                    //@synthesize peerRssi=_peerRssi - In the implementation block
@property (assign,nonatomic) BOOL hasTxFailureCount; 
@property (assign,nonatomic) unsigned txFailureCount;                         //@synthesize txFailureCount=_txFailureCount - In the implementation block
@property (assign,nonatomic) BOOL hasTxBytes; 
@property (assign,nonatomic) unsigned long long txBytes;                      //@synthesize txBytes=_txBytes - In the implementation block
@property (assign,nonatomic) BOOL hasMigrationRole; 
@property (assign,nonatomic) unsigned migrationRole;                          //@synthesize migrationRole=_migrationRole - In the implementation block
@property (assign,nonatomic) BOOL hasAvgCCA; 
@property (assign,nonatomic) unsigned avgCCA;                                 //@synthesize avgCCA=_avgCCA - In the implementation block
-(void)setPeerRssi:(int)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)migrationRole;
-(void)setTxBytes:(unsigned long long)arg1 ;
-(unsigned long long)txBytes;
-(void)setHasSessionDuration:(BOOL)arg1 ;
-(void)setHasRxBytes:(BOOL)arg1 ;
-(void)setHasChannel:(BOOL)arg1 ;
-(unsigned long long)rxBytes;
-(int)peerRssi;
-(void)setRxBytes:(unsigned long long)arg1 ;
-(unsigned)txFailureCount;
-(BOOL)hasAvgCCA;
-(void)setChannel:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasAvgCCA:(BOOL)arg1 ;
-(unsigned)channel;
-(BOOL)hasTxBytes;
-(id)description;
-(BOOL)hasRxBytes;
-(void)setTxFailureCount:(unsigned)arg1 ;
-(void)setHasTxBytes:(BOOL)arg1 ;
-(unsigned)avgCCA;
-(BOOL)hasMigrationRole;
-(void)setHasMigrationRole:(BOOL)arg1 ;
-(void)setMigrationRole:(unsigned)arg1 ;
-(BOOL)hasChannel;
-(BOOL)hasSessionDuration;
-(unsigned long long)hash;
-(void)setSessionDuration:(unsigned long long)arg1 ;
-(void)setHasPeerRssi:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)sessionDuration;
-(void)setAvgCCA:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasTxFailureCount:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasPeerRssi;
-(BOOL)hasTxFailureCount;
-(BOOL)isEqual:(id)arg1 ;
@end

