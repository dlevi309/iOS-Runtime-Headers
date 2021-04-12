/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <SymptomEvaluator/AVFlowDetector.h>

@interface StrictlyPeriodicAVFlowDetector : AVFlowDetector {

	double _maxPeriodicAVTCPFlowBusyInterval;
	double _minPeriodicAVTCPFlowCycleTime;
	double _maxPeriodicAVTCPFlowCycleTime;
	double _maxPeriodicAVTCPFlowCycleVariance;
	unsigned long long _minPeriodicAVTCPFlowCyclesToConsider;
	unsigned long long _maxPeriodicAVTCPFlowCyclesToConsider;
	double _maxPeriodicAVUDPFlowBusyInterval;
	double _minPeriodicAVUDPFlowCycleTime;
	double _maxPeriodicAVUDPFlowCycleTime;
	double _maxPeriodicAVUDPFlowCycleVariance;
	unsigned long long _minPeriodicAVUDPFlowCyclesToConsider;
	unsigned long long _maxPeriodicAVUDPFlowCyclesToConsider;
	unsigned _scoreBaselinePass;
	unsigned _scorePerCycleIncrement;
	unsigned _scoreTCIncrement;
	unsigned _scoreMax;

}
-(id)init;
-(id)getState:(BOOL)arg1 ;
-(void)setDefaults;
-(int)setConfiguration:(id)arg1 ;
-(int)possibleAVFlowScore:(id)arg1 result:(AVFlowDetectionResult*)arg2 ;
@end

