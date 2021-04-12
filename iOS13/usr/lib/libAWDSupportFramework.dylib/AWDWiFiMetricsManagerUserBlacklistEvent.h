/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDWiFiMetricsManagerUserBlacklistEvent : PBCodable <NSCopying> {

	unsigned long long _blacklistDuration;
	unsigned long long _dstChange;
	unsigned long long _timestamp;
	unsigned long long _trigger;
	NSString* _apuuid;
	unsigned _eventType;
	unsigned _locState;
	unsigned _moState;
	unsigned _securityType;
	NSString* _ssid;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) unsigned eventType;                                //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) BOOL hasSsid; 
@property (nonatomic,retain) NSString * ssid;                                   //@synthesize ssid=_ssid - In the implementation block
@property (assign,nonatomic) BOOL hasSecurityType; 
@property (assign,nonatomic) unsigned securityType;                             //@synthesize securityType=_securityType - In the implementation block
@property (assign,nonatomic) BOOL hasTrigger; 
@property (assign,nonatomic) unsigned long long trigger;                        //@synthesize trigger=_trigger - In the implementation block
@property (assign,nonatomic) BOOL hasBlacklistDuration; 
@property (assign,nonatomic) unsigned long long blacklistDuration;              //@synthesize blacklistDuration=_blacklistDuration - In the implementation block
@property (nonatomic,readonly) BOOL hasApuuid; 
@property (nonatomic,retain) NSString * apuuid;                                 //@synthesize apuuid=_apuuid - In the implementation block
@property (assign,nonatomic) BOOL hasDstChange; 
@property (assign,nonatomic) unsigned long long dstChange;                      //@synthesize dstChange=_dstChange - In the implementation block
@property (assign,nonatomic) BOOL hasMoState; 
@property (assign,nonatomic) unsigned moState;                                  //@synthesize moState=_moState - In the implementation block
@property (assign,nonatomic) BOOL hasLocState; 
@property (assign,nonatomic) unsigned locState;                                 //@synthesize locState=_locState - In the implementation block
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
-(unsigned)eventType;
-(NSString *)ssid;
-(void)setSsid:(NSString *)arg1 ;
-(void)setSecurityType:(unsigned)arg1 ;
-(unsigned)securityType;
-(unsigned long long)trigger;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTrigger:(unsigned long long)arg1 ;
-(void)setHasTrigger:(BOOL)arg1 ;
-(BOOL)hasTrigger;
-(void)setEventType:(unsigned)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(void)setHasSecurityType:(BOOL)arg1 ;
-(BOOL)hasSecurityType;
-(BOOL)hasSsid;
-(void)setApuuid:(NSString *)arg1 ;
-(void)setBlacklistDuration:(unsigned long long)arg1 ;
-(void)setHasBlacklistDuration:(BOOL)arg1 ;
-(BOOL)hasBlacklistDuration;
-(BOOL)hasApuuid;
-(void)setDstChange:(unsigned long long)arg1 ;
-(void)setHasDstChange:(BOOL)arg1 ;
-(BOOL)hasDstChange;
-(void)setMoState:(unsigned)arg1 ;
-(void)setHasMoState:(BOOL)arg1 ;
-(BOOL)hasMoState;
-(void)setLocState:(unsigned)arg1 ;
-(void)setHasLocState:(BOOL)arg1 ;
-(BOOL)hasLocState;
-(unsigned long long)blacklistDuration;
-(NSString *)apuuid;
-(unsigned long long)dstChange;
-(unsigned)moState;
-(unsigned)locState;
@end

