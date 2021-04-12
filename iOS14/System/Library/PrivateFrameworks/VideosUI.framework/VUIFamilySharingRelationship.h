/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSString, _TVContentRating, NSDate;

@interface VUIFamilySharingRelationship : NSObject {

	NSString* _identifier;
	_TVContentRating* _contentRating;
	NSString* _standardDescription;
	NSString* _artworkURL;
	NSDate* _releaseDate;
	NSString* _genreTitle;

}

@property (nonatomic,retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) _TVContentRating * contentRating;              //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,retain) NSString * standardDescription;                //@synthesize standardDescription=_standardDescription - In the implementation block
@property (nonatomic,retain) NSString * artworkURL;                         //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,retain) NSDate * releaseDate;                          //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,retain) NSString * genreTitle;                         //@synthesize genreTitle=_genreTitle - In the implementation block
-(void)setArtworkURL:(NSString *)arg1 ;
-(NSDate *)releaseDate;
-(NSString *)artworkURL;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(NSString *)genreTitle;
-(void)setContentRating:(_TVContentRating *)arg1 ;
-(_TVContentRating *)contentRating;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setStandardDescription:(NSString *)arg1 ;
-(void)setGenreTitle:(NSString *)arg1 ;
-(NSString *)standardDescription;
@end

