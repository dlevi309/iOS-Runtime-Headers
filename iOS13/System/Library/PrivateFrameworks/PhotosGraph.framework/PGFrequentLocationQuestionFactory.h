/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_selectedAssetForQuestionFromMomentNodes:(id)arg1 ;
-(id)_assetWithLocationFromMomentNode:(id)arg1 ;
-(void)setExistingFrequentLocationQuestions:(PHFetchResult *)arg1 ;
@end

