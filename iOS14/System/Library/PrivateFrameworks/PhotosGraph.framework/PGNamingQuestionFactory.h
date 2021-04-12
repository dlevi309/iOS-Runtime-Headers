/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGSurveyQuestionFactory.h>

@class PHFetchResult;

@interface PGNamingQuestionFactory : PGSurveyQuestionFactory {

	PHFetchResult* _persons;

}

@property (nonatomic,retain) PHFetchResult * persons;              //@synthesize persons=_persons - In the implementation block
-(PHFetchResult *)persons;
-(unsigned short)questionType;
-(void)setPersons:(PHFetchResult *)arg1 ;
-(long long)questionOptions;
-(id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(/*^block*/id)arg2 ;
-(BOOL)_shouldAddNewNamingQuestionForPersonUUID:(id)arg1 ;
-(BOOL)_persistQuestions:(id)arg1 questionsToRemove:(id)arg2 ;
@end

