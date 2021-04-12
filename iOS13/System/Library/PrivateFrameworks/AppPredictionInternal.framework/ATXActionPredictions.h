/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@interface ATXActionPredictions : NSObject
+(id)predictionsWithCandidateBundleIdentifiers:(id)arg1 candidateActiontypes:(id)arg2 consumerSubType:(unsigned char)arg3 firstStageScoreLogger:(id)arg4 secondStageScoreLogger:(id)arg5 thirdStageScoreLogger:(id)arg6 multiStageScoreLogger:(id)arg7 ;
+(id)_predictionWithCandidateBundleIdentifiers:(id)arg1 candidateActiontypes:(id)arg2 consumerSubType:(unsigned char)arg3 firstStageScoreLogger:(id)arg4 secondStageScoreLogger:(id)arg5 thirdStageScoreLogger:(id)arg6 multiStageScoreLogger:(id)arg7 ;
+(id)actionsFromActions:(id)arg1 byMovingActionsWithBundleIdentifiers:(id)arg2 toRemainingPredictionItems:(vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >*)arg3 ;
+(void)fetchDataAndUpdateContentAttributeSetForActions:(id)arg1 ;
+(id)showInSpotlightActionsForActionPredictions:(id)arg1 withThreshold:(double)arg2 predictionItems:(vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >*)arg3 ;
+(id)scoredActionsWithoutLog:(id)arg1 ;
+(void)penalizeMultipleActionsPerAppAndKeepSorted:(id)arg1 ;
+(id)sortStageScores:(id)arg1 ;
-(id)init;
@end

