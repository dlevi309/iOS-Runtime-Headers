/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPPlayButtonControl.h>
#import <libobjc.A.dylib/LPStreamingAudioPlayerClient.h>

@class LPStreamingAudioPlayer;

@interface LPStreamingAudioPlayButtonControl : LPPlayButtonControl <LPStreamingAudioPlayerClient> {

	LPStreamingAudioPlayer* _player;

}
-(void)dealloc;
-(void)buttonPressed:(id)arg1 ;
-(void)streamingAudioPlayer:(id)arg1 didChangeProgress:(float)arg2 ;
-(void)streamingAudioPlayer:(id)arg1 didTransitionToState:(unsigned long long)arg2 ;
-(void)streamingAudioPlayerDidFailToPlay:(id)arg1 ;
-(id)initWithAudio:(id)arg1 style:(id)arg2 ;
@end

