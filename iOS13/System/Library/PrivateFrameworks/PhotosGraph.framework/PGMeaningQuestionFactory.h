/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGSurveyQuestionFactory.h>

@interface PGMeaningQuestionFactory : PGSurveyQuestionFactory
+(id)_meaningLabelsForWhichToGenerateQuestions;
-(unsigned short)questionType;
-(long long)questionOptions;
-(id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)_generateQuestionsFromAssets:(id)arg1 withLocalFactoryScore:(double)arg2 forMeaningLabels:(id)arg3 alreadyGeneratedQuestions:(id)arg4 limit:(unsigned long long)arg5 ;
-(id)_looseMeaningLabelsForMomentNode:(id)arg1 fromCandidateLabels:(id)arg2 inGraph:(id)arg3 ;
-(id)_looseCriteriasForCriteria:(id)arg1 ;
-(id)_expandedDateNodesFromDateNodes:(id)arg1 ;
-(id)_expandedDateNodesFromDateNode:(id)arg1 ;
-(id)_dateNodesFromStartDate:(id)arg1 toEndDate:(id)arg2 ;
@end

