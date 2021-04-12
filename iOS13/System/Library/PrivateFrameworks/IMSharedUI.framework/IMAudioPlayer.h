/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
*/

#import <IMSharedUI/IMInternalAVAudioPlayerDelegate.h>

@protocol IMAudioPlayerDelegate;
@class NSURL, IMInternalAVAudioPlayer, IMDisplayLink, NSString;

@interface IMAudioPlayer : NSObject <IMInternalAVAudioPlayerDelegate> {

	NSURL* _audioURL;
	id<IMAudioPlayerDelegate> _delegate;
	IMInternalAVAudioPlayer* _audioPlayer;
	double _prevCurrentTime;
	/*^block*/id _block;
	IMDisplayLink* _displayLink;

}

@property (nonatomic,copy) NSURL * audioURL;                                         //@synthesize audioURL=_audioURL - In the implementation block
@property (nonatomic,retain) IMInternalAVAudioPlayer * audioPlayer;                  //@synthesize audioPlayer=_audioPlayer - In the implementation block
@property (assign,nonatomic) double prevCurrentTime;                                 //@synthesize prevCurrentTime=_prevCurrentTime - In the implementation block
@property (nonatomic,copy) id block;                                                 //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) IMDisplayLink * displayLink;                            //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic,__weak) id<IMAudioPlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL usesAVPlayer; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,readonly) double duration; 
@property (assign,nonatomic) float volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)audioPlayerWithContentsOfURL:(id)arg1 shouldUseAVPlayer:(BOOL)arg2 ;
+(id)audioPlayerWithContentsOfURL:(id)arg1 ;
-(void)dealloc;
-(id<IMAudioPlayerDelegate>)delegate;
-(void)setDelegate:(id<IMAudioPlayerDelegate>)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(void)pause;
-(void)stop;
-(id)block;
-(double)duration;
-(void)stopTimer;
-(void)setBlock:(id)arg1 ;
-(IMDisplayLink *)displayLink;
-(void)setDisplayLink:(IMDisplayLink *)arg1 ;
-(double)currentTime;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(BOOL)isPlaying;
-(void)startTimer;
-(IMInternalAVAudioPlayer *)audioPlayer;
-(void)setAudioPlayer:(IMInternalAVAudioPlayer *)arg1 ;
-(void)prepareToPlay;
-(NSURL *)audioURL;
-(void)playAfterDelay:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)internalAudioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(BOOL)usesAVPlayer;
-(double)prevCurrentTime;
-(void)setPrevCurrentTime:(double)arg1 ;
-(void)setAudioURL:(NSURL *)arg1 ;
-(void)internalAVAudioPlayerDidPrepareAudioForPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 shouldUseAVPlayer:(BOOL)arg2 ;
-(void)timerDidExpire:(id)arg1 ;
@end

