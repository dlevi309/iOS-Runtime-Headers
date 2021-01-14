/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDPushConnectionConnected : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectDuration;
	unsigned _connectionType;
	unsigned _dnsDuration;
	unsigned _dualChannelState;
	NSString* _guid;
	int _linkQuality;
	unsigned _tlsDuration;
	SCD_Struct_AW16 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasConnectDuration; 
@property (assign,nonatomic) unsigned connectDuration;                  //@synthesize connectDuration=_connectDuration - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                   //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                           //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasDualChannelState; 
@property (assign,nonatomic) unsigned dualChannelState;                 //@synthesize dualChannelState=_dualChannelState - In the implementation block
@property (assign,nonatomic) BOOL hasDnsDuration; 
@property (assign,nonatomic) unsigned dnsDuration;                      //@synthesize dnsDuration=_dnsDuration - In the implementation block
@property (assign,nonatomic) BOOL hasTlsDuration; 
@property (assign,nonatomic) unsigned tlsDuration;                      //@synthesize tlsDuration=_tlsDuration - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)guid;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(int)linkQuality;
-(unsigned)connectionType;
-(BOOL)hasConnectDuration;
-(unsigned)dnsDuration;
-(void)setLinkQuality:(int)arg1 ;
-(void)setDnsDuration:(unsigned)arg1 ;
-(void)setHasDnsDuration:(BOOL)arg1 ;
-(void)setHasConnectDuration:(BOOL)arg1 ;
-(void)setConnectionType:(unsigned)arg1 ;
-(unsigned)dualChannelState;
-(BOOL)hasDualChannelState;
-(unsigned long long)timestamp;
-(unsigned)connectDuration;
-(BOOL)hasConnectionType;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasDualChannelState:(BOOL)arg1 ;
-(BOOL)hasDnsDuration;
-(void)setConnectDuration:(unsigned)arg1 ;
-(BOOL)hasLinkQuality;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(void)setDualChannelState:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)tlsDuration;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasTlsDuration:(BOOL)arg1 ;
-(BOOL)hasGuid;
-(void)setGuid:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasTlsDuration;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setTlsDuration:(unsigned)arg1 ;
@end

