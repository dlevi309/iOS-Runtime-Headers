/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <libobjc.A.dylib/PFLTaskState.h>

@class NSURL, PFLModelHandler, NSArray, NSDictionary, NSNumber;

@interface PFLTaskStateTraining : NSObject <PFLTaskState> {

	NSURL* _compiledModelURL;
	PFLModelHandler* _modelHandler;
	NSArray* _trainingIndicies;
	NSDictionary* _metrics;
	NSNumber* _numValidationSamples;

}

@property (nonatomic,readonly) NSURL * compiledModelURL;                     //@synthesize compiledModelURL=_compiledModelURL - In the implementation block
@property (nonatomic,readonly) PFLModelHandler * modelHandler;               //@synthesize modelHandler=_modelHandler - In the implementation block
@property (nonatomic,readonly) NSArray * trainingIndicies;                   //@synthesize trainingIndicies=_trainingIndicies - In the implementation block
@property (nonatomic,readonly) NSDictionary * metrics;                       //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) NSNumber * numValidationSamples;              //@synthesize numValidationSamples=_numValidationSamples - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)metrics;
-(void)suspend;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)tag;
-(id)initWithCoder:(id)arg1 ;
-(void)resume:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSURL *)compiledModelURL;
-(NSArray *)trainingIndicies;
-(id)initWithCompiledModelURL:(id)arg1 modelHandler:(id)arg2 trainingDataIndicies:(id)arg3 metrics:(id)arg4 numValidationSamples:(id)arg5 ;
-(NSNumber *)numValidationSamples;
-(PFLModelHandler *)modelHandler;
@end

