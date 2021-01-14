/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/

#import <BlastDoor/BlastDoor-Structs.h>
#import <BlastDoor/_BlastDoorLPSpecializationMetadata.h>

@class NSString, _BlastDoorLPImage, _BlastDoorLPArtworkMetadata, NSURL, NSArray;

@interface _BlastDoorLPiTunesMediaSongMetadata : _BlastDoorLPSpecializationMetadata {

	NSString* _storeFrontIdentifier;
	NSString* _storeIdentifier;
	NSString* _name;
	NSString* _artist;
	NSString* _album;
	NSString* _lyrics;
	_BlastDoorLPImage* _artwork;
	_BlastDoorLPArtworkMetadata* _artworkMetadata;
	NSURL* _previewURL;
	NSArray* _offers;

}

@property (nonatomic,copy) NSString * storeFrontIdentifier;                            //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                                 //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * artist;                                          //@synthesize artist=_artist - In the implementation block
@property (nonatomic,copy) NSString * album;                                           //@synthesize album=_album - In the implementation block
@property (nonatomic,copy) NSString * lyrics;                                          //@synthesize lyrics=_lyrics - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * artwork;                              //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,copy) _BlastDoorLPArtworkMetadata * artworkMetadata;              //@synthesize artworkMetadata=_artworkMetadata - In the implementation block
@property (nonatomic,copy) NSURL * previewURL;                                         //@synthesize previewURL=_previewURL - In the implementation block
@property (nonatomic,copy) NSArray * offers;                                           //@synthesize offers=_offers - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(NSString *)lyrics;
-(NSString *)storeFrontIdentifier;
-(NSString *)artist;
-(NSURL *)previewURL;
-(void)setArtwork:(_BlastDoorLPImage *)arg1 ;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(void)setPreviewURL:(NSURL *)arg1 ;
-(_BlastDoorLPArtworkMetadata *)artworkMetadata;
-(void)setArtworkMetadata:(_BlastDoorLPArtworkMetadata *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setOffers:(NSArray *)arg1 ;
-(_BlastDoorLPImage *)artwork;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(void)setAlbum:(NSString *)arg1 ;
-(NSString *)album;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)offers;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)storeIdentifier;
-(void)setLyrics:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

