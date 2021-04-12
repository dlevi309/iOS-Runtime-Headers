/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)__hasBiography_KEY;
+(id)__songCount_KEY;
+(id)__albumCount_KEY;
+(id)__editorialArtworkCatalogBlock_KEY;
+(id)kindWithAlbumKind:(id)arg1 ;
+(id)__genre_KEY;
+(id)__libraryAddedDate_KEY;
+(id)__artworkCatalogBlock_KEY;
-(id)editorialArtworkCatalog;
-(id)artworkCatalog;
@end

