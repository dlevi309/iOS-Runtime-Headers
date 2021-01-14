/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@class NSDictionary;

@interface MPModelRecentlyPlayedRequestOperation : MPStoreModelRequestOperation {

	NSDictionary* _storeBagDictionary;

}
-(id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id*)arg2 ;
-(id)recentlyPlayedURLWithStoreBagDictionary:(id)arg1 ;
-(void)produceResponseWithLoadedOutput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_produceResponseWithRecentlyPlayedArray:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

