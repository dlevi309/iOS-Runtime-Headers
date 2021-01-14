/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/

#import <BlastDoor/BlastDoor-Structs.h>
#import <BlastDoor/_BlastDoorLPSpecializationMetadata.h>

@class NSString, _BlastDoorLPImage, _BlastDoorLPArtworkMetadata;

@interface _BlastDoorLPiTunesMediaTVEpisodeMetadata : _BlastDoorLPSpecializationMetadata {

	NSString* _storeFrontIdentifier;
	NSString* _storeIdentifier;
	NSString* _episodeName;
	NSString* _seasonName;
	NSString* _genre;
	_BlastDoorLPImage* _artwork;
	_BlastDoorLPArtworkMetadata* _artworkMetadata;

}

@property (nonatomic,copy) NSString * storeFrontIdentifier;                            //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                                 //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * episodeName;                                     //@synthesize episodeName=_episodeName - In the implementation block
@property (nonatomic,copy) NSString * seasonName;                                      //@synthesize seasonName=_seasonName - In the implementation block
@property (nonatomic,copy) NSString * genre;                                           //@synthesize genre=_genre - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * artwork;                              //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,copy) _BlastDoorLPArtworkMetadata * artworkMetadata;              //@synthesize artworkMetadata=_artworkMetadata - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(NSString *)genre;
-(NSString *)storeFrontIdentifier;
-(void)setArtwork:(_BlastDoorLPImage *)arg1 ;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(_BlastDoorLPArtworkMetadata *)artworkMetadata;
-(void)setArtworkMetadata:(_BlastDoorLPArtworkMetadata *)arg1 ;
-(NSString *)episodeName;
-(void)setEpisodeName:(NSString *)arg1 ;
-(NSString *)seasonName;
-(void)setSeasonName:(NSString *)arg1 ;
-(void)setGenre:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(_BlastDoorLPImage *)artwork;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)storeIdentifier;
-(BOOL)isEqual:(id)arg1 ;
@end

