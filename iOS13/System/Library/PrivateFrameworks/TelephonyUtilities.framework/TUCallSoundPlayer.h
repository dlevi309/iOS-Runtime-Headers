/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@class TUSoundPlayer;

@interface TUCallSoundPlayer : NSObject {

	TUSoundPlayer* _player;
	long long _currentlyPlayingSoundType;

}

@property (nonatomic,retain) TUSoundPlayer * player;                           //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) long long currentlyPlayingSoundType;              //@synthesize currentlyPlayingSoundType=_currentlyPlayingSoundType - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
-(id)init;
-(BOOL)isPlaying;
-(TUSoundPlayer *)player;
-(void)setPlayer:(TUSoundPlayer *)arg1 ;
-(void)stopPlaying;
-(BOOL)attemptToPlaySoundType:(long long)arg1 forCall:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)attemptToPlayDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)currentlyPlayingSoundType;
-(void)setCurrentlyPlayingSoundType:(long long)arg1 ;
-(BOOL)attemptToPlaySoundType:(long long)arg1 forCall:(id)arg2 ;
-(BOOL)attemptToPlayDescriptor:(id)arg1 ;
@end

