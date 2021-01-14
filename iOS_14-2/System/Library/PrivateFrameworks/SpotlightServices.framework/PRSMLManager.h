/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@class PRSCoreDuet, NSMutableDictionary, NSArray;

@interface PRSMLManager : NSObject {

	PRSCoreDuet* _coreDuet;
	NSMutableDictionary* _mapPredictionEnginesToClasses;
	NSMutableDictionary* _mapPredictionEnginesToCounts;
	NSMutableDictionary* _mapPredictionEnginesToCountFiles;
	NSMutableDictionary* _mapPredictionEnginesToPredictedTopHit;
	NSMutableDictionary* _dictCoreDuetInfo;
	NSArray* _categoryList;
	NSMutableDictionary* _combinedTopScoreOrder;
	NSMutableDictionary* _combinedBottomScoreOrder;

}

@property (retain) PRSCoreDuet * coreDuet;                                                   //@synthesize coreDuet=_coreDuet - In the implementation block
@property (retain) NSMutableDictionary * mapPredictionEnginesToClasses;                      //@synthesize mapPredictionEnginesToClasses=_mapPredictionEnginesToClasses - In the implementation block
@property (retain) NSMutableDictionary * mapPredictionEnginesToCounts;                       //@synthesize mapPredictionEnginesToCounts=_mapPredictionEnginesToCounts - In the implementation block
@property (retain) NSMutableDictionary * mapPredictionEnginesToCountFiles;                   //@synthesize mapPredictionEnginesToCountFiles=_mapPredictionEnginesToCountFiles - In the implementation block
@property (retain) NSMutableDictionary * mapPredictionEnginesToPredictedTopHit;              //@synthesize mapPredictionEnginesToPredictedTopHit=_mapPredictionEnginesToPredictedTopHit - In the implementation block
@property (retain) NSMutableDictionary * dictCoreDuetInfo;                                   //@synthesize dictCoreDuetInfo=_dictCoreDuetInfo - In the implementation block
@property (retain) NSArray * categoryList;                                                   //@synthesize categoryList=_categoryList - In the implementation block
@property (retain) NSMutableDictionary * combinedTopScoreOrder;                              //@synthesize combinedTopScoreOrder=_combinedTopScoreOrder - In the implementation block
@property (retain) NSMutableDictionary * combinedBottomScoreOrder;                           //@synthesize combinedBottomScoreOrder=_combinedBottomScoreOrder - In the implementation block
+(id)getSPMLSharedInstance;
+(id)createPathToSpotlightPrefFile;
-(NSMutableDictionary *)mapPredictionEnginesToCountFiles;
-(void)setDictCoreDuetInfo:(NSMutableDictionary *)arg1 ;
-(id)getRankedCategoriesAsDictionaryForDays:(long long)arg1 ;
-(unsigned long long)getTotalResultsUsedCountForDuet;
-(void)setCombinedBottomScoreOrder:(NSMutableDictionary *)arg1 ;
-(void)setCategoryList:(NSArray *)arg1 ;
-(void)setCombinedTopScoreOrder:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)combinedTopScoreOrder;
-(NSMutableDictionary *)mapPredictionEnginesToClasses;
-(void)setCoreDuet:(PRSCoreDuet *)arg1 ;
-(void)setMapPredictionEnginesToClasses:(NSMutableDictionary *)arg1 ;
-(NSArray *)categoryList;
-(id)initManager;
-(void)dumpPredictionStatsToFlatFiles;
-(NSMutableDictionary *)mapPredictionEnginesToCounts;
-(NSMutableDictionary *)combinedBottomScoreOrder;
-(NSMutableDictionary *)mapPredictionEnginesToPredictedTopHit;
-(NSMutableDictionary *)dictCoreDuetInfo;
-(void)setMapPredictionEnginesToCounts:(NSMutableDictionary *)arg1 ;
-(void)addCategoryAndGroupNameToTrainCategories:(id)arg1 groupName:(id)arg2 ;
-(void)setMapPredictionEnginesToCountFiles:(NSMutableDictionary *)arg1 ;
-(PRSCoreDuet *)coreDuet;
-(void)setMapPredictionEnginesToPredictedTopHit:(NSMutableDictionary *)arg1 ;
-(unsigned long long)getCountForCategory:(id)arg1 ;
-(void)saveLastRankingForCategories:(id)arg1 ;
-(id)getLastSavedCategoryRankings;
@end

