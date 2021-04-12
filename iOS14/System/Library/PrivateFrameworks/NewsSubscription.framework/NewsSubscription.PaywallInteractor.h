/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
*/

#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>

@interface NewsSubscription.PaywallInteractor : NSObject <FCBundleSubscriptionChangeObserver> {

	 delegate;
	 tracker;
	 paywallModel;
	 purchaseSessionID;
	 webAccessAuthenticatorFactory;
	 webAccessAuthenticator;
	 webAccessConversionEventReporter;

}
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(id)init;
@end

