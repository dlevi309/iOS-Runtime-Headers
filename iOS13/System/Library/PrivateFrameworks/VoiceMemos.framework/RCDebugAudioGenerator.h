/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject, NSDictionary;

@interface RCDebugAudioGenerator : NSObject {

	NSURL* _outputURL;
	double _duration;
	double _intervalBetweenPeaks;
	NSObject*<OS_dispatch_queue> _completionQueue;
	/*^block*/id _generateCompletionHandler;
	NSDictionary* _outputSettings;
	/*^block*/id _curveFunction;

}

@property (nonatomic,readonly) id generateCompletionHandler;                            //@synthesize generateCompletionHandler=_generateCompletionHandler - In the implementation block
@property (nonatomic,readonly) NSDictionary * outputSettings;                           //@synthesize outputSettings=_outputSettings - In the implementation block
@property (nonatomic,readonly) id curveFunction;                                        //@synthesize curveFunction=_curveFunction - In the implementation block
@property (nonatomic,readonly) NSURL * outputURL;                                       //@synthesize outputURL=_outputURL - In the implementation block
@property (nonatomic,readonly) double duration;                                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double intervalBetweenPeaks;                             //@synthesize intervalBetweenPeaks=_intervalBetweenPeaks - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
+(id)_defaultOutputSettings;
+(/*^block*/id)_defaultCurveFunction;
-(double)duration;
-(NSURL *)outputURL;
-(NSDictionary *)outputSettings;
-(BOOL)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(void)_onBackgroundQueueGenerateAudio;
-(void)_onQueueGenerateFailedWithError:(id)arg1 ;
-(double)intervalBetweenPeaks;
-(id)_generateLPCMAudioSamplesWithDuration:(double)arg1 curveFunction:(/*^block*/id)arg2 samplesPerSecond:(double)arg3 intervalBetweenPeaks:(double)arg4 ;
-(void)_onQueueGenerateFinished;
-(id)initWithOutputURL:(id)arg1 duration:(double)arg2 intervalBetweenPeaks:(double)arg3 ;
-(id)generateCompletionHandler;
-(id)curveFunction;
@end

