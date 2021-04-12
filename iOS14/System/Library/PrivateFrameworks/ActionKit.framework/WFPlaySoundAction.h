/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(AVAudioPlayer *)audioPlayer;
-(void)setAudioPlayer:(AVAudioPlayer *)arg1 ;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(void)cleanup;
-(void)updateProgress;
-(void)cancel;
-(void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2 ;
-(void)setProgressTimer:(NSTimer *)arg1 ;
-(NSTimer *)progressTimer;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)runWithDefaultSound;
-(void)runWithAudioFileURL:(id)arg1 fileTypeHint:(id)arg2 duckOthers:(BOOL)arg3 ;
@end

