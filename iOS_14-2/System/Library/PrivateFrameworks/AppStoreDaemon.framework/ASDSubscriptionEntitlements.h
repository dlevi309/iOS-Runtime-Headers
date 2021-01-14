/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@class ASDServiceBroker;

@interface ASDSubscriptionEntitlements : NSObject {

	ASDServiceBroker* _serviceBroker;
	int _newsCacheUpdatedNotificationToken;
	int _appStoreCacheUpdatedNotificationToken;
	int _appStoreArcadeSubscriptionBagUpdatedNotificationToken;
	int _musicCacheUpdatedNotificationToken;
	int _tvCacheUpdatedNotificationToken;
	int _iCloudCacheUpdatedNotificationToken;

}
+(id)sharedInstance;
-(void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 ignoreCaches:(BOOL)arg2 withResultHandler:(/*^block*/id)arg3 ;
-(id)init;
-(id)_initWithServiceBroker:(id)arg1 ;
-(void)getAppStoreConsumedIntroOfferFamilyIdsWithResultHandler:(/*^block*/id)arg1 ;
-(void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 ignoreCaches:(BOOL)arg2 withCacheInfoResultHandler:(/*^block*/id)arg3 ;
-(void)getSubscriptionEntitlementsIgnoreCaches:(BOOL)arg1 forActiveAccountWithResultHandler:(/*^block*/id)arg2 ;
-(void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 ignoreCaches:(BOOL)arg2 requestingBundleId:(id)arg3 withCacheInfoResultHandler:(/*^block*/id)arg4 ;
-(void)getSubscriptionEntitlementsIgnoreCaches:(BOOL)arg1 forActiveAccountWithResultAndExpiryHandler:(/*^block*/id)arg2 ;
-(void)getCachedSubscriptionEntitlementsForSegment:(unsigned long long)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)getSubscriptionEntitlementsForActiveAccountWithResultAndExpiryHandler:(/*^block*/id)arg1 ;
-(void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2 segment:(unsigned long long)arg3 ;
-(void)getSubscriptionEntitlementsForActiveAccountWithResultHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2 ;
@end

