/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelSongPlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelTVEpisode;

@interface MPModelTVEpisodePlaybackItemMetadata : MPModelSongPlaybackItemMetadata {

	MPModelGenericObject* _modelGenericObject;
	MPModelTVEpisode* _episode;

}

@property (nonatomic,retain) MPModelTVEpisode * episode;              //@synthesize episode=_episode - In the implementation block
+(id)requiredProperties;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)contentType;
-(id)mediaItem;
-(id)artistName;
-(BOOL)isExplicitTrack;
-(long long)storeSubscriptionAdamID;
-(id)modelGenericObject;
-(id)albumArtistName;
-(long long)albumStoreAdamID;
-(id)albumTitle;
-(BOOL)allowsInitiatingPlayWhileDownload;
-(long long)artistStoreAdamID;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(id)contentTitle;
-(double)expectedDuration;
-(long long)storeAdamID;
-(unsigned long long)storeSagaID;
-(id)localFileAsset;
-(id)playbackPosition;
-(id)storeAsset;
-(void)_invalidateModelObjectPlaybackItemMetadata;
-(void)setEpisode:(MPModelTVEpisode *)arg1 ;
-(MPModelTVEpisode *)episode;
@end

