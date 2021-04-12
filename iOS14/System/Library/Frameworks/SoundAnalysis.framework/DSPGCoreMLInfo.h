/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@protocol SNMLModel, MLFeatureProvider;
@class NSArray, DSPGMLInputProvider;

@interface DSPGCoreMLInfo : NSObject {

	id<SNMLModel> _model;
	NSArray* _feedbackConnections;
	DSPGMLInputProvider* _inputProvider;
	id<MLFeatureProvider> _outputProvider;

}

@property (nonatomic,retain) id<SNMLModel> model;                               //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSArray * feedbackConnections;                     //@synthesize feedbackConnections=_feedbackConnections - In the implementation block
@property (nonatomic,retain) DSPGMLInputProvider * inputProvider;               //@synthesize inputProvider=_inputProvider - In the implementation block
@property (nonatomic,retain) id<MLFeatureProvider> outputProvider;              //@synthesize outputProvider=_outputProvider - In the implementation block
-(id<SNMLModel>)model;
-(void)setOutputProvider:(id<MLFeatureProvider>)arg1 ;
-(void)setModel:(id<SNMLModel>)arg1 ;
-(id<MLFeatureProvider>)outputProvider;
-(DSPGMLInputProvider *)inputProvider;
-(void)setInputProvider:(DSPGMLInputProvider *)arg1 ;
-(NSArray *)feedbackConnections;
-(void)setFeedbackConnections:(NSArray *)arg1 ;
@end

