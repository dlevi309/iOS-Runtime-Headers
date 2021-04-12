/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsAnalytics.framework/NewsAnalytics
*/

#import <libobjc.A.dylib/NSSNewsAnalyticsSessionManagerObserving.h>
#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>
#import <libobjc.A.dylib/FCUserInfoObserving.h>
#import <libobjc.A.dylib/FCSubscriptionObserving.h>

@class NSString;

@interface NewsAnalytics.SessionObserver : NSObject <NSSNewsAnalyticsSessionManagerObserving, FCBundleSubscriptionChangeObserver, FCUserInfoObserving, FCSubscriptionObserving> {

	 sessionManager;
	 tracker;
	 cloudContext;
	 client;
	 window;
	 sceneSessionIdentifier;

}

@property (copy,nonatomic) NSString * sceneSessionIdentifier; 
-(void)sessionDidStartWithSessionID:(id)arg1 sourceApplication:(id)arg2 ;
-(void)sessionWillResignActive;
-(void)sessionWillEndWithEndReason:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(void)userInfoDidChangeFeldsparID:(id)arg1 fromCloud:(BOOL)arg2 ;
-(NSString *)sceneSessionIdentifier;
-(void)bundleSubscriptionDidExpire:(id)arg1 ;
-(void)bundleSubscriptionDidChange:(id)arg1 previousBundleSubscription:(id)arg2 ;
-(void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6 eventInitiationLevel:(long long)arg7 ;
-(void)dealloc;
-(void)setSceneSessionIdentifier:(NSString *)arg1 ;
-(void)pushContentEnvironmentData;
-(void)pushOrientationData;
-(void)pushMobileData;
-(void)offerDidChange:(id)arg1 ;
-(void)pushUserSubscriptionContextData;
-(void)pushSessionDataWithRegionIDs:(id)arg1 ;
@end

