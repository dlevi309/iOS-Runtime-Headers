/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, MPIdentifierSet, NSNumber, NSString, MPArtworkCatalog, NSData;

@interface NMRNowPlayingState : NSObject <NSCopying> {

	float _preferredPlaybackRate;

}

@property (nonatomic,readonly) NSDate * timestamp; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) float playbackRate; 
@property (nonatomic,readonly) float preferredPlaybackRate;                                                          //@synthesize preferredPlaybackRate=_preferredPlaybackRate - In the implementation block
@property (nonatomic,readonly) unsigned playbackState; 
@property (nonatomic,readonly) double elapsedTimeAtLastUpdate; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (nonatomic,readonly) double elapsedTime; 
@property (nonatomic,readonly) BOOL hasNowPlayingInfo; 
@property (nonatomic,readonly) BOOL hasNowPlayingItem; 
@property (nonatomic,readonly) BOOL hasUpNextQueue; 
@property (nonatomic,readonly) MPIdentifierSet * identifiers; 
@property (nonatomic,readonly) NSNumber * itemPersistentID; 
@property (nonatomic,readonly) NSNumber * itemCompanionPersistentID; 
@property (nonatomic,readonly) NSNumber * itemAlbumPersistentID; 
@property (nonatomic,readonly) NSNumber * storeAdamID; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * artist; 
@property (nonatomic,readonly) NSString * album; 
@property (getter=isExplicitTrack,nonatomic,readonly) BOOL explicitTrack; 
@property (nonatomic,readonly) MPArtworkCatalog * artworkCatalog; 
@property (nonatomic,readonly) NSString * collectionTitle; 
@property (nonatomic,readonly) NSString * radioStationName; 
@property (nonatomic,readonly) NSNumber * radioStationIdentifier; 
@property (nonatomic,readonly) NSString * radioStationHash; 
@property (getter=isAdvertisement,nonatomic,readonly) BOOL advertisement; 
@property (getter=isAlwaysLive,nonatomic,readonly) BOOL alwaysLive; 
@property (getter=isPlayingRadio,nonatomic,readonly) BOOL playingRadio; 
@property (getter=isFirstPartyApp,nonatomic,readonly) BOOL firstPartyApp; 
@property (nonatomic,readonly) NSString * applicationDisplayName; 
@property (nonatomic,readonly) NSString * applicationBundleIdentifier; 
@property (nonatomic,readonly) NSData * applicationIconImageData; 
@property (getter=isRepeatModeCommandSupported,nonatomic,readonly) BOOL repeatModeCommandSupported; 
@property (nonatomic,readonly) int repeatMode; 
@property (getter=isShuffleModeCommandSupported,nonatomic,readonly) BOOL shuffleModeCommandSupported; 
@property (nonatomic,readonly) int shuffleMode; 
@property (getter=isPlaybackRateCommandSupported,nonatomic,readonly) BOOL playbackRateCommandSupported; 
@property (getter=isLikeCommandSupported,nonatomic,readonly) BOOL likeCommandSupported; 
@property (getter=isLikeCommandEnabled,nonatomic,readonly) BOOL likeCommandEnabled; 
@property (getter=isLikedActive,nonatomic,readonly) BOOL likedActive; 
@property (nonatomic,readonly) NSString * localizedLikeTitle; 
@property (nonatomic,readonly) long long likeCommandPresentationStyle; 
@property (getter=isBanCommandSupported,nonatomic,readonly) BOOL banCommandSupported; 
@property (getter=isBanCommandEnabled,nonatomic,readonly) BOOL banCommandEnabled; 
@property (getter=isBannedActive,nonatomic,readonly) BOOL bannedActive; 
@property (nonatomic,readonly) NSString * localizedBanTitle; 
@property (nonatomic,readonly) long long banCommandPresentationStyle; 
@property (getter=isBookmarkCommandSupported,nonatomic,readonly) BOOL bookmarkCommandSupported; 
@property (getter=isBookmarkCommandEnabled,nonatomic,readonly) BOOL bookmarkCommandEnabled; 
@property (getter=isBookmarkedActive,nonatomic,readonly) BOOL bookmarkedActive; 
@property (nonatomic,readonly) NSString * localizedBookmarkTitle; 
@property (getter=isNextTrackCommandEnabled,nonatomic,readonly) BOOL nextTrackCommandEnabled; 
@property (getter=isPreviousTrackCommandEnabled,nonatomic,readonly) BOOL previousTrackCommandEnabled; 
@property (getter=isSkipForwardCommandEnabled,nonatomic,readonly) BOOL skipForwardCommandEnabled; 
@property (getter=isSkipBackwardCommandEnabled,nonatomic,readonly) BOOL skipBackwardCommandEnabled; 
@property (nonatomic,readonly) double fastForwardTimeInterval; 
@property (nonatomic,readonly) double rewindTimeInterval; 
+(id)emptyNowPlayingState;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)timestamp;
-(NSString *)title;
-(double)duration;
-(NSString *)album;
-(NSString *)artist;
-(MPIdentifierSet *)identifiers;
-(double)elapsedTime;
-(BOOL)isPlaying;
-(NSString *)applicationBundleIdentifier;
-(float)playbackRate;
-(BOOL)hasNowPlayingInfo;
-(unsigned)playbackState;
-(int)repeatMode;
-(BOOL)isExplicitTrack;
-(BOOL)isAlwaysLive;
-(NSNumber *)storeAdamID;
-(MPArtworkCatalog *)artworkCatalog;
-(int)shuffleMode;
-(NSString *)radioStationName;
-(NSString *)radioStationHash;
-(NSNumber *)radioStationIdentifier;
-(BOOL)isAdvertisement;
-(float)preferredPlaybackRate;
-(NSNumber *)itemPersistentID;
-(NSString *)collectionTitle;
-(NSString *)applicationDisplayName;
-(NSNumber *)itemCompanionPersistentID;
-(NSNumber *)itemAlbumPersistentID;
-(double)elapsedTimeAtLastUpdate;
-(NSData *)applicationIconImageData;
-(BOOL)isRepeatModeCommandSupported;
-(BOOL)isShuffleModeCommandSupported;
-(BOOL)isPlaybackRateCommandSupported;
-(BOOL)isLikeCommandSupported;
-(BOOL)isLikeCommandEnabled;
-(BOOL)isLikedActive;
-(NSString *)localizedLikeTitle;
-(long long)likeCommandPresentationStyle;
-(BOOL)isBanCommandSupported;
-(BOOL)isBanCommandEnabled;
-(BOOL)isBannedActive;
-(NSString *)localizedBanTitle;
-(long long)banCommandPresentationStyle;
-(BOOL)isBookmarkCommandSupported;
-(BOOL)isBookmarkCommandEnabled;
-(BOOL)isBookmarkedActive;
-(NSString *)localizedBookmarkTitle;
-(BOOL)isNextTrackCommandEnabled;
-(BOOL)isPreviousTrackCommandEnabled;
-(BOOL)isSkipForwardCommandEnabled;
-(BOOL)isSkipBackwardCommandEnabled;
-(double)fastForwardTimeInterval;
-(double)rewindTimeInterval;
-(BOOL)hasNowPlayingItem;
-(BOOL)hasUpNextQueue;
-(BOOL)isFirstPartyApp;
-(unsigned long long)compareWithNowPlayingState:(id)arg1 ;
-(BOOL)isPlayingRadio;
@end

