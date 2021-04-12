/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIMediaItem.h>

@class NSString, VUIExtrasInfo, VUIFamilySharingRelationships, VUIVideosPlayable, VUIFamilySharingEntity, VUIFamilySharingMediaItemAssetController;

@interface VUIFamilySharingMediaItem : VUIMediaItem {

	NSString* _artworkURL;
	NSString* _previewArtworkURL;
	VUIExtrasInfo* _iTunesExtrasInfo;
	VUIFamilySharingRelationships* _relationships;
	VUIVideosPlayable* _videosPlayable;
	NSString* _buyParams;
	NSString* _personalizedBuyParams;
	VUIFamilySharingEntity* _entity;
	VUIFamilySharingMediaItemAssetController* _assetController;

}

@property (nonatomic,retain) VUIFamilySharingEntity * entity;                                         //@synthesize entity=_entity - In the implementation block
@property (nonatomic,retain) VUIFamilySharingMediaItemAssetController * assetController;              //@synthesize assetController=_assetController - In the implementation block
@property (nonatomic,retain) NSString * artworkURL;                                                   //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,retain) NSString * previewArtworkURL;                                            //@synthesize previewArtworkURL=_previewArtworkURL - In the implementation block
@property (nonatomic,retain) VUIExtrasInfo * iTunesExtrasInfo;                                        //@synthesize iTunesExtrasInfo=_iTunesExtrasInfo - In the implementation block
@property (nonatomic,retain) VUIFamilySharingRelationships * relationships;                           //@synthesize relationships=_relationships - In the implementation block
@property (nonatomic,retain) VUIVideosPlayable * videosPlayable;                                      //@synthesize videosPlayable=_videosPlayable - In the implementation block
@property (nonatomic,retain) NSString * buyParams;                                                    //@synthesize buyParams=_buyParams - In the implementation block
@property (nonatomic,retain) NSString * personalizedBuyParams;                                        //@synthesize personalizedBuyParams=_personalizedBuyParams - In the implementation block
-(id)title;
-(id)duration;
-(id)contentDescription;
-(void)setEntity:(VUIFamilySharingEntity *)arg1 ;
-(VUIFamilySharingEntity *)entity;
-(NSString *)buyParams;
-(void)setBuyParams:(NSString *)arg1 ;
-(id)storeID;
-(VUIFamilySharingRelationships *)relationships;
-(id)showTitle;
-(id)releaseDate;
-(id)seasonNumber;
-(id)genreTitle;
-(NSString *)artworkURL;
-(void)setArtworkURL:(NSString *)arg1 ;
-(id)episodeNumber;
-(id)contentRating;
-(id)releaseYear;
-(id)extrasURL;
-(void)setRelationships:(VUIFamilySharingRelationships *)arg1 ;
-(void)setPreviewArtworkURL:(NSString *)arg1 ;
-(id)initWithAMSEntity:(id)arg1 requestedProperties:(id)arg2 ;
-(VUIFamilySharingMediaItemAssetController *)assetController;
-(void)setAssetController:(VUIFamilySharingMediaItemAssetController *)arg1 ;
-(void)setPersonalizedBuyParams:(NSString *)arg1 ;
-(NSString *)personalizedBuyParams;
-(id)_itunesExtrasDictionary;
-(NSString *)previewArtworkURL;
-(id)_bestRedownloadOffer;
-(id)_bestOffer;
-(VUIExtrasInfo *)iTunesExtrasInfo;
-(VUIVideosPlayable *)videosPlayable;
-(id)showIdentifier;
-(id)seasonIdentifier;
-(void)setITunesExtrasInfo:(VUIExtrasInfo *)arg1 ;
-(void)setVideosPlayable:(VUIVideosPlayable *)arg1 ;
@end

