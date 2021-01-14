/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSQRAllocation : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _timestamp;
	unsigned _hasRecipientAccepted;
	unsigned _payloadSize;
	unsigned _result;
	NSString* _service;
	NSString* _topic;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;                //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasResult; 
@property (assign,nonatomic) unsigned result;                            //@synthesize result=_result - In the implementation block
@property (assign,nonatomic) BOOL hasHasRecipientAccepted; 
@property (assign,nonatomic) unsigned hasRecipientAccepted;              //@synthesize hasRecipientAccepted=_hasRecipientAccepted - In the implementation block
@property (assign,nonatomic) BOOL hasPayloadSize; 
@property (assign,nonatomic) unsigned payloadSize;                       //@synthesize payloadSize=_payloadSize - In the implementation block
@property (nonatomic,readonly) BOOL hasTopic; 
@property (nonatomic,retain) NSString * topic;                           //@synthesize topic=_topic - In the implementation block
@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) NSString * service;                         //@synthesize service=_service - In the implementation block
-(void)setResult:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasResult;
-(void)setTopic:(NSString *)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(NSString *)topic;
-(unsigned long long)timestamp;
-(void)setHasResult:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)payloadSize;
-(id)description;
-(unsigned)hasRecipientAccepted;
-(BOOL)hasService;
-(void)setService:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(unsigned)result;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasTopic;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)service;
-(void)dealloc;
-(void)setPayloadSize:(unsigned)arg1 ;
-(void)setHasPayloadSize:(BOOL)arg1 ;
-(BOOL)hasPayloadSize;
-(void)setHasRecipientAccepted:(unsigned)arg1 ;
-(void)setHasHasRecipientAccepted:(BOOL)arg1 ;
-(BOOL)hasHasRecipientAccepted;
@end

