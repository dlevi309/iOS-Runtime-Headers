/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@class NSDictionary;

@interface MPModelForYouRecommendationsMusicKitRequestOperation : MPStoreModelRequestOperation {

	NSDictionary* _storeBagDictionary;

}
-(id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id*)arg2 ;
-(id)_recommendationGroupBuilder;
-(BOOL)isOnboardingRequired:(id)arg1 ;
-(id)_recommendationGroupBuilderWithFlatSectionedItems:(id)arg1 ;
-(id)_produceResultsWithItemsArray:(id)arg1 ;
-(id)_produceResultsWithRecommendationsArray:(id)arg1 recentlyPlayedArray:(id)arg2 ;
-(id)typesArrayWithTypes:(long long)arg1 ;
-(id)_responseWithResults:(id)arg1 personalizationResponse:(id)arg2 ;
-(id)recommendationsURLWithStoreBagDictionary:(id)arg1 ;
-(id)_personalizeRecommendationGroup:(id)arg1 flatPersonalizedSectionedItems:(id)arg2 ;
-(id)queryItemsWithStoreBagDictionary:(id)arg1 ;
-(id)recentlyPlayedURLWithStoreBagDictionary:(id)arg1 ;
-(id)displayFilterKindsValueForOptions:(long long)arg1 ;
-(id)sectionProperties;
-(id)itemProperties;
-(void)produceResponseWithLoadedOutput:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

