/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/PMLLogRegTrackerProtocol.h>
#import <libobjc.A.dylib/PMLLinRegTrackerProtocol.h>
#import <libobjc.A.dylib/PMLEvaluationTrackerProtocol.h>
#import <libobjc.A.dylib/PMLMultiLabelEvaluationTrackerProtocol.h>

@protocol PMLTrackerAdapterProtocol;
@class AWDProactiveModelFittingModelInfo, NSString;

@interface PMLProtoBufTracker : NSObject <PMLLogRegTrackerProtocol, PMLLinRegTrackerProtocol, PMLEvaluationTrackerProtocol, PMLMultiLabelEvaluationTrackerProtocol> {

	AWDProactiveModelFittingModelInfo* _modelInfo;
	unsigned long long _quantizationNumberOfBuckets;
	id<PMLTrackerAdapterProtocol> _adapter;

}

@property (readonly) id<PMLTrackerAdapterProtocol> adapter;                       //@synthesize adapter=_adapter - In the implementation block
@property (readonly) AWDProactiveModelFittingModelInfo * modelInfo;               //@synthesize modelInfo=_modelInfo - In the implementation block
@property (readonly) unsigned long long quantizationNumberOfBuckets;              //@synthesize quantizationNumberOfBuckets=_quantizationNumberOfBuckets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageForGradient:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 serverIteration:(unsigned long long)arg5 modelInfo:(id)arg6 numberOfBuckets:(unsigned long long)arg7 ;
+(id)messageForWeights:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 modelInfo:(id)arg5 numberOfBuckets:(unsigned long long)arg6 ;
+(id)trackerForPlanId:(id)arg1 ;
+(id)awdTrackerForPlanId:(id)arg1 ;
+(id)parsecTrackerForPlanId:(id)arg1 ;
-(id)init;
-(AWDProactiveModelFittingModelInfo *)modelInfo;
-(id<PMLTrackerAdapterProtocol>)adapter;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initWithAdapter:(id)arg1 modelInfo:(id)arg2 ;
-(id)trackPrecisionAtK:(id)arg1 ;
-(id)trackPrecisionAtK:(id)arg1 minibatchStats:(id)arg2 ;
-(id)trackEvaluationMetrics:(id)arg1 minibatchStats:(id)arg2 ;
-(id)trackWeights:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 ;
-(id)trackGradient:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 serverIteration:(unsigned long long)arg5 ;
-(void)trackObjectiveFeatures:(id)arg1 featureMatrix:(id)arg2 minibatchSize:(unsigned long long)arg3 support:(float)arg4 ;
-(id)initWithAdapter:(id)arg1 modelInfo:(id)arg2 quantizationBuckets:(unsigned long long)arg3 ;
-(unsigned long long)quantizationNumberOfBuckets;
@end

