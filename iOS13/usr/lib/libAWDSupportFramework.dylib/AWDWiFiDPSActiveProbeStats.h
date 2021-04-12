/*
* Generated on Monday, March 1, 2021 at 2:35:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiDPSActiveProbeStats : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _rttGatewayBE;
	unsigned _rttGatewayBK;
	unsigned _rttGatewayVI;
	unsigned _rttGatewayVO;
	unsigned _rttPrimaryDnsBE;
	unsigned _rttPrimaryDnsBK;
	unsigned _rttPrimaryDnsVI;
	unsigned _rttPrimaryDnsVO;
	SCD_Struct_AW12 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasRttGatewayBE; 
@property (assign,nonatomic) unsigned rttGatewayBE;                     //@synthesize rttGatewayBE=_rttGatewayBE - In the implementation block
@property (assign,nonatomic) BOOL hasRttGatewayBK; 
@property (assign,nonatomic) unsigned rttGatewayBK;                     //@synthesize rttGatewayBK=_rttGatewayBK - In the implementation block
@property (assign,nonatomic) BOOL hasRttGatewayVO; 
@property (assign,nonatomic) unsigned rttGatewayVO;                     //@synthesize rttGatewayVO=_rttGatewayVO - In the implementation block
@property (assign,nonatomic) BOOL hasRttGatewayVI; 
@property (assign,nonatomic) unsigned rttGatewayVI;                     //@synthesize rttGatewayVI=_rttGatewayVI - In the implementation block
@property (assign,nonatomic) BOOL hasRttPrimaryDnsBE; 
@property (assign,nonatomic) unsigned rttPrimaryDnsBE;                  //@synthesize rttPrimaryDnsBE=_rttPrimaryDnsBE - In the implementation block
@property (assign,nonatomic) BOOL hasRttPrimaryDnsBK; 
@property (assign,nonatomic) unsigned rttPrimaryDnsBK;                  //@synthesize rttPrimaryDnsBK=_rttPrimaryDnsBK - In the implementation block
@property (assign,nonatomic) BOOL hasRttPrimaryDnsVO; 
@property (assign,nonatomic) unsigned rttPrimaryDnsVO;                  //@synthesize rttPrimaryDnsVO=_rttPrimaryDnsVO - In the implementation block
@property (assign,nonatomic) BOOL hasRttPrimaryDnsVI; 
@property (assign,nonatomic) unsigned rttPrimaryDnsVI;                  //@synthesize rttPrimaryDnsVI=_rttPrimaryDnsVI - In the implementation block
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
-(void)setRttGatewayBE:(unsigned)arg1 ;
-(void)setHasRttGatewayBE:(BOOL)arg1 ;
-(BOOL)hasRttGatewayBE;
-(void)setRttGatewayBK:(unsigned)arg1 ;
-(void)setHasRttGatewayBK:(BOOL)arg1 ;
-(BOOL)hasRttGatewayBK;
-(void)setRttGatewayVO:(unsigned)arg1 ;
-(void)setHasRttGatewayVO:(BOOL)arg1 ;
-(BOOL)hasRttGatewayVO;
-(void)setRttGatewayVI:(unsigned)arg1 ;
-(void)setHasRttGatewayVI:(BOOL)arg1 ;
-(BOOL)hasRttGatewayVI;
-(void)setRttPrimaryDnsBE:(unsigned)arg1 ;
-(void)setHasRttPrimaryDnsBE:(BOOL)arg1 ;
-(BOOL)hasRttPrimaryDnsBE;
-(void)setRttPrimaryDnsBK:(unsigned)arg1 ;
-(void)setHasRttPrimaryDnsBK:(BOOL)arg1 ;
-(BOOL)hasRttPrimaryDnsBK;
-(void)setRttPrimaryDnsVO:(unsigned)arg1 ;
-(void)setHasRttPrimaryDnsVO:(BOOL)arg1 ;
-(BOOL)hasRttPrimaryDnsVO;
-(void)setRttPrimaryDnsVI:(unsigned)arg1 ;
-(void)setHasRttPrimaryDnsVI:(BOOL)arg1 ;
-(BOOL)hasRttPrimaryDnsVI;
-(unsigned)rttGatewayBE;
-(unsigned)rttGatewayBK;
-(unsigned)rttGatewayVO;
-(unsigned)rttGatewayVI;
-(unsigned)rttPrimaryDnsBE;
-(unsigned)rttPrimaryDnsBK;
-(unsigned)rttPrimaryDnsVO;
-(unsigned)rttPrimaryDnsVI;
@end

