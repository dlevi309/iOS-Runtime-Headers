/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGSurveyQuestionFactory.h>

@class PHFetchResult;

@interface PGFrequentLocationQuestionFactory : PGSurveyQuestionFactory {

	PHFetchResult* _existingFrequentLocationQuestions;

}

@property (nonatomic,retain) PHFetchResult * existingFrequentLocationQuestions;              //@synthesize existingFrequentLocationQuestions=_existingFrequentLocationQuestions - In the implementation block
-(unsigned short)questionType;
-(long long)questionOptions;
-(id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(/*^block*/id)arg2 ;
-(PHFetchResult *)existingFrequentLocationQuestions;
-(double)_localFactoryScoreForLocationTypeName:(id)arg1 ;
-(BOOL)_addIfNeededFrequentLocationQuestionForAsset:(id)arg1 withLocationTypeName:(id)arg2 toQuestions:(id)arg3 ;
-(BOOL)_distanceTooCloseBetweenCoordinate:(CLLocationCoordinate2D)arg1 otherCoordinate:(CLLocationCoordinate2D)arg2 ;
-(id)_selectedAssetFromMomentNodes:(id)arg1 closeToCoordinate:(CLLocationCoordinate2D)arg2 ;
-(void)setExistingFrequentLocationQuestions:(PHFetchResult *)arg1 ;
@end

