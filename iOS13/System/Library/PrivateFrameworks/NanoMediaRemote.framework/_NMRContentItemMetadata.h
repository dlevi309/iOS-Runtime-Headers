/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _NMRContentItemMetadata : PBCodable <NSCopying> {

	double _duration;
	NSString* _album;
	NSString* _artist;
	NSString* _title;
	SCD_Struct_NM8 _has;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasArtist; 
@property (nonatomic,retain) NSString * artist;              //@synthesize artist=_artist - In the implementation block
@property (nonatomic,readonly) BOOL hasAlbum; 
@property (nonatomic,retain) NSString * album;               //@synthesize album=_album - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) double duration;                //@synthesize duration=_duration - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(double)duration;
-(void)writeTo:(id)arg1 ;
-(NSString *)album;
-(NSString *)artist;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(BOOL)hasTitle;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setAlbum:(NSString *)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(BOOL)hasArtist;
-(BOOL)hasAlbum;
@end

