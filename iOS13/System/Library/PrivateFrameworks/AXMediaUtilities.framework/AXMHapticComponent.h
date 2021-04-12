/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMOutputComponent.h>

@protocol OS_dispatch_queue, CHHapticPatternPlayer;
@class NSObject, CHHapticEngine;

@interface AXMHapticComponent : AXMOutputComponent {

	NSObject*<OS_dispatch_queue> _queue;
	CHHapticEngine* _engine;
	id<CHHapticPatternPlayer> _player;
	BOOL _supportsHaptics;
	BOOL _supportsAudio;
	BOOL _autoShutdownEnabled;
	id<CHHapticPatternPlayer> __levelPlayer;

}

@property (nonatomic,retain) id<CHHapticPatternPlayer> _levelPlayer;                             //@synthesize _levelPlayer=__levelPlayer - In the implementation block
@property (assign,getter=isAutoShutdownEnabled,nonatomic) BOOL autoShutdownEnabled;              //@synthesize autoShutdownEnabled=_autoShutdownEnabled - In the implementation block
+(BOOL)isSupported;
-(id)init;
-(BOOL)canHandleRequest:(id)arg1 ;
-(void)handleRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transitionToState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAutoShutdownEnabled:(BOOL)arg1 ;
-(void)stopCurrentHaptics;
-(BOOL)isAutoShutdownEnabled;
-(id<CHHapticPatternPlayer>)_levelPlayer;
-(void)set_levelPlayer:(id<CHHapticPatternPlayer>)arg1 ;
@end

