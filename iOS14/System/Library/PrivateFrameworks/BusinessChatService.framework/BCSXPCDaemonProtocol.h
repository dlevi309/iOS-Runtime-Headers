/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@protocol BCSXPCDaemonProtocol
@required
-(void)clearCachesForLinkItemsAssociatedWithBundleID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)warmCacheIfNecessaryForPhoneNumbers:(id)arg1 forClientBundleID:(id)arg2;
-(void)fetchBusinessItemWithPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)fetchBusinessItemWithDetailsForPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)fetchBusinessItemWithBizID:(id)arg1 forClientBundleID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)fetchIsBusinessPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)fetchSquareIconDataForBusinessItem:(id)arg1 forClientBundleID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)fetchLinkItemModelWithURL:(id)arg1 chopURL:(BOOL)arg2 forClientBundleID:(id)arg3 completion:(/*^block*/id)arg4;
-(void)isBusinessRegisteredForURL:(id)arg1 chopURL:(BOOL)arg2 forClientBundleID:(id)arg3 completion:(/*^block*/id)arg4;
-(void)fetchLinkItemModelWithHash:(id)arg1 forClientBundleID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)prefetchBloomFilterAndConfigsWithCompletion:(/*^block*/id)arg1;
-(void)prefetchConfigsWithCompletion:(/*^block*/id)arg1;
-(void)clearCachesForType:(long long)arg1 completion:(/*^block*/id)arg2;
-(void)clearExpiredCachesForType:(long long)arg1 completion:(/*^block*/id)arg2;
-(void)_deleteInMemoryCache;

@end

