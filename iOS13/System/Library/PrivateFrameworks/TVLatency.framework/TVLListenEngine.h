/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVLatency.framework/TVLatency
*/

#import <libobjc.A.dylib/SNResultsObserving.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class AVAudioEngine, AVAudioInputNode, AVAudioPlayerNode, AVAudioUnit, SNEstimateAudioOffsetRequest, SNAudioStreamAnalyzer, AVAudioFile, NSMutableArray, NSDate, NSObject, NSString;

@interface TVLListenEngine : NSObject <SNResultsObserving> {

	BOOL _lastObservationWasConfident;
	BOOL _didMissDeadline;
	AVAudioEngine* _audioEngine;
	AVAudioInputNode* _microphone;
	AVAudioPlayerNode* _player;
	AVAudioUnit* _mixer;
	SNEstimateAudioOffsetRequest* _estimateAudioOffsetRequest;
	SNAudioStreamAnalyzer* _streamAnalyzer;
	/*^block*/id _callback;
	/*^block*/id _completion;
	AVAudioFile* _file;
	NSMutableArray* _confidentResults;
	long long _convergenceLossCount;
	NSDate* _firstObservationDate;
	double _timeToConverge;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _analysisQueue;

}

@property (nonatomic,retain) AVAudioEngine * audioEngine;                                            //@synthesize audioEngine=_audioEngine - In the implementation block
@property (nonatomic,retain) AVAudioInputNode * microphone;                                          //@synthesize microphone=_microphone - In the implementation block
@property (nonatomic,retain) AVAudioPlayerNode * player;                                             //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVAudioUnit * mixer;                                                    //@synthesize mixer=_mixer - In the implementation block
@property (nonatomic,retain) SNEstimateAudioOffsetRequest * estimateAudioOffsetRequest;              //@synthesize estimateAudioOffsetRequest=_estimateAudioOffsetRequest - In the implementation block
@property (nonatomic,retain) SNAudioStreamAnalyzer * streamAnalyzer;                                 //@synthesize streamAnalyzer=_streamAnalyzer - In the implementation block
@property (nonatomic,copy) id callback;                                                              //@synthesize callback=_callback - In the implementation block
@property (nonatomic,copy) id completion;                                                            //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) AVAudioFile * file;                                                     //@synthesize file=_file - In the implementation block
@property (nonatomic,retain) NSMutableArray * confidentResults;                                      //@synthesize confidentResults=_confidentResults - In the implementation block
@property (assign,nonatomic) long long convergenceLossCount;                                         //@synthesize convergenceLossCount=_convergenceLossCount - In the implementation block
@property (nonatomic,retain) NSDate * firstObservationDate;                                          //@synthesize firstObservationDate=_firstObservationDate - In the implementation block
@property (assign,nonatomic) double timeToConverge;                                                  //@synthesize timeToConverge=_timeToConverge - In the implementation block
@property (assign,nonatomic) BOOL lastObservationWasConfident;                                       //@synthesize lastObservationWasConfident=_lastObservationWasConfident - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                                    //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> analysisQueue;                             //@synthesize analysisQueue=_analysisQueue - In the implementation block
@property (assign,nonatomic) BOOL didMissDeadline;                                                   //@synthesize didMissDeadline=_didMissDeadline - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)invalidate;
+(void)engineWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)invalidate;
-(AVAudioFile *)file;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(AVAudioPlayerNode *)player;
-(void)setPlayer:(AVAudioPlayerNode *)arg1 ;
-(void)setFile:(AVAudioFile *)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(AVAudioEngine *)audioEngine;
-(void)request:(id)arg1 didProduceResult:(id)arg2 ;
-(void)requestDidComplete:(id)arg1 ;
-(void)completeAnalysis;
-(void)setAudioEngine:(AVAudioEngine *)arg1 ;
-(BOOL)startListeningWithReferenceTone:(id)arg1 at:(unsigned long long)arg2 saveToFile:(id)arg3 withCallback:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_setupAndStartAudioSessionWithError:(id*)arg1 ;
-(BOOL)_setupAndStartAudioEngineGraphWithTimeout:(double)arg1 error:(id*)arg2 ;
-(void)_handleIterruption:(id)arg1 ;
-(AVAudioUnit *)mixer;
-(void)setMixer:(AVAudioUnit *)arg1 ;
-(void)setMicrophone:(AVAudioInputNode *)arg1 ;
-(AVAudioInputNode *)microphone;
-(void)_splitMicrophoneAndReferenceToneChannels;
-(void)setConfidentResults:(NSMutableArray *)arg1 ;
-(void)setConvergenceLossCount:(long long)arg1 ;
-(void)setFirstObservationDate:(NSDate *)arg1 ;
-(void)setTimeToConverge:(double)arg1 ;
-(void)setLastObservationWasConfident:(BOOL)arg1 ;
-(void)setStreamAnalyzer:(SNAudioStreamAnalyzer *)arg1 ;
-(void)setEstimateAudioOffsetRequest:(SNEstimateAudioOffsetRequest *)arg1 ;
-(SNAudioStreamAnalyzer *)streamAnalyzer;
-(SNEstimateAudioOffsetRequest *)estimateAudioOffsetRequest;
-(NSObject*<OS_dispatch_queue>)analysisQueue;
-(NSMutableArray *)confidentResults;
-(double)medianOfSortedArray:(id)arg1 ;
-(double)timeToConverge;
-(long long)convergenceLossCount;
-(NSDate *)firstObservationDate;
-(BOOL)lastObservationWasConfident;
-(void)setAnalysisQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)didMissDeadline;
-(void)setDidMissDeadline:(BOOL)arg1 ;
@end

