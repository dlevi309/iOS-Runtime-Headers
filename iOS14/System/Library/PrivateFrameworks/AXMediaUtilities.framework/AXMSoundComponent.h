/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)canHandleRequest:(id)arg1 ;
-(void)handleRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transitionToState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_startEngineIfNeeded:(id*)arg1 ;
-(id)_scheduleActiveSound:(id)arg1 ;
-(void)_scheduleOneShotSound:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_stopActiveSound:(id)arg1 ;
-(void)_logAudioFileInfo:(id)arg1 ;
-(id)configChangedObserverToken;
-(void)setConfigChangedObserverToken:(id)arg1 ;
-(void)dealloc;
@end

