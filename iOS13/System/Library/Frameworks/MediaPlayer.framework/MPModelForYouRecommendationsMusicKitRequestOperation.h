/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@class NSDictionary;

@interface MPModelForYouRecommendationsMusicKitRequestOperation : MPStoreModelRequestOperation {

	NSDictionary* _storeBagDictionary;

}
-(id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id*)arg2 ;
-(void)produceResponseWithLoadedOutput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_produceResponseWithRecommendationsArray:(id)arg1 recentlyPlayedArray:(id)arg2 storeItemMetadataResults:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)recommendationsURLWithStoreBagDictionary:(id)arg1 ;
-(id)recentlyPlayedURLWithStoreBagDictionary:(id)arg1 ;
@end

