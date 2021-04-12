/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@protocol OS_dispatch_queue;
@class AVAudioFile, SNAudioStreamAnalyzer, NSObject;

@interface SNAudioFileAnalyzer : NSObject {

	AVAudioFile* _audioFile;
	SNAudioStreamAnalyzer* _streamAnalyzer;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _wasCancelled;

}
-(void)analyze;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(id)detailedDescription;
-(void)analyzeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeRequest:(id)arg1 ;
-(void)removeAllRequests;
-(BOOL)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3 ;
-(void)cancelAnalysis;
@end

