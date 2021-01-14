/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)detailedDescription;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(void)analyzeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)analyze;
-(void)removeAllRequests;
-(void)removeRequest:(id)arg1 ;
-(BOOL)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3 ;
-(void)cancelAnalysis;
@end

