/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>
#import <libobjc.A.dylib/FCNewsAppConfigurationObserving.h>

@interface NewsUI2.SubscriberStatusConditionProvider : NSObject <FCBundleSubscriptionChangeObserver, FCNewsAppConfigurationObserving> {

	 statusConditions;
	 appConfigurationManager;
	 bundleSubscriptionManager;

}
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(void)bundleSubscriptionDidExpire:(id)arg1 ;
-(void)configurationManager:(id)arg1 appConfigurationDidChange:(id)arg2 ;
-(id)init;
@end

