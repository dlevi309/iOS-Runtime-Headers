/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitMessageTransported : PBCodable <NSCopying> {

	unsigned long long _payloadSize;
	unsigned long long _timestamp;
	int _direction;
	NSString* _identifier;
	NSString* _messageName;
	int _messageType;
	NSString* _transactionID;
	int _transport;
	BOOL _isSecure;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasPayloadSize; 
@property (assign,nonatomic) unsigned long long payloadSize;              //@synthesize payloadSize=_payloadSize - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasTransactionID; 
@property (nonatomic,retain) NSString * transactionID;                    //@synthesize transactionID=_transactionID - In the implementation block
@property (assign,nonatomic) BOOL hasIsSecure; 
@property (assign,nonatomic) BOOL isSecure;                               //@synthesize isSecure=_isSecure - In the implementation block
@property (assign,nonatomic) BOOL hasMessageType; 
@property (assign,nonatomic) int messageType;                             //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) BOOL hasTransport; 
@property (assign,nonatomic) int transport;                               //@synthesize transport=_transport - In the implementation block
@property (assign,nonatomic) BOOL hasDirection; 
@property (assign,nonatomic) int direction;                               //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageName; 
@property (nonatomic,retain) NSString * messageName;                      //@synthesize messageName=_messageName - In the implementation block
-(BOOL)isSecure;
-(int)direction;
-(id)dictionaryRepresentation;
-(int)messageType;
-(void)setMessageType:(int)arg1 ;
-(BOOL)hasMessageName;
-(int)transport;
-(void)setDirection:(int)arg1 ;
-(void)setHasMessageType:(BOOL)arg1 ;
-(BOOL)hasMessageType;
-(id)messageTypeAsString:(int)arg1 ;
-(int)StringAsMessageType:(id)arg1 ;
-(BOOL)hasIdentifier;
-(unsigned long long)timestamp;
-(NSString *)messageName;
-(void)setMessageName:(NSString *)arg1 ;
-(void)setTransport:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)payloadSize;
-(id)description;
-(BOOL)hasTransport;
-(BOOL)hasDirection;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTransactionID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(NSString *)transactionID;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPayloadSize:(unsigned long long)arg1 ;
-(void)setIsSecure:(BOOL)arg1 ;
-(id)transportAsString:(int)arg1 ;
-(int)StringAsTransport:(id)arg1 ;
-(void)setHasDirection:(BOOL)arg1 ;
-(id)directionAsString:(int)arg1 ;
-(int)StringAsDirection:(id)arg1 ;
-(void)setHasPayloadSize:(BOOL)arg1 ;
-(BOOL)hasPayloadSize;
-(BOOL)hasTransactionID;
-(void)setHasIsSecure:(BOOL)arg1 ;
-(BOOL)hasIsSecure;
-(void)setHasTransport:(BOOL)arg1 ;
@end

