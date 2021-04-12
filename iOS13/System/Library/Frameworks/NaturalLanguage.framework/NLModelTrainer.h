/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/


@protocol NLModelTrainerDelegate;
@class NLModelConfiguration, NLDataSet, NSDictionary, NLModel;

@interface NLModelTrainer : NSObject {

	NLModelConfiguration* _configuration;
	NLDataSet* _dataSet;
	NSDictionary* _options;
	NLModel* _model;
	id<NLModelTrainerDelegate> _delegate;
	BOOL _delegateRespondsToLogMessage;
	BOOL _delegateRespondsToShouldStop;

}

@property (copy,readonly) NLModelConfiguration * configuration; 
@property (readonly) NLDataSet * dataSet; 
@property (copy,readonly) NSDictionary * options; 
@property (readonly) id<NLModelTrainerDelegate> delegate; 
@property (copy,readonly) NLModel * trainedModel; 
@property (copy,readonly) NSDictionary * testResults; 
+(id)modelTrainerWithConfiguration:(id)arg1 dataSet:(id)arg2 options:(id)arg3 delegate:(id)arg4 ;
-(NSDictionary *)options;
-(id<NLModelTrainerDelegate>)delegate;
-(id)model;
-(void)setModel:(id)arg1 ;
-(NLModelConfiguration *)configuration;
-(void)logMessage:(id)arg1 ;
-(BOOL)shouldStop;
-(NLDataSet *)dataSet;
-(void)trainModel;
-(NLModel *)trainedModel;
-(id)initWithConfiguration:(id)arg1 dataSet:(id)arg2 options:(id)arg3 delegate:(id)arg4 ;
-(Class)modelImplClass;
-(NSDictionary *)testResults;
-(void)trainer:(id)arg1 logMessage:(id)arg2 ;
-(BOOL)trainerShouldStop:(id)arg1 ;
@end

