/*
* Generated on Thursday, January 14, 2021 at 2:29:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDWiFiBlacklistingEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _blacklistedDuration;
	unsigned _blacklistedReason;
	unsigned _blacklistedSubreason;
	unsigned _networkFlags;
	NSData* _oui;
	unsigned _securityType;
	unsigned _unblacklistingReason;
	SCD_Struct_AW16 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasOui; 
@property (nonatomic,retain) NSData * oui;                               //@synthesize oui=_oui - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkFlags; 
@property (assign,nonatomic) unsigned networkFlags;                      //@synthesize networkFlags=_networkFlags - In the implementation block
@property (assign,nonatomic) BOOL hasSecurityType; 
@property (assign,nonatomic) unsigned securityType;                      //@synthesize securityType=_securityType - In the implementation block
@property (assign,nonatomic) BOOL hasBlacklistedReason; 
@property (assign,nonatomic) unsigned blacklistedReason;                 //@synthesize blacklistedReason=_blacklistedReason - In the implementation block
@property (assign,nonatomic) BOOL hasBlacklistedSubreason; 
@property (assign,nonatomic) unsigned blacklistedSubreason;              //@synthesize blacklistedSubreason=_blacklistedSubreason - In the implementation block
@property (assign,nonatomic) BOOL hasBlacklistedDuration; 
@property (assign,nonatomic) unsigned blacklistedDuration;               //@synthesize blacklistedDuration=_blacklistedDuration - In the implementation block
@property (assign,nonatomic) BOOL hasUnblacklistingReason; 
@property (assign,nonatomic) unsigned unblacklistingReason;              //@synthesize unblacklistingReason=_unblacklistingReason - In the implementation block
-(id)dictionaryRepresentation;
-(NSData *)oui;
-(BOOL)hasSecurityType;
-(unsigned)securityType;
-(void)setHasSecurityType:(BOOL)arg1 ;
-(unsigned long long)timestamp;
-(void)setSecurityType:(unsigned)arg1 ;
-(void)setOui:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasOui;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned)blacklistedReason;
-(void)setBlacklistedReason:(unsigned)arg1 ;
-(void)setNetworkFlags:(unsigned)arg1 ;
-(void)setHasNetworkFlags:(BOOL)arg1 ;
-(BOOL)hasNetworkFlags;
-(void)setHasBlacklistedReason:(BOOL)arg1 ;
-(BOOL)hasBlacklistedReason;
-(void)setBlacklistedSubreason:(unsigned)arg1 ;
-(void)setHasBlacklistedSubreason:(BOOL)arg1 ;
-(BOOL)hasBlacklistedSubreason;
-(void)setBlacklistedDuration:(unsigned)arg1 ;
-(void)setHasBlacklistedDuration:(BOOL)arg1 ;
-(BOOL)hasBlacklistedDuration;
-(void)setUnblacklistingReason:(unsigned)arg1 ;
-(void)setHasUnblacklistingReason:(BOOL)arg1 ;
-(BOOL)hasUnblacklistingReason;
-(unsigned)networkFlags;
-(unsigned)blacklistedSubreason;
-(unsigned)blacklistedDuration;
-(unsigned)unblacklistingReason;
@end

