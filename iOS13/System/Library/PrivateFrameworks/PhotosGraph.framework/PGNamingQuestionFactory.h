/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGSurveyQuestionFactory.h>

@class PHFetchResult;

@interface PGNamingQuestionFactory : PGSurveyQuestionFactory {

	PHFetchResult* _persons;

}

@property (nonatomic,retain) PHFetchResult * persons;              //@synthesize persons=_persons - In the implementation block
-(unsigned short)questionType;
-(PHFetchResult *)persons;
-(void)setPersons:(PHFetchResult *)arg1 ;
-(long long)questionOptions;
-(id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(/*^block*/id)arg2 ;
@end

