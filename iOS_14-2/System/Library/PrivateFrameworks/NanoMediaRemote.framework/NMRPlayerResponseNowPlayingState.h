/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)radioStationName;
-(id)identifiers;
-(float)playbackRate;
-(id)artist;
-(int)queueEndAction;
-(unsigned)playbackState;
-(id)timestamp;
-(BOOL)isAdvertisement;
-(BOOL)isAutoPlay;
-(BOOL)isAlwaysLive;
-(id)radioStationIdentifier;
-(int)repeatMode;
-(id)collectionTitle;
-(id)storeAdamID;
-(id)radioStationHash;
-(BOOL)isExplicitTrack;
-(id)album;
-(id)artworkCatalog;
-(double)duration;
-(id)applicationDisplayName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)shuffleMode;
-(id)applicationBundleIdentifier;
-(id)title;
-(id)itemPersistentID;
-(float)preferredPlaybackRate;
-(id)itemCompanionPersistentID;
-(id)itemAlbumPersistentID;
-(double)elapsedTimeAtLastUpdate;
-(BOOL)isRepeatModeCommandSupported;
-(BOOL)isShuffleModeCommandSupported;
-(BOOL)isQueueEndActionCommandSupported;
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
-(BOOL)isQueueEndActionSupported:(int)arg1 ;
-(id)initWithPlayerResponse:(id)arg1 ;
-(id)_nowPlayingSong;
-(id)_nowPlayingRadioStation;
-(MPCPlayerResponse *)playerResponse;
@end

