/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@class ASDServiceBroker;

@interface ASDSubscriptionEntitlements : NSObject {

	ASDServiceBroker* _serviceBroker;
	int _newsCacheUpdatedNotificationToken;
	int _appStoreCacheUpdatedNotificationToken;
	int _appStoreArcadeSubscriptionBagUpdatedNotificationToken;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_initWithServiceBroker:(id)arg1 ;
-(void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2 ;
-(void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2 segment:(unsigned long long)arg3 ;
-(void)getSubscriptionEntitlementsIgnoreCaches:(BOOL)arg1 forActiveAccountWithResultHandler:(/*^block*/id)arg2 ;
-(void)getSubscriptionEntitlementsIgnoreCaches:(BOOL)arg1 forActiveAccountWithResultAndExpiryHandler:(/*^block*/id)arg2 ;
-(void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 ignoreCaches:(BOOL)arg2 withCacheInfoResultHandler:(/*^block*/id)arg3 ;
-(void)getAppStoreConsumedIntroOfferFamilyIdsWithResultHandler:(/*^block*/id)arg1 ;
-(void)getSubscriptionEntitlementsForActiveAccountWithResultHandler:(/*^block*/id)arg1 ;
-(void)getSubscriptionEntitlementsForActiveAccountWithResultAndExpiryHandler:(/*^block*/id)arg1 ;
-(void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 ignoreCaches:(BOOL)arg2 withResultHandler:(/*^block*/id)arg3 ;
-(void)getCachedSubscriptionEntitlementsForSegment:(unsigned long long)arg1 withResultHandler:(/*^block*/id)arg2 ;
@end

