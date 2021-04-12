/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCForYouPluginGroupManaging.h>

@interface NewsUI2.ForYouTodayFeedManager : _UKNOWN_SUPERCLASS_ <FCForYouPluginGroupManaging> {

	 configurationManager;
	 feedGroupEmitterFactory;
	 emitterQueue;
	 store;
	 paidBundleConfigManager;
	 subscriptionController;
	 feedContextFactory;

}
-(void)fetchGroupsWithGroupConfigs:(id)arg1 forYouConfig:(id)arg2 precedingArticleIDs:(id)arg3 prefetchedHeadlinesByID:(id)arg4 assetManager:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)knownGroupForIdentifier:(id)arg1 headlines:(id)arg2 tags:(id)arg3 assetHandles:(id)arg4 ;
@end

