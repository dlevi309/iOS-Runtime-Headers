/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMOutputComponent.h>

@class AVAudioEngine, AVAudioPlayerNode, NSMutableArray;

@interface AXMSoundComponent : AXMOutputComponent {

	AVAudioEngine* _engine;
	AVAudioPlayerNode* _oneShotSoundPlayer;
	NSMutableArray* _activeSounds;
	id _configChangedObserverToken;

}

@property (nonatomic,retain) id configChangedObserverToken;              //@synthesize configChangedObserverToken=_configChangedObserverToken - In the implementation block
+(BOOL)isSupported;
-(id)init;
-(void)dealloc;
-(BOOL)canHandleRequest:(id)arg1 ;
-(void)handleRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transitionToState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_startEngineIfNeeded:(id*)arg1 ;
-(void)_scheduleOneShotSound:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_scheduleActiveSound:(id)arg1 ;
-(void)_stopActiveSound:(id)arg1 ;
-(void)_logAudioFileInfo:(id)arg1 ;
-(id)configChangedObserverToken;
-(void)setConfigChangedObserverToken:(id)arg1 ;
@end

