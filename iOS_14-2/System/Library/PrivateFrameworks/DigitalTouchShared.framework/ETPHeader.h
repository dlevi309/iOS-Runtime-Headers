/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface ETPHeader : PBCodable <NSCopying> {

	long long _sendDate;
	double _startDelay;
	unsigned _baseColor;
	NSString* _identifier;
	NSData* _messageData;
	int _messageType;
	BOOL _supportsPlaybackTimeOffsets;
	SCD_Struct_ET1 _has;

}

@property (assign,nonatomic) BOOL hasMessageType; 
@property (assign,nonatomic) int messageType;                                  //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) BOOL hasSendDate; 
@property (assign,nonatomic) long long sendDate;                               //@synthesize sendDate=_sendDate - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageData; 
@property (nonatomic,retain) NSData * messageData;                             //@synthesize messageData=_messageData - In the implementation block
@property (assign,nonatomic) BOOL hasBaseColor; 
@property (assign,nonatomic) unsigned baseColor;                               //@synthesize baseColor=_baseColor - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsPlaybackTimeOffsets; 
@property (assign,nonatomic) BOOL supportsPlaybackTimeOffsets;                 //@synthesize supportsPlaybackTimeOffsets=_supportsPlaybackTimeOffsets - In the implementation block
@property (assign,nonatomic) BOOL hasStartDelay; 
@property (assign,nonatomic) double startDelay;                                //@synthesize startDelay=_startDelay - In the implementation block
-(id)dictionaryRepresentation;
-(int)messageType;
-(void)setMessageType:(int)arg1 ;
-(void)setHasMessageType:(BOOL)arg1 ;
-(BOOL)hasMessageType;
-(id)messageTypeAsString:(int)arg1 ;
-(int)StringAsMessageType:(id)arg1 ;
-(long long)sendDate;
-(BOOL)hasIdentifier;
-(BOOL)hasMessageData;
-(void)mergeFrom:(id)arg1 ;
-(void)setBaseColor:(unsigned)arg1 ;
-(id)description;
-(double)startDelay;
-(unsigned long long)hash;
-(void)setSendDate:(long long)arg1 ;
-(void)setMessageData:(NSData *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)baseColor;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)messageData;
-(void)setStartDelay:(double)arg1 ;
-(void)setHasSendDate:(BOOL)arg1 ;
-(BOOL)hasSendDate;
-(void)setHasBaseColor:(BOOL)arg1 ;
-(BOOL)hasBaseColor;
-(void)setSupportsPlaybackTimeOffsets:(BOOL)arg1 ;
-(void)setHasSupportsPlaybackTimeOffsets:(BOOL)arg1 ;
-(BOOL)hasSupportsPlaybackTimeOffsets;
-(void)setHasStartDelay:(BOOL)arg1 ;
-(BOOL)hasStartDelay;
-(BOOL)supportsPlaybackTimeOffsets;
@end

