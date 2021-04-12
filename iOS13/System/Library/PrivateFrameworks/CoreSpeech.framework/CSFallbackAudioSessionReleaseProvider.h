/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithAudioRecorder:(id)arg1 ;
-(void)setAudioRecorder:(CSAudioRecorder *)arg1 ;
-(void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5 ;
-(void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 ;
-(void)audioRecorderWillBeDestroyed:(id)arg1 ;
-(CSAudioRecorder *)audioRecorder;
-(BOOL)fallbackDeactivateAudioSession:(unsigned long long)arg1 error:(id*)arg2 ;
@end

