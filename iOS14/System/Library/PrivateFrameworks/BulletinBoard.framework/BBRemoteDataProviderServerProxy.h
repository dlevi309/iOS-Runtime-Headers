/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@protocol BBRemoteDataProviderServerProxy <NSObject>
@required
-(void)withdrawBulletinWithPublisherBulletinID:(id)arg1;
-(void)reloadSectionParameters:(id)arg1;
-(void)reloadDefaultSectionInfo:(id)arg1;
-(void)getSectionInfoWithCompletion:(/*^block*/id)arg1;
-(void)invalidateBulletins;
-(void)setSectionInfo:(id)arg1;
-(void)getClearedInfoWithCompletion:(/*^block*/id)arg1;
-(void)modifyBulletin:(id)arg1;
-(void)withdrawBulletinsWithRecordID:(id)arg1;
-(void)addBulletin:(id)arg1 forDestinations:(unsigned long long)arg2;
-(void)setClearedInfo:(id)arg1;

@end

