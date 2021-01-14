/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class PGManager, NSDictionary, NSString;

@interface PGHighlightStatisticsEstimator : NSObject {

	PGManager* _manager;
	NSDictionary* _highlightEstimatesDictionary;

}

@property (retain) PGManager * manager;                                                  //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) NSDictionary * highlightEstimatesDictionary;              //@synthesize highlightEstimatesDictionary=_highlightEstimatesDictionary - In the implementation block
@property (nonatomic,readonly) NSString * highlightEstimatesDescription; 
-(id)initWithManager:(id)arg1 ;
-(void)setManager:(PGManager *)arg1 ;
-(NSDictionary *)highlightEstimatesDictionary;
-(PGManager *)manager;
-(NSString *)highlightEstimatesDescription;
-(id)_createHighlightEstimatesDictionary;
-(BOOL)_isUtilityAsset:(id)arg1 ;
-(unsigned long long)_numberOfUtilityAssetsForAssetCollection:(id)arg1 ;
-(id)_collectDetailsForTripsAndWeekends:(id)arg1 ;
-(id)_collectDetailsForAggregations:(id)arg1 ;
-(id)_highlightEstimatesDescriptionWithData:(id)arg1 ;
-(id)_stringDescriptionForTripWeekendDetails:(id)arg1 ;
-(id)_stringDescriptionForHomeWorkAggregations:(id)arg1 ;
-(id)_stringDescriptionForMomentsDetails:(id)arg1 ;
@end

