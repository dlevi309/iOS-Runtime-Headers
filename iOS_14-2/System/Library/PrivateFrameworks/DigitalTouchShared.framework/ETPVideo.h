/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)setMediaType:(int)arg1 ;
-(int)mediaType;
-(void)setHasMediaType:(BOOL)arg1 ;
-(BOOL)hasMediaType;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)mediaTypeAsString:(int)arg1 ;
-(int)StringAsMediaType:(id)arg1 ;
-(NSData *)introMessageData;
-(NSData *)playingMessagesData;
-(void)setIntroMessageData:(NSData *)arg1 ;
-(void)setPlayingMessagesData:(NSData *)arg1 ;
-(BOOL)hasIntroMessageData;
-(BOOL)hasPlayingMessagesData;
@end

