/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <libobjc.A.dylib/AVAudioPlayerDelegate.h>

@protocol OKAudioPlaylistDelegate, OS_dispatch_queue;
@class NSArray, NSMutableDictionary, AVPlayer, OKAudioDucker, OKPresentation, NSOperationQueue, NSObject, OKMediaItem, NSString;

@interface OKAudioPlaylist : NSObject <AVAudioPlayerDelegate> {

	NSArray* _mediaItems;
	NSMutableDictionary* _players;
	BOOL _playing;
	BOOL _loops;
	long long _currentPlayerIndex;
	AVPlayer* _currentMedia;
	OKAudioDucker* _ducker;
	OKPresentation* _presentation;
	id<OKAudioPlaylistDelegate> _delegate;
	NSOperationQueue* _mediaItemOperationQueue;
	NSObject*<OS_dispatch_queue> _accessQueue;
	double _playingMusicCurrentTime;
	double _playingMusicDuration;

}

@property (assign,nonatomic) float volume; 
@property (assign,nonatomic) BOOL loops;                                        //@synthesize loops=_loops - In the implementation block
@property (assign,nonatomic) double playingMusicCurrentTime;                    //@synthesize playingMusicCurrentTime=_playingMusicCurrentTime - In the implementation block
@property (nonatomic,readonly) double playingMusicDuration;                     //@synthesize playingMusicDuration=_playingMusicDuration - In the implementation block
@property (nonatomic,readonly) OKMediaItem * playingItem; 
@property (assign,nonatomic) id<OKAudioPlaylistDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<OKAudioPlaylistDelegate>)delegate;
-(void)setDelegate:(id<OKAudioPlaylistDelegate>)arg1 ;
-(void)stop;
-(void)next;
-(void)prev;
-(void)play;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(BOOL)isPlaying;
-(void)setPlaying:(BOOL)arg1 ;
-(BOOL)loops;
-(void)setLoops:(BOOL)arg1 ;
-(OKMediaItem *)playingItem;
-(void)rewind;
-(void)beginFadingWithDuration:(double)arg1 ;
-(void)beginDuckingToLevel:(double)arg1 fadeDuration:(double)arg2 ;
-(void)endDucking;
-(double)playingMusicCurrentTime;
-(double)playingMusicDuration;
-(id)initWithAudioItems:(id)arg1 presentation:(id)arg2 ;
-(id)initWithAudioURLs:(id)arg1 presentation:(id)arg2 ;
-(void)endFading;
-(void)setPlayingMusicCurrentTime:(double)arg1 ;
-(id)currentMedia;
-(void)audioFinishedPlaying:(id)arg1 ;
-(void)_playMediaItem:(id)arg1 forMediaItem:(id)arg2 ;
-(void)setCurrentMedia:(id)arg1 ;
@end

