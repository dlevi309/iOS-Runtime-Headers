/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelObjectPlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelSong;

@interface MPModelSongPlaybackItemMetadata : MPModelObjectPlaybackItemMetadata {

	MPModelGenericObject* _modelGenericObject;
	MPModelSong* _song;

}

@property (nonatomic,retain) MPModelSong * song;              //@synthesize song=_song - In the implementation block
+(id)requiredProperties;
-(id)albumArtistName;
-(MPModelSong *)song;
-(id)homeSharingAsset;
-(float)volumeNormalization;
-(id)composerName;
-(unsigned long long)contentType;
-(id)artistName;
-(long long)storeSubscriptionAdamID;
-(long long)storeAdamID;
-(id)mediaItem;
-(BOOL)isExplicitTrack;
-(id)modelGenericObject;
-(BOOL)showComposer;
-(void)setSong:(MPModelSong *)arg1 ;
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
-(long long)artistStoreAdamID;
-(void)_invalidateModelObjectPlaybackItemMetadata;
-(unsigned long long)hash;
-(id)copyrightText;
-(BOOL)isEqual:(id)arg1 ;
@end

