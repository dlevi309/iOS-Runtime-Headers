/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/CKInternalAudioPlayerDelegate.h>

@protocol CKAudioPlayerDelegate;
@class CKMediaObject, CKInternalAudioPlayer, CADisplayLink, NSString;

@interface CKAudioPlayer : NSObject <CKInternalAudioPlayerDelegate> {

	CKMediaObject* _mediaObject;
	id<CKAudioPlayerDelegate> _delegate;
	CKInternalAudioPlayer* _audioPlayer;
	CADisplayLink* _displayLink;
	double _prevCurrentTime;
	/*^block*/id _block;

}

@property (nonatomic,retain) CKMediaObject * mediaObject;                            //@synthesize mediaObject=_mediaObject - In the implementation block
@property (nonatomic,retain) CKInternalAudioPlayer * audioPlayer;                    //@synthesize audioPlayer=_audioPlayer - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                            //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) double prevCurrentTime;                                 //@synthesize prevCurrentTime=_prevCurrentTime - In the implementation block
@property (nonatomic,copy) id block;                                                 //@synthesize block=_block - In the implementation block
@property (assign,nonatomic,__weak) id<CKAudioPlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL usesAVPlayer; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,readonly) double duration; 
@property (assign,nonatomic) float volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPlaying;
-(CADisplayLink *)displayLink;
-(id)block;
-(void)setMediaObject:(CKMediaObject *)arg1 ;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)setVolume:(float)arg1 ;
-(id<CKAudioPlayerDelegate>)delegate;
-(void)pause;
-(void)setBlock:(id)arg1 ;
-(CKInternalAudioPlayer *)audioPlayer;
-(void)stop;
-(void)setAudioPlayer:(CKInternalAudioPlayer *)arg1 ;
-(void)playAfterDelay:(double)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithMediaObject:(id)arg1 shouldUseAVPlayer:(BOOL)arg2 ;
-(void)prepareToPlay;
-(void)setDelegate:(id<CKAudioPlayerDelegate>)arg1 ;
-(id)initWithFileURL:(id)arg1 ;
-(double)currentTime;
-(CKMediaObject *)mediaObject;
-(float)volume;
-(double)duration;
-(BOOL)usesAVPlayer;
-(id)initWithMediaObject:(id)arg1 ;
-(void)internalAudioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(void)internalAudioPlayerDidPrepareAudioForPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(double)prevCurrentTime;
-(void)setPrevCurrentTime:(double)arg1 ;
-(void)dealloc;
-(void)displayLinkFired:(id)arg1 ;
@end

