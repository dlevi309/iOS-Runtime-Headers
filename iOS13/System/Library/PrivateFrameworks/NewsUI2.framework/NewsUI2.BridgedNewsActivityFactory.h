/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/TSBridgedNewsActivityFactoryType.h>

@interface NewsUI2.BridgedNewsActivityFactory : _UKNOWN_SUPERCLASS_ <TSBridgedNewsActivityFactoryType> {

	 tagService;
	 headlineService;
	 headlineModelFactory;

}
-(id)history;
-(id)notifications;
-(id)saved;
-(id)feedWithTag:(id)arg1 feedViewContext:(id)arg2 ;
-(id)forYouFeedWithFeedViewContext:(id)arg1 articleViewContext:(id)arg2 analyticsReferral:(id)arg3 ;
-(void)feedWithTagIdentifier:(id)arg1 feedViewContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)headlineWithHeadlineProviding:(id)arg1 articleContext:(id)arg2 articlePresentationStyle:(long long)arg3 showShareSheet:(BOOL)arg4 forceArticleUpdate:(BOOL)arg5 ;
-(id)unrealizedHeadlineWithArticleID:(id)arg1 articleContext:(id)arg2 articlePresentationStyle:(long long)arg3 showShareSheet:(BOOL)arg4 forceArticleUpdate:(BOOL)arg5 ;
-(id)editorialArticleWithIdentifier:(id)arg1 articleViewContext:(id)arg2 ;
-(id)videoPlayerWithWidgetPlaylist:(id)arg1 analyticsReferral:(id)arg2 ;
-(id)videoPlayerWithArticleIDs:(id)arg1 analyticsReferral:(id)arg2 ;
-(id)pickYourFavorites;
-(id)previewWithHeadline:(id)arg1 ;
-(id)adPreviewWithIdentifier:(id)arg1 ;
-(id)manageSubscriptions;
-(id)webLinkWithURL:(id)arg1 ;
@end

