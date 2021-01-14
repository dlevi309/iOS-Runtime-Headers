/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <SymptomEvaluator/AVFlowDetector.h>

@interface ContinuousAVFlowDetector : AVFlowDetector {

	unsigned long long _minUDPFlowSamplesForAudioVideoDetermination;
	double _minUDPFlowElapsedTimeForAudioVideoDetermination;
	double _minUDPFlowDuplexThroughputForAudioVideoDetermination;
	unsigned long long _minTCPFlowSamplesForAudioVideoDetermination;
	double _minTCPFlowElapsedTimeForAudioVideoDetermination;
	double _minTCPFlowDuplexThroughputForAudioVideoDetermination;

}
-(id)init;
-(void)setDefaults;
-(int)possibleAVFlowScore:(id)arg1 result:(AVFlowDetectionResult*)arg2 ;
@end

