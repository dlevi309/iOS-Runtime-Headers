/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelPerson.h>

@class MPModelGenre, NSDate;

@interface MPModelArtist : MPModelPerson

@property (assign,nonatomic) BOOL hasBiography; 
@property (assign,nonatomic) long long songCount; 
@property (assign,nonatomic) long long albumCount; 
@property (nonatomic,copy) MPModelGenre * genre; 
@property (nonatomic,copy) id artworkCatalogBlock; 
@property (nonatomic,copy) id editorialArtworkCatalogBlock; 
@property (nonatomic,copy) NSDate * libraryAddedDate; 
+(id)__genre_KEY;
+(id)__artworkCatalogBlock_KEY;
+(id)__libraryAddedDate_KEY;
+(id)kindWithAlbumKind:(id)arg1 ;
+(id)__hasBiography_KEY;
+(id)__editorialArtworkCatalogBlock_KEY;
+(id)__songCount_KEY;
+(id)__albumCount_KEY;
-(id)artworkCatalog;
-(id)editorialArtworkCatalog;
@end

