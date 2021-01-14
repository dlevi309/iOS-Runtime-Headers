/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)seasonNumber;
-(void)setArtworkURL:(NSString *)arg1 ;
-(void)setEntity:(VUIFamilySharingEntity *)arg1 ;
-(id)releaseDate;
-(NSString *)artworkURL;
-(VUIFamilySharingEntity *)entity;
-(id)releaseYear;
-(id)showTitle;
-(id)genreTitle;
-(id)contentRating;
-(NSArray *)seasonNumbers;
-(id)duration;
-(id)contentDescription;
-(id)title;
-(id)seasonCount;
-(void)setSeasonNumbers:(NSArray *)arg1 ;
-(id)initWithAMSEntity:(id)arg1 requestedProperties:(id)arg2 mediaEntityType:(id)arg3 ;
-(NSString *)amsSeasonIdentifier;
-(NSString *)amsShowIdentifier;
-(void)setAmsShowIdentifier:(NSString *)arg1 ;
-(void)setAmsSeasonIdentifier:(NSString *)arg1 ;
@end

