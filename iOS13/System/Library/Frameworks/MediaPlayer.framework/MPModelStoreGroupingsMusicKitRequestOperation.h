/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@class NSIndexSet, NSDictionary;

@interface MPModelStoreGroupingsMusicKitRequestOperation : MPStoreModelRequestOperation {

	NSIndexSet* _whitelistedFCKinds;
	NSDictionary* _storeBagDictionary;

}
-(id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id*)arg2 ;
-(void)produceResponseWithLoadedOutput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)additionalURLRequestsWithStoreBagDictionary:(id)arg1 ;
-(id)additionalCatalogURLQueryItems;
-(id)groupingNameBagKey;
-(id)groupingNameWithMusicSubscriptionDictionary:(id)arg1 ;
-(id)rootObjectIdentifierWithSubscriptionStatus:(long long)arg1 ;
-(id)_produceResponseWithParser:(id)arg1 results:(id)arg2 error:(id*)arg3 ;
-(id)catalogURLWithStoreBagDictionary:(id)arg1 ;
@end

