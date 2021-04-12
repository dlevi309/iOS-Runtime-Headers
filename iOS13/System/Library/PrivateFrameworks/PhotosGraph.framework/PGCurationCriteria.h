/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class PGCurationIndexSetTrait, PGCurationPartOfDayTrait, PGGraph, PGCurationSetTrait, PGCurationContentOrAestheticScoreTrait, NSString;

@interface PGCurationCriteria : NSObject {

	BOOL _filterUtilityAssets;
	double _minimumAssetsRatio;
	PGCurationIndexSetTrait* _compulsoryScenesTrait;
	PGCurationIndexSetTrait* _scenesTrait;
	PGCurationPartOfDayTrait* _partOfDayTrait;
	PGGraph* _graph;
	unsigned long long _faceFilter;
	PGCurationSetTrait* _peopleTrait;
	PGCurationContentOrAestheticScoreTrait* _contentOrAestheticScoreTrait;
	unsigned long long _client;

}

@property (nonatomic,readonly) PGGraph * graph;                                                                  //@synthesize graph=_graph - In the implementation block
@property (assign,nonatomic) double minimumAssetsRatio;                                                          //@synthesize minimumAssetsRatio=_minimumAssetsRatio - In the implementation block
@property (nonatomic,readonly) unsigned long long client;                                                        //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) unsigned long long faceFilter;                                                      //@synthesize faceFilter=_faceFilter - In the implementation block
@property (assign,nonatomic) BOOL filterUtilityAssets;                                                           //@synthesize filterUtilityAssets=_filterUtilityAssets - In the implementation block
@property (nonatomic,retain) PGCurationIndexSetTrait * scenesTrait;                                              //@synthesize scenesTrait=_scenesTrait - In the implementation block
@property (nonatomic,retain) PGCurationIndexSetTrait * compulsoryScenesTrait;                                    //@synthesize compulsoryScenesTrait=_compulsoryScenesTrait - In the implementation block
@property (nonatomic,retain) PGCurationSetTrait * peopleTrait;                                                   //@synthesize peopleTrait=_peopleTrait - In the implementation block
@property (nonatomic,retain) PGCurationPartOfDayTrait * partOfDayTrait;                                          //@synthesize partOfDayTrait=_partOfDayTrait - In the implementation block
@property (nonatomic,retain) PGCurationContentOrAestheticScoreTrait * contentOrAestheticScoreTrait;              //@synthesize contentOrAestheticScoreTrait=_contentOrAestheticScoreTrait - In the implementation block
@property (readonly) NSString * niceDescription; 
-(unsigned long long)client;
-(PGGraph *)graph;
-(PGCurationSetTrait *)peopleTrait;
-(void)setPeopleTrait:(PGCurationSetTrait *)arg1 ;
-(NSString *)niceDescription;
-(PGCurationIndexSetTrait *)scenesTrait;
-(void)setScenesTrait:(PGCurationIndexSetTrait *)arg1 ;
-(id)initWithGraph:(id)arg1 minimumAssetsRatio:(double)arg2 client:(unsigned long long)arg3 ;
-(BOOL)isPassingForAsset:(id)arg1 score:(double*)arg2 ;
-(BOOL)passesForItem:(id)arg1 score:(double*)arg2 reasonString:(id*)arg3 ;
-(double)_scoreForSceneClassifications:(id)arg1 withScenesTrait:(id)arg2 traitFailed:(BOOL*)arg3 ;
-(id)peopleTraitString;
-(double)minimumAssetsRatio;
-(void)setMinimumAssetsRatio:(double)arg1 ;
-(PGCurationIndexSetTrait *)compulsoryScenesTrait;
-(void)setCompulsoryScenesTrait:(PGCurationIndexSetTrait *)arg1 ;
-(PGCurationPartOfDayTrait *)partOfDayTrait;
-(void)setPartOfDayTrait:(PGCurationPartOfDayTrait *)arg1 ;
-(unsigned long long)faceFilter;
-(void)setFaceFilter:(unsigned long long)arg1 ;
-(PGCurationContentOrAestheticScoreTrait *)contentOrAestheticScoreTrait;
-(void)setContentOrAestheticScoreTrait:(PGCurationContentOrAestheticScoreTrait *)arg1 ;
-(BOOL)filterUtilityAssets;
-(void)setFilterUtilityAssets:(BOOL)arg1 ;
@end

