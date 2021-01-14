/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@protocol OS_dispatch_queue;
#import <SoundAnalysis/SoundAnalysis-Structs.h>
@class NSMutableArray, AVAudioFormat, NSObject, SNForwardPassAudioStreamAnalyzer, NSMutableDictionary;

@interface SNAudioStreamAnalyzer : NSObject {

	NSMutableArray* _requests;
	AVAudioFormat* _currentFormat;
	NSObject*<OS_dispatch_queue> _analyzerQueue;
	SNForwardPassAudioStreamAnalyzer* _firstPassAnalyzer;
	NSMutableDictionary* _secondPassAnalyzers;
	unique_ptr<AudioRingBuffer, std::__1::default_delete<AudioRingBuffer> >* _ringBuffer;
	unique_ptr<CABufferList, std::__1::default_delete<CABufferList> >* _ringBufferWriteBufferList;

}
+(BOOL)shouldRecordSecondPass;
+(id)secondPassRecordingPath;
+(void)deleteWAVAndTextFilesCreatedBeforeLastWeekInDirectory:(id)arg1 ;
-(id)detailedDescription;
-(id)initWithFormat:(id)arg1 ;
-(void)removeAllRequests;
-(void)removeRequest:(id)arg1 ;
-(BOOL)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3 ;
-(void)analyzeAudioBuffer:(id)arg1 atAudioFramePosition:(long long)arg2 ;
-(void)_removeRequest:(id)arg1 ;
-(void)sendErrorToAllRequests:(id)arg1 ;
-(void)completeAnalysis;
-(BOOL)addRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 resultsHandler:(/*^block*/id)arg3 error:(id*)arg4 ;
-(void)writeDSPGraphDotFilesToDirectory:(id)arg1 ;
-(void)removeRequestAsync:(id)arg1 ;
-(BOOL)_addRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 resultsHandler:(/*^block*/id)arg3 error:(id*)arg4 ;
-(BOOL)_addTwoPassRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 resultsHandler:(/*^block*/id)arg3 error:(id*)arg4 ;
-(BOOL)_addSinglePassRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 resultsHandler:(/*^block*/id)arg3 error:(id*)arg4 ;
-(void)handleBeginSecondPassForRequest:(id)arg1 secondPassController:(id)arg2 completionHandler:(/*^block*/id)arg3 resultsHandler:(/*^block*/id)arg4 ;
-(void)handleEndSecondPassForRequest:(id)arg1 ;
-(void)_removeTwoPassRequest:(id)arg1 ;
-(void)_removeSinglePassRequest:(id)arg1 ;
-(void)_analyzeAudioBuffer:(id)arg1 atAudioFramePosition:(long long)arg2 ;
@end

