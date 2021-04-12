/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIVideoEncoderDelegate.h>
#import <libobjc.A.dylib/HMIVideoRetimerDelegate.h>
#import <libobjc.A.dylib/HMIVideoFrameSamplerDelegate.h>
#import <libobjc.A.dylib/HMICameraVideoFrameSelectorDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSDate, HMICameraVideoFragment, HMICameraVideoResourceAttributes, HMIVideoEncoder, HMIVideoRetimer, HMIVideoFrameSampler, NSMutableArray, HMIVideoAssetWriter, HMICameraVideoPosterFrameGenerator, HMICameraVideoFrameSelector, HMICameraVideoAssetReader, HMICameraVideoAnalyzer, NSArray, NSString;

@interface HMICameraVideoAnalyzerRequest : HMFObject <HMIVideoEncoderDelegate, HMIVideoRetimerDelegate, HMIVideoFrameSamplerDelegate, HMICameraVideoFrameSelectorDelegate, HMFLogging> {

	NSDate* _analysisSubmissionTime;
	NSDate* _analysisStartTime;
	double _maxAnalysisFPS;
	double _analysisFPS;
	HMICameraVideoFragment* _fragment;
	HMICameraVideoResourceAttributes* _attributes;
	HMIVideoEncoder* _encoder;
	HMIVideoRetimer* _retimer;
	HMIVideoFrameSampler* _frameSampler;
	NSMutableArray* _audioSamples;
	HMIVideoAssetWriter* _assetWriter;
	HMICameraVideoPosterFrameGenerator* _posterFrameGenerator;
	HMICameraVideoFrameSelector* _frameSelector;
	HMICameraVideoAssetReader* _assetReader;
	HMICameraVideoAnalyzer* _analyzer;
	long long _eventTypes;
	NSMutableArray* _videoFrameResults;
	NSMutableArray* _significantEventsInternal;
	long long _phase;
	long long _flag;

}

@property (readonly) NSMutableArray * significantEventsInternal;                             //@synthesize significantEventsInternal=_significantEventsInternal - In the implementation block
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
@property (readonly) HMIVideoEncoder * encoder;                                              //@synthesize encoder=_encoder - In the implementation block
@property (readonly) HMIVideoRetimer * retimer;                                              //@synthesize retimer=_retimer - In the implementation block
@property (readonly) HMIVideoFrameSampler * frameSampler;                                    //@synthesize frameSampler=_frameSampler - In the implementation block
@property (readonly) NSMutableArray * audioSamples;                                          //@synthesize audioSamples=_audioSamples - In the implementation block
@property (readonly) HMIVideoAssetWriter * assetWriter;                                      //@synthesize assetWriter=_assetWriter - In the implementation block
@property (readonly) HMICameraVideoPosterFrameGenerator * posterFrameGenerator;              //@synthesize posterFrameGenerator=_posterFrameGenerator - In the implementation block
@property (readonly) HMICameraVideoFrameSelector * frameSelector;                            //@synthesize frameSelector=_frameSelector - In the implementation block
@property (readonly) HMICameraVideoAssetReader * assetReader;                                //@synthesize assetReader=_assetReader - In the implementation block
@property (readonly) HMICameraVideoAnalyzer * analyzer;                                      //@synthesize analyzer=_analyzer - In the implementation block
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
-(HMICameraVideoFragment *)fragment;
-(HMICameraVideoAnalyzer *)analyzer;
-(id)logIdentifier;
-(HMICameraVideoResourceAttributes *)attributes;
-(long long)flag;
-(HMIVideoEncoder *)encoder;
-(void)setFlag:(long long)arg1 ;
-(NSArray *)significantEvents;
-(long long)phase;
-(HMIVideoRetimer *)retimer;
-(void)cancel;
-(void)setPhase:(long long)arg1 ;
-(long long)eventTypes;
-(HMICameraVideoAssetReader *)assetReader;
-(HMIVideoAssetWriter *)assetWriter;
-(double)analysisFPS;
-(NSMutableArray *)significantEventsInternal;
-(id)loadAttributesFromVideoFragment:(id)arg1 ;
-(NSDate *)analysisSubmissionTime;
-(HMIVideoFrameSampler *)frameSampler;
-(double)maxAnalysisFPS;
-(NSMutableArray *)audioSamples;
-(HMICameraVideoPosterFrameGenerator *)posterFrameGenerator;
-(NSMutableArray *)videoFrameResults;
-(double)timeSinceAnalysisStart;
-(double)timeSinceAnalysisSubmission;
-(NSDate *)analysisStartTime;
-(void)encoder:(id)arg1 didEncodeSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)encoder:(id)arg1 didFailWithError:(id)arg2 ;
-(void)retimer:(id)arg1 didRetimeSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)frameSampler:(id)arg1 didSampleFrame:(opaqueCMSampleBufferRef)arg2 ;
-(void)selector:(id)arg1 maySelectFrame:(id)arg2 ;
-(void)selector:(id)arg1 didDetectMotion:(id)arg2 atSessionPTS:(SCD_Struct_HM3)arg3 frameDimensions:(CGSize)arg4 ;
-(id)initWithVideoFragment:(id)arg1 analyzer:(id)arg2 maxAnalysisFPS:(double)arg3 ;
-(void)addSignificantEvent:(id)arg1 ;
-(void)markForPrediction;
-(BOOL)shouldSkipAnalysis;
-(BOOL)shouldFailAnalysis;
-(void)loadAttributes;
-(void)startAnalysis;
-(BOOL)startEncodingSessionForAsset:(id)arg1 expectedFrameRate:(long long)arg2 error:(id*)arg3 ;
-(BOOL)startPosterFrameGeneratorWithInterval:(unsigned long long)arg1 frameHeight:(unsigned long long)arg2 ;
-(BOOL)startAssetReaderWithWorkQueue:(id)arg1 logIdentifier:(id)arg2 ;
-(BOOL)startFrameSelector;
-(id)finishEncoderSession;
-(id)makeDidAnalyzeResult;
-(id)makeDidNotAnalyzeResultWithResultCode:(long long)arg1 ;
-(HMICameraVideoFrameSelector *)frameSelector;
-(void)setVideoFrameResults:(NSMutableArray *)arg1 ;
@end

