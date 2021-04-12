/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@protocol TVPPlayback;
@class NSTimer, NSObject;

@interface TVPPlayerBookmarkMonitor : NSObject {

	BOOL _playerHasFinishedLoading;
	NSTimer* _bookmarkPeriodicSaveTimer;
	NSObject*<TVPPlayback> _player;

}

@property (nonatomic,retain) NSTimer * bookmarkPeriodicSaveTimer;               //@synthesize bookmarkPeriodicSaveTimer=_bookmarkPeriodicSaveTimer - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<TVPPlayback> player;              //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) BOOL playerHasFinishedLoading;                     //@synthesize playerHasFinishedLoading=_playerHasFinishedLoading - In the implementation block
-(NSObject*<TVPPlayback>)player;
-(void)setPlayer:(NSObject*<TVPPlayback>)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(void)dealloc;
-(void)_playerStateWillChange:(id)arg1 ;
-(void)_playerCurrentMediaItemWillChange:(id)arg1 ;
-(void)_playerErrorDidOccur:(id)arg1 ;
-(void)setPlayerHasFinishedLoading:(BOOL)arg1 ;
-(void)_updateBookmarkTimeForMediaItem:(id)arg1 player:(id)arg2 playbackOfMediaItemIsEnding:(BOOL)arg3 ;
-(void)_updatePlayCountForMediaItem:(id)arg1 player:(id)arg2 ;
-(NSTimer *)bookmarkPeriodicSaveTimer;
-(void)_bookmarkPeriodicSaveTimerFired:(id)arg1 ;
-(void)setBookmarkPeriodicSaveTimer:(NSTimer *)arg1 ;
-(BOOL)playerHasFinishedLoading;
@end

