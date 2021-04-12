/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _MRLyricsTokenProtobuf;

@interface _MRLyricsItemProtobuf : PBCodable <NSCopying> {

	NSString* _lyrics;
	_MRLyricsTokenProtobuf* _token;
	BOOL _userProvided;
	SCD_Struct_MR4 _has;

}

@property (nonatomic,readonly) BOOL hasLyrics; 
@property (nonatomic,retain) NSString * lyrics;                           //@synthesize lyrics=_lyrics - In the implementation block
@property (assign,nonatomic) BOOL hasUserProvided; 
@property (assign,nonatomic) BOOL userProvided;                           //@synthesize userProvided=_userProvided - In the implementation block
@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) _MRLyricsTokenProtobuf * token;              //@synthesize token=_token - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_MRLyricsTokenProtobuf *)token;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setToken:(_MRLyricsTokenProtobuf *)arg1 ;
-(BOOL)hasToken;
-(NSString *)lyrics;
-(BOOL)hasLyrics;
-(BOOL)userProvided;
-(void)setLyrics:(NSString *)arg1 ;
-(void)setUserProvided:(BOOL)arg1 ;
-(void)setHasUserProvided:(BOOL)arg1 ;
-(BOOL)hasUserProvided;
@end

