/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@interface MPModelForYouRecommendationsRequestOperation : MPStoreModelRequestOperation
-(id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id*)arg2 ;
-(id)_responseWithResults:(id)arg1 personalizationResponse:(id)arg2 ;
-(id)_personalizeRecommendationGroup:(id)arg1 flatPersonalizedSectionedItems:(id)arg2 ;
-(void)produceResponseWithLoadedOutput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_missingContentIdentifiersInRecommendationsArray:(id)arg1 storeItemMetadataResults:(id)arg2 ;
-(void)_produceResponseWithRecommendationsArray:(id)arg1 storeItemMetadataResults:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

