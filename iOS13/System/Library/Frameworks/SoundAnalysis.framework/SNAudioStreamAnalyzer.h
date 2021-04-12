/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNTimeConverting.h>
#import <libobjc.A.dylib/SNResultsGating.h>

@protocol OS_dispatch_queue;
@class SNAudioProcessorCache, AVAudioFormat, NSArray, NSMutableArray, NSObject, NSString;

@interface SNAudioStreamAnalyzer : NSObject <SNTimeConverting, SNResultsGating> {

	SNAudioProcessorCache* _processorCache;
	list<SoundAnalysis::ProcessingContext, std::__1::allocator<SoundAnalysis::ProcessingContext> >* _processingContexts;
	ProcessingTree* _processingTree;
	AVAudioFormat* _currentFormat;
	NSArray* _requests;
	NSMutableArray* _analyzerInfos;
	BOOL _shouldRebuildProcessingTree;
	BOOL _isInErrorState;
	NSObject*<OS_dispatch_queue> _analyzerQueue;
	BOOL _shouldProduceResults;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double clientSampleRate; 
@property (nonatomic,readonly) BOOL shouldProduceResults;              //@synthesize shouldProduceResults=_shouldProduceResults - In the implementation block
+(void)validateFormatIsPCM:(id)arg1 ;
-(id)initWithFormat:(id)arg1 ;
-(id)detailedDescription;
-(void)removeRequest:(id)arg1 ;
-(void)removeAllRequests;
-(BOOL)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3 ;
-(void)analyzeAudioBuffer:(id)arg1 atAudioFramePosition:(long long)arg2 ;
-(void)_removeRequest:(id)arg1 ;
-(void)sendErrorToAllRequests:(id)arg1 ;
-(void)completeAnalysis;
-(long long)clientSampleTimeFromSampleTime:(long long)arg1 fromBox:(Box*)arg2 ;
-(double)clientSampleRate;
-(BOOL)shouldProduceResults;
-(void)updateProcessingTreeFormat:(id)arg1 ;
-(BOOL)_addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3 ;
-(id)createAnalyzerInfoForRequest:(id)arg1 resultsObserver:(id)arg2 ;
-(BOOL)configureAnalyzer:(id)arg1 withFormat:(id)arg2 ;
-(void)removeAnalyzerInfoForRequest:(id)arg1 ;
-(BOOL)configureAnalysisTreeWithFormat:(id)arg1 ;
-(BOOL)updateTreeProcessingContexts;
-(void)_analyzeAudioBuffer:(id)arg1 atAudioFramePosition:(long long)arg2 ;
-(void)enterErrorState:(id)arg1 ;
-(void)handleAnalyzeAudioBufferError;
-(id)analyzerInfoForRequest:(id)arg1 ;
-(void)analyzeAudioBufferList:(AudioBufferList*)arg1 withAudioFrameCount:(unsigned)arg2 atAudioFramePosition:(long long)arg3 ;
-(void)writeDSPGraphDotFilesToDirectory:(id)arg1 ;
@end

