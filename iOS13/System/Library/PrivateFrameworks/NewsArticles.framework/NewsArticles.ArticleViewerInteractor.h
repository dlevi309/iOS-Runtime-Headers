/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	 sharingIntentFactory;
	 followingManager;
	 interstitialAdManager;
	 insertAdvertisementBlueprintModifier;
	 pageTracker;

}
-(void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6 eventInitiationLevel:(long long)arg7 ;
-(id)init;
@end

