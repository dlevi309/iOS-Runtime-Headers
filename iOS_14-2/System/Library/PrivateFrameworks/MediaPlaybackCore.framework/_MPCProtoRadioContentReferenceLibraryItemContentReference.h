/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _MPCProtoRadioContentReferenceLibraryItemContentReference : PBCodable <NSCopying> {

	long long _cloudID;
	double _duration;
	double _fileSize;
	long long _storeAdamID;
	NSString* _albumArtistName;
	int _albumDiscCount;
	NSString* _albumName;
	int _albumTrackCount;
	NSString* _artistName;
	NSString* _composerName;
	int _contentType;
	NSString* _copyrightText;
	int _discNumber;
	NSString* _genreName;
	NSString* _title;
	int _trackNumber;
	int _year;
	BOOL _isCompilation;
	SCD_Struct_MP10 _has;

}

@property (nonatomic,readonly) BOOL hasAlbumArtistName; 
@property (nonatomic,retain) NSString * albumArtistName;              //@synthesize albumArtistName=_albumArtistName - In the implementation block
@property (nonatomic,readonly) BOOL hasAlbumName; 
@property (nonatomic,retain) NSString * albumName;                    //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,readonly) BOOL hasArtistName; 
@property (nonatomic,retain) NSString * artistName;                   //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,readonly) BOOL hasComposerName; 
@property (nonatomic,retain) NSString * composerName;                 //@synthesize composerName=_composerName - In the implementation block
@property (assign,nonatomic) BOOL hasContentType; 
@property (assign,nonatomic) int contentType;                         //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) BOOL hasCopyrightText; 
@property (nonatomic,retain) NSString * copyrightText;                //@synthesize copyrightText=_copyrightText - In the implementation block
@property (assign,nonatomic) BOOL hasAlbumDiscCount; 
@property (assign,nonatomic) int albumDiscCount;                      //@synthesize albumDiscCount=_albumDiscCount - In the implementation block
@property (assign,nonatomic) BOOL hasDiscNumber; 
@property (assign,nonatomic) int discNumber;                          //@synthesize discNumber=_discNumber - In the implementation block
@property (assign,nonatomic) BOOL hasFileSize; 
@property (assign,nonatomic) double fileSize;                         //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,readonly) BOOL hasGenreName; 
@property (nonatomic,retain) NSString * genreName;                    //@synthesize genreName=_genreName - In the implementation block
@property (assign,nonatomic) BOOL hasIsCompilation; 
@property (assign,nonatomic) BOOL isCompilation;                      //@synthesize isCompilation=_isCompilation - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) double duration;                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL hasStoreAdamID; 
@property (assign,nonatomic) long long storeAdamID;                   //@synthesize storeAdamID=_storeAdamID - In the implementation block
@property (assign,nonatomic) BOOL hasCloudID; 
@property (assign,nonatomic) long long cloudID;                       //@synthesize cloudID=_cloudID - In the implementation block
@property (assign,nonatomic) BOOL hasAlbumTrackCount; 
@property (assign,nonatomic) int albumTrackCount;                     //@synthesize albumTrackCount=_albumTrackCount - In the implementation block
@property (assign,nonatomic) BOOL hasTrackNumber; 
@property (assign,nonatomic) int trackNumber;                         //@synthesize trackNumber=_trackNumber - In the implementation block
@property (assign,nonatomic) BOOL hasYear; 
@property (assign,nonatomic) int year;                                //@synthesize year=_year - In the implementation block
-(id)dictionaryRepresentation;
-(void)setYear:(int)arg1 ;
-(NSString *)albumArtistName;
-(int)year;
-(void)setAlbumName:(NSString *)arg1 ;
-(void)setGenreName:(NSString *)arg1 ;
-(int)trackNumber;
-(NSString *)albumName;
-(void)setDiscNumber:(int)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setComposerName:(NSString *)arg1 ;
-(BOOL)hasTitle;
-(void)setTrackNumber:(int)arg1 ;
-(NSString *)composerName;
-(void)setArtistName:(NSString *)arg1 ;
-(int)contentType;
-(double)fileSize;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)hasAlbumName;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)artistName;
-(void)setHasTrackNumber:(BOOL)arg1 ;
-(BOOL)hasTrackNumber;
-(long long)storeAdamID;
-(id)description;
-(void)setStoreAdamID:(long long)arg1 ;
-(int)albumTrackCount;
-(int)discNumber;
-(BOOL)isCompilation;
-(BOOL)hasDiscNumber;
-(void)setAlbumArtistName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasYear;
-(void)setFileSize:(double)arg1 ;
-(void)setContentType:(int)arg1 ;
-(void)setHasDiscNumber:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)genreName;
-(void)writeTo:(id)arg1 ;
-(void)setCopyrightText:(NSString *)arg1 ;
-(double)duration;
-(void)setCloudID:(long long)arg1 ;
-(void)setHasYear:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasContentType:(BOOL)arg1 ;
-(BOOL)hasContentType;
-(NSString *)copyrightText;
-(long long)cloudID;
-(BOOL)hasArtistName;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasFileSize;
-(void)setHasFileSize:(BOOL)arg1 ;
-(void)setHasStoreAdamID:(BOOL)arg1 ;
-(BOOL)hasStoreAdamID;
-(void)setHasCloudID:(BOOL)arg1 ;
-(BOOL)hasCloudID;
-(BOOL)hasAlbumArtistName;
-(BOOL)hasComposerName;
-(BOOL)hasCopyrightText;
-(void)setAlbumDiscCount:(int)arg1 ;
-(void)setHasAlbumDiscCount:(BOOL)arg1 ;
-(BOOL)hasAlbumDiscCount;
-(BOOL)hasGenreName;
-(void)setIsCompilation:(BOOL)arg1 ;
-(void)setHasIsCompilation:(BOOL)arg1 ;
-(BOOL)hasIsCompilation;
-(void)setAlbumTrackCount:(int)arg1 ;
-(void)setHasAlbumTrackCount:(BOOL)arg1 ;
-(BOOL)hasAlbumTrackCount;
-(int)albumDiscCount;
@end

