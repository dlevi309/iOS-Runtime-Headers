/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MIPAlbum, MIPArtist, MIPGenre, MIPMediaItem, MIPMultiverseIdentifier, MIPPlaylist, MIPSeries;

@interface MSPMediaSyncOperation : PBCodable <NSCopying> {

	MIPAlbum* _album;
	MIPArtist* _artist;
	MIPGenre* _genre;
	MIPMediaItem* _mediaItem;
	MIPMultiverseIdentifier* _multiverseId;
	int _operationType;
	MIPPlaylist* _playlist;
	MIPSeries* _series;
	SCD_Struct_MI3 _has;

}

@property (assign,nonatomic) BOOL hasOperationType; 
@property (assign,nonatomic) int operationType;                                   //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,readonly) BOOL hasMultiverseId; 
@property (nonatomic,retain) MIPMultiverseIdentifier * multiverseId;              //@synthesize multiverseId=_multiverseId - In the implementation block
@property (nonatomic,readonly) BOOL hasArtist; 
@property (nonatomic,retain) MIPArtist * artist;                                  //@synthesize artist=_artist - In the implementation block
@property (nonatomic,readonly) BOOL hasAlbum; 
@property (nonatomic,retain) MIPAlbum * album;                                    //@synthesize album=_album - In the implementation block
@property (nonatomic,readonly) BOOL hasGenre; 
@property (nonatomic,retain) MIPGenre * genre;                                    //@synthesize genre=_genre - In the implementation block
@property (nonatomic,readonly) BOOL hasSeries; 
@property (nonatomic,retain) MIPSeries * series;                                  //@synthesize series=_series - In the implementation block
@property (nonatomic,readonly) BOOL hasMediaItem; 
@property (nonatomic,retain) MIPMediaItem * mediaItem;                            //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaylist; 
@property (nonatomic,retain) MIPPlaylist * playlist;                              //@synthesize playlist=_playlist - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)operationType;
-(void)setOperationType:(int)arg1 ;
-(MIPGenre *)genre;
-(void)writeTo:(id)arg1 ;
-(MIPAlbum *)album;
-(MIPArtist *)artist;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(MIPMediaItem *)mediaItem;
-(void)setMediaItem:(MIPMediaItem *)arg1 ;
-(void)setAlbum:(MIPAlbum *)arg1 ;
-(void)setArtist:(MIPArtist *)arg1 ;
-(BOOL)hasArtist;
-(void)setGenre:(MIPGenre *)arg1 ;
-(MIPPlaylist *)playlist;
-(void)setPlaylist:(MIPPlaylist *)arg1 ;
-(BOOL)hasAlbum;
-(BOOL)hasGenre;
-(void)setSeries:(MIPSeries *)arg1 ;
-(BOOL)hasSeries;
-(MIPSeries *)series;
-(MIPMultiverseIdentifier *)multiverseId;
-(void)setMultiverseId:(MIPMultiverseIdentifier *)arg1 ;
-(void)setHasOperationType:(BOOL)arg1 ;
-(BOOL)hasOperationType;
-(id)operationTypeAsString:(int)arg1 ;
-(int)StringAsOperationType:(id)arg1 ;
-(BOOL)hasMultiverseId;
-(BOOL)hasMediaItem;
-(BOOL)hasPlaylist;
@end

