/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/PMLLogRegTrackerProtocol.h>
#import <libobjc.A.dylib/PMLEvaluationTrackerProtocol.h>
#import <libobjc.A.dylib/PMLMultiLabelEvaluationTrackerProtocol.h>

@class NSString;

@interface PMLFidesTracker : NSObject <PMLLogRegTrackerProtocol, PMLEvaluationTrackerProtocol, PMLMultiLabelEvaluationTrackerProtocol> {

	NSString* _planId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)trackPrecisionAtK:(id)arg1 ;
-(id)trackPrecisionAtK:(id)arg1 minibatchStats:(id)arg2 ;
-(id)trackEvaluationMetrics:(id)arg1 minibatchStats:(id)arg2 ;
-(id)trackWeights:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 ;
-(id)trackGradient:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 serverIteration:(unsigned long long)arg5 ;
-(id)initWithPlanId:(id)arg1 ;
@end
