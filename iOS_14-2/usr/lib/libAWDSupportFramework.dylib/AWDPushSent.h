/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDPushSent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectionType;
	unsigned _dualChannelState;
	unsigned _error;
	unsigned _flushes;
	NSString* _guid;
	int _linkQuality;
	unsigned _payloadSize;
	unsigned _sendDuration;
	NSString* _topic;
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
@property (assign,nonatomic) BOOL hasFlushes; 
@property (assign,nonatomic) unsigned flushes;                          //@synthesize flushes=_flushes - In the implementation block
@property (assign,nonatomic) BOOL hasSendDuration; 
@property (assign,nonatomic) unsigned sendDuration;                     //@synthesize sendDuration=_sendDuration - In the implementation block
@property (assign,nonatomic) BOOL hasPayloadSize; 
@property (assign,nonatomic) unsigned payloadSize;                      //@synthesize payloadSize=_payloadSize - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) unsigned error;                            //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL hasDualChannelState; 
@property (assign,nonatomic) unsigned dualChannelState;                 //@synthesize dualChannelState=_dualChannelState - In the implementation block
@property (nonatomic,readonly) BOOL hasTopic; 
@property (nonatomic,retain) NSString * topic;                          //@synthesize topic=_topic - In the implementation block
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
-(void)setHasError:(BOOL)arg1 ;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setError:(unsigned)arg1 ;
-(unsigned)error;
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
-(BOOL)hasError;
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
-(void)setSendDuration:(unsigned)arg1 ;
-(unsigned)sendDuration;
-(void)setHasSendDuration:(BOOL)arg1 ;
-(BOOL)hasSendDuration;
-(void)setFlushes:(unsigned)arg1 ;
-(void)setHasFlushes:(BOOL)arg1 ;
-(BOOL)hasFlushes;
-(unsigned)flushes;
@end

