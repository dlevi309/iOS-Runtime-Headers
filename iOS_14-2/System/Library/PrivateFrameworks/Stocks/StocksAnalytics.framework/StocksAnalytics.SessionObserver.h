/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	 window;

}
-(void)pushOrientationData;
-(id)init;
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(void)bundleSubscriptionDidExpire:(id)arg1 ;
-(void)bundleSubscriptionDidChange:(id)arg1 previousBundleSubscription:(id)arg2 ;
-(void)dealloc;
@end

