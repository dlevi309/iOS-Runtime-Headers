/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/


@protocol NLModelTrainerDelegate;
@class NLModelConfiguration, NLDataSet, NSDictionary, NLModel, NSError;

@interface NLModelTrainer : NSObject {

	NLModelConfiguration* _configuration;
	NLDataSet* _dataSet;
	NSDictionary* _options;
	NLModel* _model;
	NSError* _trainingError;
	id<NLModelTrainerDelegate> _delegate;
	BOOL _delegateRespondsToLogMessage;
	BOOL _delegateRespondsToShouldStop;

}

@property (copy,readonly) NLModelConfiguration * configuration; 
@property (readonly) NLDataSet * dataSet; 
@property (copy,readonly) NSDictionary * options; 
@property (readonly) id<NLModelTrainerDelegate> delegate; 
@property (copy,readonly) NLModel * trainedModel; 
@property (copy,readonly) NSError * trainingError; 
@property (copy,readonly) NSDictionary * testResults; 
+(id)modelTrainerWithConfiguration:(id)arg1 dataSet:(id)arg2 options:(id)arg3 delegate:(id)arg4 ;
-(id)model;
-(void)logMessage:(id)arg1 ;
-(id<NLModelTrainerDelegate>)delegate;
-(NSDictionary *)options;
-(void)trainModel;
-(void)setModel:(id)arg1 ;
-(BOOL)shouldStop;
-(NLModelConfiguration *)configuration;
-(NLDataSet *)dataSet;
-(NLModel *)trainedModel;
-(NSError *)trainingError;
-(id)initWithConfiguration:(id)arg1 dataSet:(id)arg2 options:(id)arg3 delegate:(id)arg4 ;
-(Class)modelImplClass;
-(void)setTrainingError:(NSError *)arg1 ;
-(NSDictionary *)testResults;
-(void)trainer:(id)arg1 logMessage:(id)arg2 ;
-(BOOL)trainerShouldStop:(id)arg1 ;
@end

