/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@class NSIndexSet, NSDictionary;

@interface MPModelStoreBrowseRoomMusicKitRequestOperation : MPStoreModelRequestOperation {

	NSIndexSet* _whitelistedFCKinds;
	NSDictionary* _storeBagDictionary;

}
-(id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id*)arg2 ;
-(id)roomURLWithRoomID:(id)arg1 storeBagDictionary:(id)arg2 ;
-(void)produceResponseWithLoadedOutput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_produceResponseWithParser:(id)arg1 results:(id)arg2 error:(id*)arg3 ;
@end

