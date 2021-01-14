/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setVolume:(NSNumber *)arg1 ;
-(void)setShuffleMode:(NSString *)arg1 ;
-(NSString *)playbackState;
-(void)pause;
-(SUScriptMediaItem *)nowPlayingItem;
-(void)setQueueWithQuery:(id)arg1 ;
-(void)setQueueWithItemCollection:(id)arg1 ;
-(void)skipToNextItem;
-(void)skipToBeginning;
-(void)skipToPreviousItem;
-(void)play;
-(id)attributeKeys;
-(NSString *)repeatMode;
-(void)stop;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(void)setRepeatMode:(NSString *)arg1 ;
-(double)currentPlaybackTime;
-(NSString *)playerType;
-(id)_className;
-(NSNumber *)volume;
-(NSString *)shuffleMode;
-(void)dealloc;
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

