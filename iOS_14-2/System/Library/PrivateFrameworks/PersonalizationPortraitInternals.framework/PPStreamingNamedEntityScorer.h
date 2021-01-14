/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class PPScoreInterpreter, PPScoreDict;

@interface PPStreamingNamedEntityScorer : NSObject {

	PPScoreInterpreter* _aggregationScorer;
	PPScoreInterpreter* _finalScorer;
	PPScoreDict* _aggregationScoreInputs;
	PPScoreDict* _currentAggResult;

}
@end

