/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSMutableSet;

@interface PXSurveyQuestionsDataSource : NSObject {

	unsigned long long _numberOfQuestionsGenerated;
	NSMutableSet* _answeredGadgetIdentifiers;

}

@property (nonatomic,readonly) unsigned long long numberOfQuestionsRemainingToBeAnswered; 
+(id)mostRecentQuestionCreationDate;
-(id)init;
-(void)resetGeneratedQuestions;
-(void)didGenerateNumberOfGadgets:(unsigned long long)arg1 ;
-(BOOL)didAnswerQuestionForGadgetIdentifier:(id)arg1 ;
-(void)didRemoveGadgetWithIdentifier:(id)arg1 ;
-(unsigned long long)numberOfQuestionsRemainingToBeAnswered;
-(id)fetchSortedAllUnansweredQuestionsWithLimit:(unsigned long long)arg1 ;
-(unsigned long long)fetchTotalNumberOfUnansweredQuestions;
-(unsigned long long)fetchTotalNumberOfAnsweredYesOrNoQuestions;
-(id)_fetchOptionsForShouldPrefetchCount:(BOOL)arg1 ;
-(void)invalidateQuestions:(id)arg1 ;
@end

