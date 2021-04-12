/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCForYouPluginGroupManaging.h>

@interface NewsUI2.ForYouTodayFeedManager : _UKNOWN_SUPERCLASS_ <FCForYouPluginGroupManaging> {

	 bundleSubscriptionManager;
	 feedGroupEmitterFactory;
	 emitterQueue;
	 store;

}
-(id)knownGroupForIdentifier:(id)arg1 headlines:(id)arg2 assetHandles:(id)arg3 ;
-(void)fetchGroupsWithGroupConfigs:(id)arg1 forYouConfig:(id)arg2 precedingArticleIDs:(id)arg3 prefetchedHeadlinesByID:(id)arg4 assetManager:(id)arg5 completion:(/*^block*/id)arg6 ;
@end

