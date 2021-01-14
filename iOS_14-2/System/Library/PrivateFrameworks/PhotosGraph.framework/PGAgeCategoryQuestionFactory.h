/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGSurveyQuestionFactory.h>

@interface PGAgeCategoryQuestionFactory : PGSurveyQuestionFactory
-(unsigned short)questionType;
-(long long)questionOptions;
-(id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)_sortedAgeCategories;
-(BOOL)_shouldAddNewAgeCategoryQuestionForPersonUUID:(id)arg1 ;
@end

