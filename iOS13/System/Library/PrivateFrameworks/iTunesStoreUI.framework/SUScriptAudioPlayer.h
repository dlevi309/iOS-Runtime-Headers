/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUPlayerStatus, NSURL, NSString;

@interface SUScriptAudioPlayer : SUScriptObject {

	SUPlayerStatus* _playerStatus;
	NSURL* _url;
	NSURL* _keyUrl;
	NSURL* _certificateUrl;

}

@property (readonly) double currentTime; 
@property (readonly) double duration; 
@property (readonly) long long state; 
@property (readonly) NSString * URL; 
@property (readonly) NSString * keyURL; 
@property (readonly) NSString * certificateURL; 
@property (readonly) NSString * nowPlayingKeyAlbumTitle; 
@property (readonly) NSString * nowPlayingKeyAlbumTrackCount; 
@property (readonly) NSString * nowPlayingKeyAlbumTrackNumber; 
@property (readonly) NSString * nowPlayingKeyArtist; 
@property (readonly) NSString * nowPlayingKeyArtwork; 
@property (readonly) NSString * nowPlayingKeyComposer; 
@property (readonly) NSString * nowPlayingKeyDiscCount; 
@property (readonly) NSString * nowPlayingKeyDiscNumber; 
@property (readonly) NSString * nowPlayingKeyGenre; 
@property (readonly) NSString * nowPlayingKeyPersistentID; 
@property (readonly) NSString * nowPlayingKeyPlaybackDuration; 
@property (readonly) NSString * nowPlayingKeyTitle; 
@property (readonly) long long playerStateActive; 
@property (readonly) long long playerStateBuffering; 
@property (readonly) long long playerStateFailed; 
@property (readonly) long long playerStateFinished; 
@property (readonly) long long playerStatePaused; 
@property (readonly) long long playerStateUnplayed; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(void)pause;
-(void)stop;
-(long long)state;
-(NSString *)URL;
-(double)duration;
-(id)_className;
-(void)play;
-(double)currentTime;
-(id)attributeKeys;
-(NSString *)certificateURL;
-(id)scriptAttributeKeys;
-(NSString *)keyURL;
-(void)setValue:(id)arg1 forNowPlayingKey:(id)arg2 ;
-(void)_audioPlayerStateChangeNotification:(id)arg1 ;
-(id)initWithURL:(id)arg1 keyURL:(id)arg2 certificateURL:(id)arg3 ;
-(NSString *)nowPlayingKeyAlbumTitle;
-(NSString *)nowPlayingKeyAlbumTrackCount;
-(NSString *)nowPlayingKeyAlbumTrackNumber;
-(NSString *)nowPlayingKeyArtist;
-(NSString *)nowPlayingKeyArtwork;
-(NSString *)nowPlayingKeyComposer;
-(NSString *)nowPlayingKeyDiscCount;
-(NSString *)nowPlayingKeyDiscNumber;
-(NSString *)nowPlayingKeyGenre;
-(NSString *)nowPlayingKeyPersistentID;
-(NSString *)nowPlayingKeyPlaybackDuration;
-(NSString *)nowPlayingKeyTitle;
-(long long)playerStateActive;
-(long long)playerStateBuffering;
-(long long)playerStateFailed;
-(long long)playerStateFinished;
-(long long)playerStatePaused;
-(long long)playerStateUnplayed;
@end

