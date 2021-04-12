/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptMediaItem, NSNumber;

@interface SUScriptMusicPlayerController : SUScriptObject {

	NSString* _playerType;

}

@property (readonly) double currentPlaybackTime; 
@property (readonly) SUScriptMediaItem * nowPlayingItem; 
@property (readonly) NSString * playbackState; 
@property (readonly) NSString * playerType; 
@property (copy) NSString * repeatMode; 
@property (copy) NSString * shuffleMode; 
@property (retain) NSNumber * volume; 
@property (readonly) NSString * playbackStateInterrupted; 
@property (readonly) NSString * playbackStatePaused; 
@property (readonly) NSString * playbackStatePlaying; 
@property (readonly) NSString * playbackStateSeekingBackward; 
@property (readonly) NSString * playbackStateSeekingForward; 
@property (readonly) NSString * playbackStateStopped; 
@property (readonly) NSString * repeatModeAll; 
@property (readonly) NSString * repeatModeDefault; 
@property (readonly) NSString * repeatModeNone; 
@property (readonly) NSString * repeatModeOne; 
@property (readonly) NSString * shuffleModeAlbums; 
@property (readonly) NSString * shuffleModeDefault; 
@property (readonly) NSString * shuffleModeOff; 
@property (readonly) NSString * shuffleModeSongs; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)scriptPlaybackStateForNativePlaybackState:(long long)arg1 ;
-(void)dealloc;
-(void)pause;
-(void)stop;
-(id)_className;
-(void)play;
-(NSNumber *)volume;
-(void)setVolume:(NSNumber *)arg1 ;
-(id)attributeKeys;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(double)currentPlaybackTime;
-(NSString *)playbackState;
-(NSString *)repeatMode;
-(void)setRepeatMode:(NSString *)arg1 ;
-(void)skipToNextItem;
-(void)skipToBeginning;
-(void)skipToPreviousItem;
-(NSString *)shuffleMode;
-(void)setShuffleMode:(NSString *)arg1 ;
-(SUScriptMediaItem *)nowPlayingItem;
-(void)setQueueWithQuery:(id)arg1 ;
-(void)setQueueWithItemCollection:(id)arg1 ;
-(NSString *)playerType;
-(id)scriptAttributeKeys;
-(id)initWithPlayerType:(id)arg1 ;
-(NSString *)repeatModeAll;
-(NSString *)repeatModeDefault;
-(NSString *)repeatModeNone;
-(NSString *)repeatModeOne;
-(NSString *)shuffleModeAlbums;
-(NSString *)shuffleModeDefault;
-(NSString *)shuffleModeOff;
-(NSString *)shuffleModeSongs;
-(NSString *)playbackStateInterrupted;
-(NSString *)playbackStatePaused;
-(NSString *)playbackStatePlaying;
-(NSString *)playbackStateSeekingBackward;
-(NSString *)playbackStateSeekingForward;
-(NSString *)playbackStateStopped;
@end

