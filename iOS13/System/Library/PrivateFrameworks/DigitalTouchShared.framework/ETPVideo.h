/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface ETPVideo : PBCodable <NSCopying> {

	NSData* _introMessageData;
	int _mediaType;
	NSData* _playingMessagesData;
	SCD_Struct_ET18 _has;

}

@property (nonatomic,readonly) BOOL hasIntroMessageData; 
@property (nonatomic,retain) NSData * introMessageData;                  //@synthesize introMessageData=_introMessageData - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayingMessagesData; 
@property (nonatomic,retain) NSData * playingMessagesData;               //@synthesize playingMessagesData=_playingMessagesData - In the implementation block
@property (assign,nonatomic) BOOL hasMediaType; 
@property (assign,nonatomic) int mediaType;                              //@synthesize mediaType=_mediaType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(int)mediaType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setMediaType:(int)arg1 ;
-(id)mediaTypeAsString:(int)arg1 ;
-(int)StringAsMediaType:(id)arg1 ;
-(BOOL)hasMediaType;
-(void)setHasMediaType:(BOOL)arg1 ;
-(NSData *)introMessageData;
-(NSData *)playingMessagesData;
-(void)setIntroMessageData:(NSData *)arg1 ;
-(void)setPlayingMessagesData:(NSData *)arg1 ;
-(BOOL)hasIntroMessageData;
-(BOOL)hasPlayingMessagesData;
@end

