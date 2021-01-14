/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSAudioRecorderDelegate.h>
#import <libobjc.A.dylib/CSFallbackAudioSessionReleaseProviding.h>

@protocol OS_dispatch_queue;
@class NSObject, CSAudioRecorder, NSString;

@interface CSFallbackAudioSessionReleaseProvider : NSObject <CSAudioRecorderDelegate, CSFallbackAudioSessionReleaseProviding> {

	NSObject*<OS_dispatch_queue> _queue;
	CSAudioRecorder* _audioRecorder;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CSAudioRecorder * audioRecorder;                 //@synthesize audioRecorder=_audioRecorder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fallbackDeactivateAudioSession:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5 ;
-(void)audioRecorderWillBeDestroyed:(id)arg1 ;
-(void)setAudioRecorder:(CSAudioRecorder *)arg1 ;
-(void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(CSAudioRecorder *)audioRecorder;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithAudioRecorder:(id)arg1 ;
@end

