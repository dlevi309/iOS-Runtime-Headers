/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@protocol BBDataProviderConnectionServerProxy <NSObject>
@required
-(void)addDataProviderWithSectionID:(id)arg1 clientProxy:(id)arg2 identity:(id)arg3 completion:(/*^block*/id)arg4;
-(void)removeDataProviderWithSectionID:(id)arg1;
-(void)addParentSectionFactory:(id)arg1;
-(void)clientIsReady:(/*^block*/id)arg1;

@end

