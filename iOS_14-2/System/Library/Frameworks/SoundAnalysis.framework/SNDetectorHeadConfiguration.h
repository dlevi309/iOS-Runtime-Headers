/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@protocol SNProcessorCreating, SNMLModel;
@class NSString;

@interface SNDetectorHeadConfiguration : NSObject {

	unsigned _windowLengthFrames;
	unsigned _stepSizeFrames;
	id<SNProcessorCreating> _featureExtractorConfiguration;
	id<SNMLModel> _model;
	NSString* _outputLabel;
	double _sampleRate;

}

@property (nonatomic,readonly) id<SNProcessorCreating> featureExtractorConfiguration;              //@synthesize featureExtractorConfiguration=_featureExtractorConfiguration - In the implementation block
@property (nonatomic,readonly) id<SNMLModel> model;                                                //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) NSString * outputLabel;                                             //@synthesize outputLabel=_outputLabel - In the implementation block
@property (nonatomic,readonly) double sampleRate;                                                  //@synthesize sampleRate=_sampleRate - In the implementation block
@property (nonatomic,readonly) unsigned windowLengthFrames;                                        //@synthesize windowLengthFrames=_windowLengthFrames - In the implementation block
@property (nonatomic,readonly) unsigned stepSizeFrames;                                            //@synthesize stepSizeFrames=_stepSizeFrames - In the implementation block
-(id<SNMLModel>)model;
-(double)sampleRate;
-(NSString *)outputLabel;
-(unsigned)windowLengthFrames;
-(id<SNProcessorCreating>)featureExtractorConfiguration;
-(unsigned)stepSizeFrames;
-(id)initWithMLModel:(id)arg1 outputLabel:(id)arg2 sampleRate:(double)arg3 windowLengthFrames:(unsigned)arg4 stepSizeFrames:(unsigned)arg5 featureExtractorConfiguration:(id)arg6 ;
@end

