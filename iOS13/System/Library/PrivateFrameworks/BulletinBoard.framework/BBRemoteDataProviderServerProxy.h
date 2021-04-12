/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@protocol BBRemoteDataProviderServerProxy <NSObject>
@required
-(void)invalidateBulletins;
-(void)addBulletin:(id)arg1 forDestinations:(unsigned long long)arg2;
-(void)modifyBulletin:(id)arg1;
-(void)withdrawBulletinsWithRecordID:(id)arg1;
-(void)withdrawBulletinWithPublisherBulletinID:(id)arg1;
-(void)reloadSectionParameters:(id)arg1;
-(void)reloadDefaultSectionInfo:(id)arg1;
-(void)getClearedInfoWithCompletion:(/*^block*/id)arg1;
-(void)setClearedInfo:(id)arg1;
-(void)getSectionInfoWithCompletion:(/*^block*/id)arg1;
-(void)setSectionInfo:(id)arg1;

@end

