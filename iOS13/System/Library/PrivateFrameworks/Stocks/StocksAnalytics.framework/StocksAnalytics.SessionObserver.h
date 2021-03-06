/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksAnalytics.framework/StocksAnalytics
*/

#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>

@interface StocksAnalytics.SessionObserver : NSObject <FCBundleSubscriptionChangeObserver> {

	 watchlistService;
	 tracker;
	 sessionManager;
	 cloudContext;
	 userContext;
	 client;
	 appConfigurationManager;

}
-(void)pushOrientationDataOnChange;
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(void)bundleSubscriptionDidExpire:(id)arg1 ;
-(void)bundleSubscriptionDidChange:(id)arg1 previousBundleSubscription:(id)arg2 changeSet:(id)arg3 ;
-(id)init;
-(void)dealloc;
@end

