/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@protocol DSPGMLModel, MLFeatureProvider;
@class MLModelDescription, DSPGMLInputProvider, NSArray;

@interface DSPGCoreMLInfo : NSObject {

	id<DSPGMLModel> _model;
	MLModelDescription* _modelDescription;
	DSPGMLInputProvider* _inputProvider;
	id<MLFeatureProvider> _outputProvider;
	NSArray* _outputs;
	NSArray* _outputLabels;

}

@property (nonatomic,retain) id<DSPGMLModel> model;                              //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) MLModelDescription * modelDescription;              //@synthesize modelDescription=_modelDescription - In the implementation block
@property (nonatomic,retain) DSPGMLInputProvider * inputProvider;                //@synthesize inputProvider=_inputProvider - In the implementation block
@property (nonatomic,retain) id<MLFeatureProvider> outputProvider;               //@synthesize outputProvider=_outputProvider - In the implementation block
@property (nonatomic,retain) NSArray * outputs;                                  //@synthesize outputs=_outputs - In the implementation block
@property (nonatomic,retain) NSArray * outputLabels;                             //@synthesize outputLabels=_outputLabels - In the implementation block
-(id<DSPGMLModel>)model;
-(MLModelDescription *)modelDescription;
-(void)setModel:(id<DSPGMLModel>)arg1 ;
-(NSArray *)outputs;
-(void)setOutputs:(NSArray *)arg1 ;
-(void)setModelDescription:(MLModelDescription *)arg1 ;
-(void)setOutputProvider:(id<MLFeatureProvider>)arg1 ;
-(id<MLFeatureProvider>)outputProvider;
-(DSPGMLInputProvider *)inputProvider;
-(void)setInputProvider:(DSPGMLInputProvider *)arg1 ;
-(NSArray *)outputLabels;
-(void)setOutputLabels:(NSArray *)arg1 ;
@end

