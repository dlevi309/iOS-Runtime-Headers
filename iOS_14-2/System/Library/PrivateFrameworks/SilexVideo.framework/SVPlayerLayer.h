/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <QuartzCore/CALayer.h>

@class SVImageLayer, AVPlayerLayer, SVLooper, SVKeyValueObserver, SVNonAnimatingDelegate, AVPlayer, NSString;

@interface SVPlayerLayer : CALayer {

	SVImageLayer* _stillImageLayer;
	AVPlayerLayer* _playerLayer;
	SVLooper* _looper;
	SVKeyValueObserver* _readyForDisplayObserver;
	SVKeyValueObserver* _statusObserver;
	SVNonAnimatingDelegate* _nonAnimatingDelegate;
	unsigned long long _currentPlaybackKind;

}

@property (nonatomic,retain) AVPlayerLayer * playerLayer;                                //@synthesize playerLayer=_playerLayer - In the implementation block
@property (nonatomic,retain) SVLooper * looper;                                          //@synthesize looper=_looper - In the implementation block
@property (nonatomic,retain) SVKeyValueObserver * readyForDisplayObserver;               //@synthesize readyForDisplayObserver=_readyForDisplayObserver - In the implementation block
@property (nonatomic,retain) SVKeyValueObserver * statusObserver;                        //@synthesize statusObserver=_statusObserver - In the implementation block
@property (nonatomic,retain) SVNonAnimatingDelegate * nonAnimatingDelegate;              //@synthesize nonAnimatingDelegate=_nonAnimatingDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long currentPlaybackKind;                     //@synthesize currentPlaybackKind=_currentPlaybackKind - In the implementation block
@property (readonly) SVImageLayer * stillImageLayer;                                     //@synthesize stillImageLayer=_stillImageLayer - In the implementation block
@property (nonatomic,retain) AVPlayer * player; 
@property (nonatomic,copy) NSString * videoGravity; 
+(id)defaultActionForKey:(id)arg1 ;
-(AVPlayer *)player;
-(void)initialize;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(SVLooper *)looper;
-(void)layoutSublayers;
-(void)setVideoGravity:(NSString *)arg1 ;
-(NSString *)videoGravity;
-(id)init;
-(void)pause;
-(id)initWithLayer:(id)arg1 ;
-(void)play;
-(void)sceneDidEnterBackground;
-(void)setLooper:(SVLooper *)arg1 ;
-(void)sceneWillEnterForeground;
-(id)initWithCoder:(id)arg1 ;
-(void)setPlayerLayer:(AVPlayerLayer *)arg1 ;
-(void)playWithPlaybackKind:(unsigned long long)arg1 looping:(BOOL)arg2 ;
-(void)dealloc;
-(SVImageLayer *)stillImageLayer;
-(AVPlayerLayer *)playerLayer;
-(void)setStatusObserver:(SVKeyValueObserver *)arg1 ;
-(SVKeyValueObserver *)statusObserver;
-(SVKeyValueObserver *)readyForDisplayObserver;
-(void)setReadyForDisplayObserver:(SVKeyValueObserver *)arg1 ;
-(void)reduceMotionStatusDidChange;
-(void)setCurrentPlaybackKind:(unsigned long long)arg1 ;
-(unsigned long long)currentPlaybackKind;
-(SVNonAnimatingDelegate *)nonAnimatingDelegate;
-(void)setNonAnimatingDelegate:(SVNonAnimatingDelegate *)arg1 ;
@end

