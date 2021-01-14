/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <libobjc.A.dylib/FCSubscriptionObserving.h>

@interface NewsArticles.ArticleViewerInteractor : NSObject <FCSubscriptionObserving> {

	 delegate;
	 coordinator;
	 dataManager;
	 blueprintProvider;
	 pageBlueprintManager;
	 pageBlueprintFactory;
	 followingManager;
	 insertAdvertisementBlueprintModifier;
	 pageTracker;

}
-(void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6 eventInitiationLevel:(long long)arg7 ;
-(id)init;
@end

