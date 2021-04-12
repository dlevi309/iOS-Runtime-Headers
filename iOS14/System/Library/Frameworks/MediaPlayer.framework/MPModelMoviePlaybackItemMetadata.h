/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelSongPlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelMovie;

@interface MPModelMoviePlaybackItemMetadata : MPModelSongPlaybackItemMetadata {

	MPModelGenericObject* _modelGenericObject;
	MPModelMovie* _movie;

}

@property (nonatomic,retain) MPModelMovie * movie;              //@synthesize movie=_movie - In the implementation block
+(id)requiredProperties;
-(MPModelMovie *)movie;
-(unsigned long long)contentType;
-(long long)storeSubscriptionAdamID;
-(long long)storeAdamID;
-(id)mediaItem;
-(BOOL)isExplicitTrack;
-(id)modelGenericObject;
-(BOOL)allowsInitiatingPlayWhileDownload;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(id)contentTitle;
-(double)expectedDuration;
-(unsigned long long)storeSagaID;
-(id)localFileAsset;
-(id)playbackPosition;
-(id)storeAsset;
-(void)_invalidateModelObjectPlaybackItemMetadata;
-(unsigned long long)hash;
-(void)setMovie:(MPModelMovie *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

