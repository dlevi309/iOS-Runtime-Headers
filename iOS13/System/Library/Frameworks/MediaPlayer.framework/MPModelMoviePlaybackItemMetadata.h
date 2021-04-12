/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)contentType;
-(MPModelMovie *)movie;
-(void)setMovie:(MPModelMovie *)arg1 ;
-(id)mediaItem;
-(BOOL)isExplicitTrack;
-(long long)storeSubscriptionAdamID;
-(id)modelGenericObject;
-(BOOL)allowsInitiatingPlayWhileDownload;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(id)contentTitle;
-(double)expectedDuration;
-(long long)storeAdamID;
-(unsigned long long)storeSagaID;
-(id)localFileAsset;
-(id)playbackPosition;
-(id)storeAsset;
-(void)_invalidateModelObjectPlaybackItemMetadata;
@end

