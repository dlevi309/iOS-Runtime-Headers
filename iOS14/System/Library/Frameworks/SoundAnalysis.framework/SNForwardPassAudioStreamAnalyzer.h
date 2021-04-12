/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNTimeConverting.h>

@class SNAudioProcessorCache, AVAudioFormat, NSArray, NSMutableArray, SNUltronResultsLogger, NSString;

@interface SNForwardPassAudioStreamAnalyzer : NSObject <SNTimeConverting> {

	SNAudioProcessorCache* _processorCache;
	list<SoundAnalysis::ProcessingContext, std::__1::allocator<SoundAnalysis::ProcessingContext> >* _processingContexts;
	ProcessingTree* _processingTree;
	AVAudioFormat* _currentFormat;
	NSArray* _requests;
	NSMutableArray* _analyzerInfos;
	SNUltronResultsLogger* _resultsLogger;
	BOOL _shouldRebuildProcessingTree;

}

@property (nonatomic,readonly) double clientSampleRate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopRecording;
-(id)detailedDescription;
-(id)initWithFormat:(id)arg1 ;
-(void)removeAllRequests;
-(void)removeRequest:(id)arg1 ;
-(void)dealloc;
-(BOOL)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3 ;
-(void)analyzeAudioBuffer:(id)arg1 atAudioFramePosition:(long long)arg2 ;
-(void)sendErrorToAllRequests:(id)arg1 ;
-(void)completeAnalysis;
-(long long)clientSampleTimeFromSampleTime:(long long)arg1 fromBox:(Box*)arg2 ;
-(double)clientSampleRate;
-(void)updateProcessingTreeFormat:(id)arg1 ;
-(BOOL)addRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 resultsHandler:(/*^block*/id)arg3 error:(id*)arg4 ;
-(/*^block*/id)completionHandlerWithClientCompletionHandler:(/*^block*/id)arg1 forRequest:(id)arg2 ;
-(/*^block*/id)resultsHandlerWithClientResultsHandler:(/*^block*/id)arg1 forRequest:(id)arg2 ;
-(id)createAnalyzerInfoForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 resultsHandler:(/*^block*/id)arg3 error:(id*)arg4 ;
-(BOOL)configureAnalyzer:(id)arg1 withFormat:(id)arg2 ;
-(void)removeAnalyzerInfoForRequest:(id)arg1 ;
-(BOOL)configureAnalysisTreeWithFormat:(id)arg1 ;
-(BOOL)updateTreeProcessingContexts;
-(void)handleAnalyzeAudioBufferError;
-(id)analyzerInfoForRequest:(id)arg1 ;
-(void)analyzeAudioBufferList:(AudioBufferList*)arg1 withAudioFrameCount:(unsigned)arg2 atAudioFramePosition:(long long)arg3 ;
-(void)writeDSPGraphDotFilesToDirectory:(id)arg1 ;
-(BOOL)startRecordingToDirectory:(id)arg1 requestDescription:(id)arg2 error:(id*)arg3 ;
@end

