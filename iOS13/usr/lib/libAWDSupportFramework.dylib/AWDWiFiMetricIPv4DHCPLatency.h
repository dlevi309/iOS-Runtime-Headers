/*
* Generated on Monday, March 1, 2021 at 2:35:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricIPv4DHCPLatency : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _dhcpLatencyMilliSecs;
	unsigned _dhcpLeaseMins;
	unsigned _securityType;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasDhcpLatencyMilliSecs; 
@property (assign,nonatomic) unsigned dhcpLatencyMilliSecs;              //@synthesize dhcpLatencyMilliSecs=_dhcpLatencyMilliSecs - In the implementation block
@property (assign,nonatomic) BOOL hasSecurityType; 
@property (assign,nonatomic) unsigned securityType;                      //@synthesize securityType=_securityType - In the implementation block
@property (assign,nonatomic) BOOL hasDhcpLeaseMins; 
@property (assign,nonatomic) unsigned dhcpLeaseMins;                     //@synthesize dhcpLeaseMins=_dhcpLeaseMins - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
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
-(void)setSecurityType:(unsigned)arg1 ;
-(unsigned)securityType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasSecurityType:(BOOL)arg1 ;
-(BOOL)hasSecurityType;
-(void)setDhcpLatencyMilliSecs:(unsigned)arg1 ;
-(void)setHasDhcpLatencyMilliSecs:(BOOL)arg1 ;
-(BOOL)hasDhcpLatencyMilliSecs;
-(void)setDhcpLeaseMins:(unsigned)arg1 ;
-(void)setHasDhcpLeaseMins:(BOOL)arg1 ;
-(BOOL)hasDhcpLeaseMins;
-(unsigned)dhcpLatencyMilliSecs;
-(unsigned)dhcpLeaseMins;
@end

