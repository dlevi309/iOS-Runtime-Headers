/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@protocol OS_dispatch_queue;
#import <VoiceTrigger/VoiceTrigger-Structs.h>
@class NSObject, NSURL;

@interface VTAudioFileLog : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	OpaqueExtAudioFileRef _audioFile;
	AudioStreamBasicDescription _asbd;
	NSURL* _url;
	unsigned _audioLength;

}
+(id)sharedInstance;
-(void)stopRecording;
-(void)startRecording;
-(id)init;
-(void)dealloc;
-(void)_closeAudioFile;
-(void)appendAudioData:(AudioBuffer*)arg1 ;
@end

