/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@protocol BCSXPCDaemonProtocol
@required
-(void)fetchBusinessItemWithBizID:(id)arg1 forClientBundleID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)fetchBusinessItemWithPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)fetchBusinessItemWithDetailsForPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)fetchIsBusinessPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)warmCacheIfNecessaryForPhoneNumbers:(id)arg1 forClientBundleID:(id)arg2;
-(void)fetchSquareIconDataForBusinessItem:(id)arg1 forClientBundleID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)_deleteInMemoryCache;

@end

