/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class SSAccount, SSDatabaseCache, SSAppPurchaseHistoryDatabase;

@interface SSAppPurchaseHistoryCache : NSObject {

	SSAccount* _account;
	SSDatabaseCache* _databaseCache;
	SSAppPurchaseHistoryDatabase* _purchaseHistoryDatabase;

}
-(id)init;
-(id)initWithAccount:(id)arg1 ;
-(unsigned long long)purge:(unsigned long long)arg1 ;
-(unsigned long long)purgeableSpace;
-(id)allUncachedImages:(id)arg1 ;
-(id)allUncachedImages;
-(void)clearCacheForAdamID:(id)arg1 ;
-(BOOL)setImageData:(id)arg1 forAdamID:(id)arg2 imageToken:(id)arg3 ;
-(id)imageDataForAdamID:(id)arg1 ;
@end

