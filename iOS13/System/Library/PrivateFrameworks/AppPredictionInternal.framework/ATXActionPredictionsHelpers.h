/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@interface ATXActionPredictionsHelpers : NSObject
+(id)processCandidateActionPredictions:(id)arg1 limit:(int)arg2 predictionItemsToKeep:(vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >*)arg3 ;
+(void)keepRandomPredictionItems:(id)arg1 limit:(unsigned long long)arg2 predictionItemsToKeep:(vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >*)arg3 ;
+(void)sortPredictions:(id)arg1 ;
+(id)sortedPredictions:(id)arg1 ;
+(id)limitTheNumberOfPredictions:(id)arg1 withLimit:(int)arg2 ;
+(void)applyJointLogProbabilityToActionPredictions:(id)arg1 withAppActionTypePredictionScore:(double)arg2 ;
+(void)applyNormalizationToPredictions:(id)arg1 ;
+(void)applyLogOfLinearProbabilityTransformationToPredictions:(id)arg1 ;
+(void)applyLogSoftmaxToPredictions:(id)arg1 ;
@end

