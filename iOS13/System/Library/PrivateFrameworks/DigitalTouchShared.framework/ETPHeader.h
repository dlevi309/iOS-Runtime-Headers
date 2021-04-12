/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)messageType;
-(void)setMessageType:(int)arg1 ;
-(BOOL)hasMessageData;
-(NSData *)messageData;
-(void)setMessageData:(NSData *)arg1 ;
-(BOOL)hasIdentifier;
-(void)setHasMessageType:(BOOL)arg1 ;
-(BOOL)hasMessageType;
-(id)messageTypeAsString:(int)arg1 ;
-(int)StringAsMessageType:(id)arg1 ;
-(long long)sendDate;
-(void)setSendDate:(long long)arg1 ;
-(void)setBaseColor:(unsigned)arg1 ;
-(unsigned)baseColor;
-(void)setStartDelay:(double)arg1 ;
-(double)startDelay;
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

