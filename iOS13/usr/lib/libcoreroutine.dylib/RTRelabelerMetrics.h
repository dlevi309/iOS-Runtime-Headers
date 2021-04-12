/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTMetric.h>
#import <libobjc.A.dylib/RTMetricProtocol.h>

@class RTRelabeler, NSString;

@interface RTRelabelerMetrics : RTMetric <RTMetricProtocol> {

	RTRelabeler* _relabeler;

}

@property (nonatomic,retain) RTRelabeler * relabeler;               //@synthesize relabeler=_relabeler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SCD_Struct_RT3)event;
+(id)supportedMetricKeys;
+(id)booleanKeys;
+(id)unsignedIntegerKeys;
+(id)integerKeys;
+(id)doubleKeys;
+(id)bucketedKeys;
-(BOOL)submitMetricsWithError:(id*)arg1 ;
-(id)initWithRelabeler:(id)arg1 ;
-(void)setErrorMetrics:(id)arg1 ;
-(id)initWithLoggingEnabled:(BOOL)arg1 ;
-(void)setPreprocessedMetricsUsingInputCandidate:(id)arg1 contextCandidates:(id)arg2 ;
-(void)setFilteredInputMetricsUsingContextCandidates:(id)arg1 ;
-(void)setNonRevGeoCandidates:(id)arg1 revGeoCandidates:(id)arg2 ;
-(void)setNumberOfUniqueMapItems:(id)arg1 ;
-(void)setOutputMetricsUsingInputCandidate:(id)arg1 priorVector:(id)arg2 observationVector:(id)arg3 posteriorVector:(id)arg4 relabeledProbVector:(id)arg5 relabeledInferredMapItem:(id)arg6 ;
-(id)getUUIDForPotentialRelabelingItemUsingInputCandidate:(id)arg1 relabeledProbVector:(id)arg2 ;
-(double)logMax2ConfidenceRatioOfRelabeledProbVector:(id)arg1 ;
-(id)maxUUIDOfProbVector:(id)arg1 ;
-(double)calculateEntropyOfProbVector:(id)arg1 ;
-(void)setDerivedMetrics;
-(RTRelabeler *)relabeler;
-(void)setRelabeler:(RTRelabeler *)arg1 ;
@end

