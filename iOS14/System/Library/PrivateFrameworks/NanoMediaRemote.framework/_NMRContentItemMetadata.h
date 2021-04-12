/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _isAutoPlayItem;
	SCD_Struct_NM1 _has;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasArtist; 
@property (nonatomic,retain) NSString * artist;                   //@synthesize artist=_artist - In the implementation block
@property (nonatomic,readonly) BOOL hasAlbum; 
@property (nonatomic,retain) NSString * album;                    //@synthesize album=_album - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) double duration;                     //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasIsAutoPlayItem; 
@property (assign,nonatomic) BOOL isAutoPlayItem;                 //@synthesize isAutoPlayItem=_isAutoPlayItem - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(double)arg1 ;
-(NSString *)artist;
-(BOOL)hasTitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasArtist;
-(BOOL)hasAlbum;
-(void)setAlbum:(NSString *)arg1 ;
-(NSString *)album;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIsAutoPlayItem:(BOOL)arg1 ;
-(void)setHasIsAutoPlayItem:(BOOL)arg1 ;
-(BOOL)hasIsAutoPlayItem;
-(BOOL)isAutoPlayItem;
@end

