/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/AVAudioPlayerDelegate.h>

@class AVAudioPlayer, NSTimer, NSString;

@interface WFPlaySoundAction : WFAction <AVAudioPlayerDelegate> {

	AVAudioPlayer* _audioPlayer;
	NSTimer* _progressTimer;

}

@property (nonatomic,retain) AVAudioPlayer * audioPlayer;              //@synthesize audioPlayer=_audioPlayer - In the implementation block
@property (nonatomic,retain) NSTimer * progressTimer;                  //@synthesize progressTimer=_progressTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)cleanup;
-(void)updateProgress;
-(AVAudioPlayer *)audioPlayer;
-(void)setAudioPlayer:(AVAudioPlayer *)arg1 ;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2 ;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)runWithDefaultSound;
-(void)runWithAudioFileURL:(id)arg1 fileTypeHint:(id)arg2 duckOthers:(BOOL)arg3 ;
-(NSTimer *)progressTimer;
-(void)setProgressTimer:(NSTimer *)arg1 ;
@end

