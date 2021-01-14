/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCCKDatabaseEncryptionDelegate <NSObject>
@required
-(void)fetchPrivateDataEncryptionIsAllowedForDatabase:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchPrivateDataEncryptionMigrationIsDesiredForDatabase:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchPrivateDataEncryptionIsRequiredForDatabase:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchOriginalDataShouldBeDeletedAfterMigrationForDatabase:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchShouldSecureSubscriptionsForDatabase:(id)arg1 completion:(/*^block*/id)arg2;

@end

