/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDPushProxyManagerSend : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _guid;
	unsigned _isNearby;
	unsigned _messageCommand;
	NSString* _topic;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasMessageCommand; 
@property (assign,nonatomic) unsigned messageCommand;                   //@synthesize messageCommand=_messageCommand - In the implementation block
@property (nonatomic,readonly) BOOL hasTopic; 
@property (nonatomic,retain) NSString * topic;                          //@synthesize topic=_topic - In the implementation block
@property (assign,nonatomic) BOOL hasIsNearby; 
@property (assign,nonatomic) unsigned isNearby;                         //@synthesize isNearby=_isNearby - In the implementation block
-(id)dictionaryRepresentation;
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)guid;
-(unsigned)isNearby;
-(NSString *)topic;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
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
-(void)setIsNearby:(unsigned)arg1 ;
-(void)setMessageCommand:(unsigned)arg1 ;
-(void)setHasMessageCommand:(BOOL)arg1 ;
-(BOOL)hasMessageCommand;
-(void)setHasIsNearby:(BOOL)arg1 ;
-(BOOL)hasIsNearby;
-(unsigned)messageCommand;
@end

