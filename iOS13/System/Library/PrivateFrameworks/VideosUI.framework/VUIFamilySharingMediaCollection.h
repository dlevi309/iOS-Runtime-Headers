/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIMediaCollection.h>

@class NSString, NSArray, VUIFamilySharingEntity;

@interface VUIFamilySharingMediaCollection : VUIMediaCollection {

	NSString* _artworkURL;
	NSString* _amsShowIdentifier;
	NSString* _amsSeasonIdentifier;
	NSArray* _seasonNumbers;
	VUIFamilySharingEntity* _entity;

}

@property (nonatomic,retain) VUIFamilySharingEntity * entity;              //@synthesize entity=_entity - In the implementation block
@property (nonatomic,retain) NSString * artworkURL;                        //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,retain) NSString * amsShowIdentifier;                 //@synthesize amsShowIdentifier=_amsShowIdentifier - In the implementation block
@property (nonatomic,retain) NSString * amsSeasonIdentifier;               //@synthesize amsSeasonIdentifier=_amsSeasonIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * seasonNumbers;                      //@synthesize seasonNumbers=_seasonNumbers - In the implementation block
-(id)title;
-(id)duration;
-(id)contentDescription;
-(void)setEntity:(VUIFamilySharingEntity *)arg1 ;
-(VUIFamilySharingEntity *)entity;
-(id)showTitle;
-(id)releaseDate;
-(id)seasonNumber;
-(id)genreTitle;
-(NSString *)artworkURL;
-(void)setArtworkURL:(NSString *)arg1 ;
-(id)contentRating;
-(id)releaseYear;
-(NSArray *)seasonNumbers;
-(id)seasonCount;
-(void)setSeasonNumbers:(NSArray *)arg1 ;
-(id)initWithAMSEntity:(id)arg1 requestedProperties:(id)arg2 mediaEntityType:(id)arg3 ;
-(NSString *)amsSeasonIdentifier;
-(NSString *)amsShowIdentifier;
-(void)setAmsShowIdentifier:(NSString *)arg1 ;
-(void)setAmsSeasonIdentifier:(NSString *)arg1 ;
@end

