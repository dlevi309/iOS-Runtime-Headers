/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/SNSystemAudioAnalyzerProtocol.h>

@protocol OS_dispatch_queue;
@class AVAudioFormat, NSObject, SNAudioRecordingQueue, SNAudioStreamAnalyzer, NSMutableArray;

@interface SNSystemAudioAnalyzerLocal : NSObject <SNSystemAudioAnalyzerProtocol> {

	AVAudioFormat* _recordFormat;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SNAudioRecordingQueue* _recordingQueue;
	SNAudioStreamAnalyzer* _streamAnalyzer;
	long long _recordingState;
	BOOL _clientStartedAnalysis;
	NSMutableArray* _requests;

}
-(id)init;
-(void)start;
-(void)stop;
-(void)removeAllRequests;
-(void)removeRequest:(id)arg1 ;
-(void)_removeAllRequests;
-(BOOL)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3 ;
-(void)_removeRequest:(id)arg1 ;
-(void)sendErrorToAllRequests:(id)arg1 ;
-(void)handleAVAudioSessionInterruption:(id)arg1 ;
-(void)handleAVAudioSessionRouteChange:(id)arg1 ;
-(void)handleAVAudioSessionMediaServicesLost:(id)arg1 ;
-(void)handleAVAudioSessionMediaServicesReset:(id)arg1 ;
-(BOOL)_addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3 ;
-(void)startAudio;
-(void)stopAudio;
-(void)handleAudioStreamInterrupted;
@end

