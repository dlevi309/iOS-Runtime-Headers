/*
* Generated on Thursday, January 14, 2021 at 2:29:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDWiFiMetricIPv4DHCPLatency : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _dhcpLatencyMilliSecs;
	unsigned _dhcpLeaseMins;
	NSString* _privateMacType;
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
@property (nonatomic,readonly) BOOL hasPrivateMacType; 
@property (nonatomic,retain) NSString * privateMacType;                  //@synthesize privateMacType=_privateMacType - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)privateMacType;
-(BOOL)hasPrivateMacType;
-(BOOL)hasSecurityType;
-(unsigned)securityType;
-(void)setHasSecurityType:(BOOL)arg1 ;
-(BOOL)hasDhcpLeaseMins;
-(unsigned long long)timestamp;
-(void)setSecurityType:(unsigned)arg1 ;
-(void)setPrivateMacType:(NSString *)arg1 ;
-(unsigned)dhcpLatencyMilliSecs;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDhcpLatencyMilliSecs;
-(void)setHasDhcpLeaseMins:(BOOL)arg1 ;
-(id)description;
-(unsigned)dhcpLeaseMins;
-(void)setDhcpLatencyMilliSecs:(unsigned)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasDhcpLatencyMilliSecs:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDhcpLeaseMins:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

