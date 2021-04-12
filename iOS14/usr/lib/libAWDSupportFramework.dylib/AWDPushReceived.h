/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDPushReceived : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectionType;
	unsigned _dualChannelState;
	NSString* _guid;
	unsigned _isFromStorage;
	int _linkQuality;
	unsigned _payloadSize;
	unsigned _receiveOffset;
	NSString* _topic;
	int _wakeStatus;
	SCD_Struct_AW12 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                   //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                           //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasReceiveOffset; 
@property (assign,nonatomic) unsigned receiveOffset;                    //@synthesize receiveOffset=_receiveOffset - In the implementation block
@property (assign,nonatomic) BOOL hasPayloadSize; 
@property (assign,nonatomic) unsigned payloadSize;                      //@synthesize payloadSize=_payloadSize - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromStorage; 
@property (assign,nonatomic) unsigned isFromStorage;                    //@synthesize isFromStorage=_isFromStorage - In the implementation block
@property (assign,nonatomic) BOOL hasDualChannelState; 
@property (assign,nonatomic) unsigned dualChannelState;                 //@synthesize dualChannelState=_dualChannelState - In the implementation block
@property (nonatomic,readonly) BOOL hasTopic; 
@property (nonatomic,retain) NSString * topic;                          //@synthesize topic=_topic - In the implementation block
@property (assign,nonatomic) BOOL hasWakeStatus; 
@property (assign,nonatomic) int wakeStatus;                            //@synthesize wakeStatus=_wakeStatus - In the implementation block
-(id)dictionaryRepresentation;
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)guid;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(int)linkQuality;
-(unsigned)connectionType;
-(NSString *)topic;
-(void)setLinkQuality:(int)arg1 ;
-(void)setConnectionType:(unsigned)arg1 ;
-(unsigned)dualChannelState;
-(BOOL)hasDualChannelState;
-(unsigned long long)timestamp;
-(BOOL)hasConnectionType;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)payloadSize;
-(id)description;
-(void)setHasDualChannelState:(BOOL)arg1 ;
-(BOOL)hasLinkQuality;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(void)setDualChannelState:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasGuid;
-(void)setGuid:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasTopic;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setPayloadSize:(unsigned)arg1 ;
-(void)setHasPayloadSize:(BOOL)arg1 ;
-(BOOL)hasPayloadSize;
-(unsigned)isFromStorage;
-(void)setIsFromStorage:(unsigned)arg1 ;
-(void)setReceiveOffset:(unsigned)arg1 ;
-(void)setHasReceiveOffset:(BOOL)arg1 ;
-(BOOL)hasReceiveOffset;
-(void)setHasIsFromStorage:(BOOL)arg1 ;
-(BOOL)hasIsFromStorage;
-(int)wakeStatus;
-(void)setWakeStatus:(int)arg1 ;
-(void)setHasWakeStatus:(BOOL)arg1 ;
-(BOOL)hasWakeStatus;
-(id)wakeStatusAsString:(int)arg1 ;
-(int)StringAsWakeStatus:(id)arg1 ;
-(unsigned)receiveOffset;
@end

