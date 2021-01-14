/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSMutableArray, NSString;

@interface SUScriptMediaLibrary : SUScriptObject {

	NSMutableArray* _musicPlayers;

}

@property (readonly) NSString * itemPropertyAlbumArtist; 
@property (readonly) NSString * itemPropertyAlbumTitle; 
@property (readonly) NSString * itemPropertyArtist; 
@property (readonly) NSString * itemPropertyComposer; 
@property (readonly) NSString * itemPropertyDiscCount; 
@property (readonly) NSString * itemPropertyDiscNumber; 
@property (readonly) NSString * itemPropertyGenre; 
@property (readonly) NSString * itemPropertyIsCompilation; 
@property (readonly) NSString * itemPropertyIsHD; 
@property (readonly) NSString * itemPropertyIsRental; 
@property (readonly) NSString * itemPropertyLastPlayedDate; 
@property (readonly) NSString * itemPropertyLyrics; 
@property (readonly) NSString * itemPropertyMediaType; 
@property (readonly) NSString * itemPropertyPersistentID; 
@property (readonly) NSString * itemPropertyPlayCount; 
@property (readonly) NSString * itemPropertyPlaybackDuration; 
@property (readonly) NSString * itemPropertyPodcastTitle; 
@property (readonly) NSString * itemPropertyRating; 
@property (readonly) NSString * itemPropertySkipCount; 
@property (readonly) NSString * itemPropertyStoreID; 
@property (readonly) NSString * itemPropertyTitle; 
@property (readonly) NSString * itemPropertyTrackCount; 
@property (readonly) NSString * itemPropertyTrackNumber; 
@property (readonly) NSString * mediaTypeAny; 
@property (readonly) NSString * mediaTypeAnyAudio; 
@property (readonly) NSString * mediaTypeAnyVideo; 
@property (readonly) NSString * mediaTypeAudiobook; 
@property (readonly) NSString * mediaTypeMovie; 
@property (readonly) NSString * mediaTypeMusic; 
@property (readonly) NSString * mediaTypeMusicVideo; 
@property (readonly) NSString * mediaTypePodcast; 
@property (readonly) NSString * mediaTypeTVShow; 
@property (readonly) NSString * mediaTypeVideoPodcast; 
@property (readonly) NSString * playerTypeApplication; 
@property (readonly) NSString * playerTypeIPod; 
@property (readonly) NSString * queryPresetAlbums; 
@property (readonly) NSString * queryPresetArtists; 
@property (readonly) NSString * queryPresetAudiobooks; 
@property (readonly) NSString * queryPresetCompilations; 
@property (readonly) NSString * queryPresetComposers; 
@property (readonly) NSString * queryPresetGenres; 
@property (readonly) NSString * queryPresetMovies; 
@property (readonly) NSString * queryPresetMusicVideos; 
@property (readonly) NSString * queryPresetPlaylists; 
@property (readonly) NSString * queryPresetPodcasts; 
@property (readonly) NSString * queryPresetSongs; 
@property (readonly) NSString * queryPresetTVShows; 
@property (readonly) NSString * queryPresetVideoPodcasts; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)attributeKeys;
-(BOOL)_isRestricted;
-(id)_className;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(NSString *)queryPresetAlbums;
-(NSString *)queryPresetArtists;
-(NSString *)queryPresetSongs;
-(NSString *)queryPresetPlaylists;
-(NSString *)queryPresetPodcasts;
-(NSString *)queryPresetAudiobooks;
-(NSString *)queryPresetCompilations;
-(NSString *)queryPresetComposers;
-(NSString *)queryPresetGenres;
-(NSString *)queryPresetMovies;
-(NSString *)queryPresetMusicVideos;
-(NSString *)queryPresetTVShows;
-(NSString *)queryPresetVideoPodcasts;
-(void)_launchMusicAppAfterPlayback:(id)arg1 firstItem:(id)arg2 ;
-(void)_launchMusicApp;
-(id)containsAdamID:(id)arg1 ;
-(id)containsAdamIDs:(id)arg1 ;
-(void)getProperties:(id)arg1 ofAdamIDs:(id)arg2 withCompletionFunction:(id)arg3 ;
-(id)makeCollectionWithItems:(id)arg1 ;
-(id)makePickerWithMediaTypes:(id)arg1 ;
-(id)makeQueryWithPreset:(id)arg1 ;
-(id)musicPlayerForType:(id)arg1 ;
-(id)playSongsInCollectionWithAdamID:(id)arg1 firstItemID:(id)arg2 ;
-(id)playSongsWithAdamIDs:(id)arg1 ;
-(id)playVideoWithAdamID:(id)arg1 ;
-(NSString *)itemPropertyAlbumArtist;
-(NSString *)itemPropertyAlbumTitle;
-(NSString *)itemPropertyArtist;
-(NSString *)itemPropertyComposer;
-(NSString *)itemPropertyDiscCount;
-(NSString *)itemPropertyDiscNumber;
-(NSString *)itemPropertyGenre;
-(NSString *)itemPropertyIsCompilation;
-(NSString *)itemPropertyIsHD;
-(NSString *)itemPropertyIsRental;
-(NSString *)itemPropertyLastPlayedDate;
-(NSString *)itemPropertyLyrics;
-(NSString *)itemPropertyMediaType;
-(NSString *)itemPropertyPersistentID;
-(NSString *)itemPropertyPlayCount;
-(NSString *)itemPropertyPlaybackDuration;
-(NSString *)itemPropertyPodcastTitle;
-(NSString *)itemPropertyRating;
-(NSString *)itemPropertySkipCount;
-(NSString *)itemPropertyStoreID;
-(NSString *)itemPropertyTitle;
-(NSString *)itemPropertyTrackCount;
-(NSString *)itemPropertyTrackNumber;
-(NSString *)mediaTypeAny;
-(NSString *)mediaTypeAnyAudio;
-(NSString *)mediaTypeAnyVideo;
-(NSString *)mediaTypeAudiobook;
-(NSString *)mediaTypeMovie;
-(NSString *)mediaTypeMusic;
-(NSString *)mediaTypeMusicVideo;
-(NSString *)mediaTypePodcast;
-(NSString *)mediaTypeTVShow;
-(NSString *)mediaTypeVideoPodcast;
-(NSString *)playerTypeApplication;
-(NSString *)playerTypeIPod;
-(void)_connectNativeObject;
@end
