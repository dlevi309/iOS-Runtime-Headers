/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsAnalytics.framework/NewsAnalytics
*/

#import <libobjc.A.dylib/FCUserInfoObserving.h>
#import <libobjc.A.dylib/NSSNewsAnalyticsSessionManagerObserving.h>
#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>

@interface NewsAnalytics.SessionObserver : NSObject <FCUserInfoObserving, NSSNewsAnalyticsSessionManagerObserving, FCBundleSubscriptionChangeObserver> {

	 sessionManager;
	 cloudContext;
	 window;

}
-(void)userInfoDidChangeFeldsparID:(id)arg1 fromCloud:(BOOL)arg2 ;
-(void)pushSessionData;
-(void)pushUserSubscriptionContextData;
-(void)sessionDidStartWithSessionID:(id)arg1 ;
-(void)sessionWillEnd;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)pushOrientationData;
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(void)bundleSubscriptionDidExpire:(id)arg1 ;
-(void)bundleSubscriptionDidChange:(id)arg1 previousBundleSubscription:(id)arg2 changeSet:(id)arg3 ;
-(id)init;
-(void)dealloc;
@end

