/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@protocol BBDataProviderStoreDelegate <NSObject>
@optional
-(void)dataProviderStore:(id)arg1 didAddParentSectionFactory:(id)arg2;

@required
-(void)dataProviderStore:(id)arg1 didAddDataProvider:(id)arg2 performMigration:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)dataProviderStore:(id)arg1 didRemoveDataProvider:(id)arg2;

@end

