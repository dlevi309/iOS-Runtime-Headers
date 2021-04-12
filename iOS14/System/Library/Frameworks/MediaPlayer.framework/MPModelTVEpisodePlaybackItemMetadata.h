/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)albumArtistName;
-(unsigned long long)contentType;
-(id)artistName;
-(MPModelTVEpisode *)episode;
-(long long)storeSubscriptionAdamID;
-(long long)storeAdamID;
-(id)mediaItem;
-(BOOL)isExplicitTrack;
-(id)modelGenericObject;
-(long long)albumStoreAdamID;
-(id)albumTitle;
-(BOOL)allowsInitiatingPlayWhileDownload;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(id)contentTitle;
-(double)expectedDuration;
-(unsigned long long)storeSagaID;
-(id)localFileAsset;
-(id)playbackPosition;
-(id)storeAsset;
-(void)setEpisode:(MPModelTVEpisode *)arg1 ;
-(long long)artistStoreAdamID;
-(void)_invalidateModelObjectPlaybackItemMetadata;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

