/*
* Generated on Monday, March 1, 2021 at 2:35:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/CameraUI.axbundle/CameraUI
*/


@protocol CHHapticPatternPlayer;
@class CHHapticEngine;

@interface AXCameraHapticEngine : NSObject {

	BOOL __supportsHaptics;
	BOOL __supportsAudio;
	double _screenEdgeFeedbackCooldownTime;
	CHHapticEngine* __engine;
	id<CHHapticPatternPlayer> __levelPlayer;
	id<CHHapticPatternPlayer> __unlevelPlayer;
	id<CHHapticPatternPlayer> __screenEdgePlayer;
	unsigned long long __levelAudioResourceID;
	unsigned long long __unlevelAudioResourceID;
	double __lastScreenEdgeTimestamp;

}

@property (nonatomic,readonly) BOOL _supportsHaptics;                                  //@synthesize _supportsHaptics=__supportsHaptics - In the implementation block
@property (nonatomic,readonly) BOOL _supportsAudio;                                    //@synthesize _supportsAudio=__supportsAudio - In the implementation block
@property (nonatomic,readonly) CHHapticEngine * _engine;                               //@synthesize _engine=__engine - In the implementation block
@property (nonatomic,retain) id<CHHapticPatternPlayer> _levelPlayer;                   //@synthesize _levelPlayer=__levelPlayer - In the implementation block
@property (nonatomic,retain) id<CHHapticPatternPlayer> _unlevelPlayer;                 //@synthesize _unlevelPlayer=__unlevelPlayer - In the implementation block
@property (nonatomic,retain) id<CHHapticPatternPlayer> _screenEdgePlayer;              //@synthesize _screenEdgePlayer=__screenEdgePlayer - In the implementation block
@property (assign,nonatomic) unsigned long long _levelAudioResourceID;                 //@synthesize _levelAudioResourceID=__levelAudioResourceID - In the implementation block
@property (assign,nonatomic) unsigned long long _unlevelAudioResourceID;               //@synthesize _unlevelAudioResourceID=__unlevelAudioResourceID - In the implementation block
@property (assign,nonatomic) double _lastScreenEdgeTimestamp;                          //@synthesize _lastScreenEdgeTimestamp=__lastScreenEdgeTimestamp - In the implementation block
@property (assign,nonatomic) double screenEdgeFeedbackCooldownTime;                    //@synthesize screenEdgeFeedbackCooldownTime=_screenEdgeFeedbackCooldownTime - In the implementation block
+(id)_stringForHapticEngineStoppedReason:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(CHHapticEngine *)_engine;
-(id<CHHapticPatternPlayer>)_levelPlayer;
-(void)set_levelPlayer:(id<CHHapticPatternPlayer>)arg1 ;
-(BOOL)_supportsHaptics;
-(BOOL)_supportsAudio;
-(void)setScreenEdgeFeedbackCooldownTime:(double)arg1 ;
-(void)performLevelFeedback;
-(void)performUnlevelFeedback;
-(void)performSubjectHitScreenEdgeFeedback;
-(void)_createLevelPlayerIfNeeded;
-(void)_createUnlevelPlayerIfNeeded;
-(void)_createScreenEdgePlayerIfNeeded;
-(void)_releasePlayers;
-(unsigned long long)_levelAudioResourceID;
-(void)_unregisterAudioResource:(unsigned long long)arg1 ;
-(unsigned long long)_unlevelAudioResourceID;
-(void)set_unlevelPlayer:(id<CHHapticPatternPlayer>)arg1 ;
-(void)set_screenEdgePlayer:(id<CHHapticPatternPlayer>)arg1 ;
-(unsigned long long)_registerAudioWithResourceWithName:(id)arg1 ;
-(void)set_levelAudioResourceID:(unsigned long long)arg1 ;
-(id<CHHapticPatternPlayer>)_unlevelPlayer;
-(void)set_unlevelAudioResourceID:(unsigned long long)arg1 ;
-(id<CHHapticPatternPlayer>)_screenEdgePlayer;
-(void)_performHapticForPlayer:(id)arg1 ;
-(double)_lastScreenEdgeTimestamp;
-(double)screenEdgeFeedbackCooldownTime;
-(void)set_lastScreenEdgeTimestamp:(double)arg1 ;
@end

