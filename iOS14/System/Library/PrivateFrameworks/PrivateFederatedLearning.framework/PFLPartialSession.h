/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <libobjc.A.dylib/PFLResumable.h>
#import <libobjc.A.dylib/PFLTaskStateProvider.h>

@protocol MLBatchProvider, PFLTaskState;
@class NSURL, PFLUpdateConfiguration, NSString;

@interface PFLPartialSession : NSObject <PFLResumable, PFLTaskStateProvider> {

	NSURL* _modelURL;
	id<MLBatchProvider> _trainingData;
	PFLUpdateConfiguration* _configuration;
	/*^block*/id _completionHandler;
	id<PFLTaskState> _currentState;

}

@property (nonatomic,readonly) NSURL * modelURL;                                    //@synthesize modelURL=_modelURL - In the implementation block
@property (nonatomic,readonly) id<MLBatchProvider> trainingData;                    //@synthesize trainingData=_trainingData - In the implementation block
@property (nonatomic,readonly) PFLUpdateConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) id<PFLTaskState> currentState;                         //@synthesize currentState=_currentState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCurrentState:(id<PFLTaskState>)arg1 ;
-(void)suspend;
-(NSURL *)modelURL;
-(id<PFLTaskState>)currentState;
-(id)layerNames;
-(id)completionHandler;
-(id)modelConfiguration;
-(id<MLBatchProvider>)trainingData;
-(PFLUpdateConfiguration *)configuration;
-(id)dataProvider;
-(void)resume;
-(double)privatizationNormMax;
-(unsigned long long)privatizationNormBinCount;
-(double)validationSplit;
-(id)compiledModelURL;
-(id)initWithModelAtURL:(id)arg1 trainingData:(id)arg2 configuration:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)resumeWithState:(id)arg1 ;
@end

