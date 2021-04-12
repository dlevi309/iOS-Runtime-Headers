/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class SSAccount, SSDatabaseCache, SSAppPurchaseHistoryDatabase;

@interface SSAppPurchaseHistoryCache : NSObject {

	SSAccount* _account;
	SSDatabaseCache* _databaseCache;
	SSAppPurchaseHistoryDatabase* _purchaseHistoryDatabase;

}
-(unsigned long long)purge:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)setImageData:(id)arg1 forAdamID:(id)arg2 imageToken:(id)arg3 ;
-(void)clearCacheForAdamID:(id)arg1 ;
-(id)allUncachedImages;
-(id)allUncachedImages:(id)arg1 ;
-(id)imageDataForAdamID:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(unsigned long long)purgeableSpace;
@end

