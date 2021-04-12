/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/


@protocol OS_dispatch_semaphore;
@class NSObject, NSMapTable, SVMediaPlaybackController;

@interface SVAudioSession : NSObject {

	BOOL _audioSessionActive;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSMapTable* _players;
	SVMediaPlaybackController* _playbackController;

}

@property (assign,getter=isAudioSessionActive,nonatomic) BOOL audioSessionActive;              //@synthesize audioSessionActive=_audioSessionActive - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> semaphore;                     //@synthesize semaphore=_semaphore - In the implementation block
@property (nonatomic,readonly) NSMapTable * players;                                           //@synthesize players=_players - In the implementation block
@property (nonatomic,readonly) SVMediaPlaybackController * playbackController;                 //@synthesize playbackController=_playbackController - In the implementation block
+(id)sharedSession;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(id)init;
-(NSMapTable *)players;
-(BOOL)isAudioSessionActive;
-(void)addInterestForPlayer:(id)arg1 withMode:(int)arg2 ;
-(void)removeInterestForPlayer:(id)arg1 ;
-(SVMediaPlaybackController *)playbackController;
-(void)registerPlaybackControlForPlayer:(id)arg1 withMode:(int)arg2 ;
-(void)setupAudioSessionCategory;
-(void)activateAudioSessionCategory;
-(void)deactivateAudioSessionCategory;
-(id)desiredAudioSessionConfiguration;
-(BOOL)needsToSetupAudioSessionCategory;
-(BOOL)shouldActivateAudioSession;
-(void)setAudioSessionActive:(BOOL)arg1 ;
-(BOOL)canDeactivateAudioSession;
@end

