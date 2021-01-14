/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>
#import <libobjc.A.dylib/FCOfflineArticleContributing.h>

@class FCObservable;

@interface NewsUI2.AudioOfflineArticleContributor : NSObject <FCBundleSubscriptionChangeObserver, FCOfflineArticleContributing> {

	 articleIDsToDownload;
	 articleDownloadOptions;
	 audioDataManager;
	 scheduledRefreshManager;
	 paidBundleConfigManager;
	 bundleSubscriptionManager;
	 storageLevelProvider;

}

@property (readonly,nonatomic) id articleIDsToDownload; 
@property (readonly,nonatomic) long long articleDownloadOptions; 
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(void)bundleSubscriptionDidExpire:(id)arg1 ;
-(id)init;
-(id)articleIDsToDownload;
-(long long)articleDownloadOptions;
-(void)prepareToContributeWithCompletionHandler:(/*^block*/id)arg1 ;
@end

