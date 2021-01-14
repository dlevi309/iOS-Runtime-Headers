/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVAudioNode.h>
#import <AVFAudio/AVAudioMixing.h>

@class NSString;

@interface AVAudioPlayerNode : AVAudioNode <AVAudioMixing>

@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (assign,nonatomic) float volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPlaying;
-(id)init;
-(void)pause;
-(void)callLegacyCompletionHandlerForType:(long long)arg1 legacyHandler:(/*^block*/id)arg2 ;
-(void)scheduleBuffer:(id)arg1 completionCallbackType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)scheduleBuffer:(id)arg1 atTime:(id)arg2 options:(unsigned long long)arg3 completionCallbackType:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)scheduleFile:(id)arg1 atTime:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)scheduleFile:(id)arg1 atTime:(id)arg2 completionCallbackType:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)scheduleSegment:(id)arg1 startingFrame:(long long)arg2 frameCount:(unsigned)arg3 atTime:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)scheduleSegment:(id)arg1 startingFrame:(long long)arg2 frameCount:(unsigned)arg3 atTime:(id)arg4 completionCallbackType:(long long)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)prepareWithFrameCount:(unsigned)arg1 ;
-(id)nodeTimeForPlayerTime:(id)arg1 ;
-(id)playerTimeForNodeTime:(id)arg1 ;
-(void)scheduleBuffer:(id)arg1 atTime:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)scheduleBuffer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)play;
-(void)stop;
-(void)didAttachToEngine:(id)arg1 ;
-(void)playAtTime:(id)arg1 ;
@end

