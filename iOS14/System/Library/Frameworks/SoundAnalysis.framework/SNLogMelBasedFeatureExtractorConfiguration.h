/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/SNProcessorCreating.h>

@protocol SNMLModel;
@class NSString;

@interface SNLogMelBasedFeatureExtractorConfiguration : NSObject <SNProcessorCreating> {

	id<SNMLModel> _model;
	unsigned _windowLengthFrames;
	unsigned _stepSizeFrames;
	unsigned _logMelStepSize;
	int _outputFeatureSize;
	double _sampleRate;

}

@property (readonly) id<SNMLModel> model;                           //@synthesize model=_model - In the implementation block
@property (readonly) double sampleRate;                             //@synthesize sampleRate=_sampleRate - In the implementation block
@property (readonly) unsigned windowLengthFrames;                   //@synthesize windowLengthFrames=_windowLengthFrames - In the implementation block
@property (readonly) unsigned stepSizeFrames;                       //@synthesize stepSizeFrames=_stepSizeFrames - In the implementation block
@property (readonly) unsigned logMelStepSize;                       //@synthesize logMelStepSize=_logMelStepSize - In the implementation block
@property (readonly) int outputFeatureSize;                         //@synthesize outputFeatureSize=_outputFeatureSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SNMLModel>)model;
-(unsigned long long)hash;
-(double)sampleRate;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)windowLengthFrames;
-(unsigned)stepSizeFrames;
-(id)initWithModel:(id)arg1 approximateOverlapFactor:(double)arg2 ;
-(BOOL)isEqualToLogMelBasedFeatureExtractorConfiguration:(id)arg1 ;
-(id)createProcessorWithError:(id*)arg1 ;
-(unsigned)logMelStepSize;
-(int)outputFeatureSize;
@end

