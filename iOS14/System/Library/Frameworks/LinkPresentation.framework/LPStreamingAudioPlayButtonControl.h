/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPPlayButtonControl.h>
#import <libobjc.A.dylib/LPStreamingAudioPlayerClient.h>

@class LPStreamingAudioPlayer;

@interface LPStreamingAudioPlayButtonControl : LPPlayButtonControl <LPStreamingAudioPlayerClient> {

	LPStreamingAudioPlayer* _player;

}
-(void)buttonPressed:(id)arg1 ;
-(void)streamingAudioPlayer:(id)arg1 didChangeProgress:(float)arg2 ;
-(void)streamingAudioPlayerDidFailToPlay:(id)arg1 ;
-(void)streamingAudioPlayer:(id)arg1 didTransitionToState:(unsigned long long)arg2 ;
-(id)initWithAudio:(id)arg1 style:(id)arg2 ;
-(void)dealloc;
@end

