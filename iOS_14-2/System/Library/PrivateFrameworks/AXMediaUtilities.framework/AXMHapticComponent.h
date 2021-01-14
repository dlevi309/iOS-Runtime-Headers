/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)stopCurrentHaptics;
-(BOOL)canHandleRequest:(id)arg1 ;
-(void)setAutoShutdownEnabled:(BOOL)arg1 ;
-(BOOL)isAutoShutdownEnabled;
-(void)handleRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transitionToState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id<CHHapticPatternPlayer>)_levelPlayer;
-(void)set_levelPlayer:(id<CHHapticPatternPlayer>)arg1 ;
@end

