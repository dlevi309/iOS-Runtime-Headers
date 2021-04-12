/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/


@protocol OS_dispatch_semaphore;
@class NSObject, NSMapTable;

@interface SVAudioSession : NSObject {

	BOOL _audioSessionActive;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSMapTable* _players;

}

@property (assign,getter=isAudioSessionActive,nonatomic) BOOL audioSessionActive;              //@synthesize audioSessionActive=_audioSessionActive - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> semaphore;                     //@synthesize semaphore=_semaphore - In the implementation block
@property (nonatomic,readonly) NSMapTable * players;                                           //@synthesize players=_players - In the implementation block
+(id)sharedSession;
-(id)init;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(void)addInterestForPlayer:(id)arg1 withMode:(int)arg2 ;
-(void)removeInterestForPlayer:(id)arg1 ;
-(NSMapTable *)players;
-(void)setupAudioSessionCategory;
-(void)activateAudioSessionCategory;
-(void)deactivateAudioSessionCategory;
-(id)desiredAudioSessionCategory;
-(BOOL)needsToSetupAudioSessionCategory;
-(BOOL)isAudioSessionActive;
-(BOOL)shouldActivateAudioSession;
-(void)setAudioSessionActive:(BOOL)arg1 ;
-(BOOL)canDeactivateAudioSession;
@end

