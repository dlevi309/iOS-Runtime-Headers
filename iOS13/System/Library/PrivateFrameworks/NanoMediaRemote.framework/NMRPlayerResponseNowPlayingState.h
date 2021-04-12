/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <NanoMediaRemote/NMRNowPlayingState.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPCPlayerResponse;

@interface NMRPlayerResponseNowPlayingState : NMRNowPlayingState <NSCopying> {

	MPCPlayerResponse* _playerResponse;

}

@property (nonatomic,readonly) MPCPlayerResponse * playerResponse;              //@synthesize playerResponse=_playerResponse - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)timestamp;
-(id)title;
-(double)duration;
-(id)album;
-(id)artist;
-(id)identifiers;
-(id)applicationBundleIdentifier;
-(float)playbackRate;
-(unsigned)playbackState;
-(int)repeatMode;
-(BOOL)isExplicitTrack;
-(BOOL)isAlwaysLive;
-(id)storeAdamID;
-(id)artworkCatalog;
-(int)shuffleMode;
-(id)radioStationName;
-(id)radioStationHash;
-(id)radioStationIdentifier;
-(BOOL)isAdvertisement;
-(float)preferredPlaybackRate;
-(id)itemPersistentID;
-(id)collectionTitle;
-(id)applicationDisplayName;
-(id)itemCompanionPersistentID;
-(id)itemAlbumPersistentID;
-(double)elapsedTimeAtLastUpdate;
-(BOOL)isRepeatModeCommandSupported;
-(BOOL)isShuffleModeCommandSupported;
-(BOOL)isPlaybackRateCommandSupported;
-(BOOL)isLikeCommandSupported;
-(BOOL)isLikeCommandEnabled;
-(BOOL)isLikedActive;
-(id)localizedLikeTitle;
-(long long)likeCommandPresentationStyle;
-(BOOL)isBanCommandSupported;
-(BOOL)isBanCommandEnabled;
-(BOOL)isBannedActive;
-(id)localizedBanTitle;
-(long long)banCommandPresentationStyle;
-(BOOL)isBookmarkCommandSupported;
-(BOOL)isBookmarkCommandEnabled;
-(BOOL)isBookmarkedActive;
-(id)localizedBookmarkTitle;
-(BOOL)isNextTrackCommandEnabled;
-(BOOL)isPreviousTrackCommandEnabled;
-(BOOL)isSkipForwardCommandEnabled;
-(BOOL)isSkipBackwardCommandEnabled;
-(double)fastForwardTimeInterval;
-(double)rewindTimeInterval;
-(BOOL)hasNowPlayingItem;
-(BOOL)hasUpNextQueue;
-(id)initWithPlayerResponse:(id)arg1 ;
-(id)_nowPlayingSong;
-(id)_nowPlayingRadioStation;
-(MPCPlayerResponse *)playerResponse;
@end

