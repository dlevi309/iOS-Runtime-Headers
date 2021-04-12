/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMICameraVideoFrameSelectorDelegate.h>

@class NSDate, HMICameraVideoFragment, HMICameraVideoResourceAttributes, HMICameraVideoEncoderSession, HMICameraVideoPosterFrameGenerator, HMICameraVideoFrameSelector, HMICameraVideoAssetReader, HMICameraVideoAnalyzer, NSMutableArray, HMICameraVideoAnalyzerRequestLog, NSArray, NSString;

@interface HMICameraVideoAnalyzerRequest : HMFObject <HMICameraVideoFrameSelectorDelegate> {

	NSDate* _analysisSubmissionTime;
	NSDate* _analysisStartTime;
	double _maxAnalysisFPS;
	double _analysisFPS;
	HMICameraVideoFragment* _fragment;
	HMICameraVideoResourceAttributes* _attributes;
	HMICameraVideoEncoderSession* _encoderSession;
	HMICameraVideoPosterFrameGenerator* _posterFrameGenerator;
	HMICameraVideoFrameSelector* _frameSelector;
	HMICameraVideoAssetReader* _assetReader;
	HMICameraVideoAnalyzer* _analyzer;
	long long _events;
	long long _eventTypes;
	NSMutableArray* _videoFrameResults;
	NSMutableArray* _significantEventsInternal;
	HMICameraVideoAnalyzerRequestLog* _log;
	long long _phase;
	long long _flag;

}

@property (readonly) NSMutableArray * significantEventsInternal;                             //@synthesize significantEventsInternal=_significantEventsInternal - In the implementation block
@property (readonly) HMICameraVideoAnalyzerRequestLog * log;                                 //@synthesize log=_log - In the implementation block
@property (assign) long long phase;                                                          //@synthesize phase=_phase - In the implementation block
@property (assign) long long flag;                                                           //@synthesize flag=_flag - In the implementation block
@property (readonly) NSDate * analysisSubmissionTime;                                        //@synthesize analysisSubmissionTime=_analysisSubmissionTime - In the implementation block
@property (readonly) double timeSinceAnalysisSubmission; 
@property (readonly) NSDate * analysisStartTime;                                             //@synthesize analysisStartTime=_analysisStartTime - In the implementation block
@property (readonly) double timeSinceAnalysisStart; 
@property (readonly) double maxAnalysisFPS;                                                  //@synthesize maxAnalysisFPS=_maxAnalysisFPS - In the implementation block
@property (readonly) double analysisFPS;                                                     //@synthesize analysisFPS=_analysisFPS - In the implementation block
@property (readonly) HMICameraVideoFragment * fragment;                                      //@synthesize fragment=_fragment - In the implementation block
@property (readonly) HMICameraVideoResourceAttributes * attributes;                          //@synthesize attributes=_attributes - In the implementation block
@property (readonly) HMICameraVideoEncoderSession * encoderSession;                          //@synthesize encoderSession=_encoderSession - In the implementation block
@property (readonly) HMICameraVideoPosterFrameGenerator * posterFrameGenerator;              //@synthesize posterFrameGenerator=_posterFrameGenerator - In the implementation block
@property (readonly) HMICameraVideoFrameSelector * frameSelector;                            //@synthesize frameSelector=_frameSelector - In the implementation block
@property (readonly) HMICameraVideoAssetReader * assetReader;                                //@synthesize assetReader=_assetReader - In the implementation block
@property (readonly) HMICameraVideoAnalyzer * analyzer;                                      //@synthesize analyzer=_analyzer - In the implementation block
@property (assign) long long events;                                                         //@synthesize events=_events - In the implementation block
@property (readonly) long long eventTypes;                                                   //@synthesize eventTypes=_eventTypes - In the implementation block
@property (retain) NSMutableArray * videoFrameResults;                                       //@synthesize videoFrameResults=_videoFrameResults - In the implementation block
@property (readonly) NSArray * significantEvents; 
@property (readonly) BOOL shouldSkipAnalysis; 
@property (readonly) BOOL shouldFailAnalysis; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)videoAnnotationScoresForFrameResult:(id)arg1 ;
-(HMICameraVideoFragment *)fragment;
-(void)cancel;
-(HMICameraVideoResourceAttributes *)attributes;
-(HMICameraVideoAnalyzerRequestLog *)log;
-(long long)events;
-(void)setEvents:(long long)arg1 ;
-(void)setFlag:(long long)arg1 ;
-(long long)phase;
-(void)setPhase:(long long)arg1 ;
-(long long)flag;
-(NSArray *)significantEvents;
-(HMICameraVideoAnalyzer *)analyzer;
-(HMICameraVideoAssetReader *)assetReader;
-(double)analysisFPS;
-(long long)eventTypes;
-(NSMutableArray *)significantEventsInternal;
-(id)loadAttributesFromVideoFragment:(id)arg1 ;
-(NSDate *)analysisSubmissionTime;
-(HMICameraVideoEncoderSession *)encoderSession;
-(double)maxAnalysisFPS;
-(NSMutableArray *)videoFrameResults;
-(HMICameraVideoPosterFrameGenerator *)posterFrameGenerator;
-(double)timeSinceAnalysisStart;
-(double)timeSinceAnalysisSubmission;
-(NSDate *)analysisStartTime;
-(void)selector:(id)arg1 maySelectFrame:(id)arg2 ;
-(id)initWithVideoFragment:(id)arg1 analyzer:(id)arg2 maxAnalysisFPS:(double)arg3 ;
-(void)addSignificantEvent:(id)arg1 ;
-(void)markForPrediction;
-(BOOL)shouldSkipAnalysis;
-(BOOL)shouldFailAnalysis;
-(void)loadAttributes;
-(void)startAnalysis;
-(BOOL)startEncodingSessionWithError:(id*)arg1 ;
-(BOOL)startPosterFrameGeneratorWithInterval:(unsigned long long)arg1 frameHeight:(unsigned long long)arg2 ;
-(BOOL)startAssetReaderWithWorkQueue:(id)arg1 logIdentifier:(id)arg2 ;
-(BOOL)startFrameSelector;
-(id)finishEncoderSession;
-(id)makeDidAnalyzeResult;
-(id)makeDidNotAnalyzeResultWithResultCode:(long long)arg1 ;
-(HMICameraVideoFrameSelector *)frameSelector;
-(void)setVideoFrameResults:(NSMutableArray *)arg1 ;
@end

