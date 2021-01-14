/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@interface PKPlayerManifest : NSObject {

	 playableContent;
	 assetInfo;
	 siriContext;

}
+(id)manifestForEpisode:(id)arg1 ;
+(id)manifestForShow:(id)arg1 ;
+(id)manifestForShowUuid:(id)arg1 siriContext:(id)arg2 ;
+(id)manifestForPlayMyPodcastsWithSiriContext:(id)arg1 ;
+(id)manifestForEpisodeStoreId:(id)arg1 siriContext:(id)arg2 ;
+(id)manifestForStationId:(id)arg1 siriContext:(id)arg2 ;
+(id)manifestForEpisodeStoreId:(id)arg1 assetInfo:(id)arg2 ;
+(id)manifestForShowStoreId:(id)arg1 siriContext:(id)arg2 ;
+(id)manifestForShowStoreId:(id)arg1 assetInfo:(id)arg2 ;
-(id)init;
@end

