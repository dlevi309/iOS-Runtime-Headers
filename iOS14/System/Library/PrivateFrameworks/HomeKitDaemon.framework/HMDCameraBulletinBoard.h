/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDCameraBulletinBoard <NSObject>
@optional
-(void)updateBulletinWithRecordID:(id)arg1 forChangedCharacteristics:(id)arg2 snapshotData:(id)arg3;

@required
-(void)removeBulletinWithRecordID:(id)arg1;
-(void)insertImageBulletinsForChangedCharacteristics:(id)arg1 snapshotData:(id)arg2 completion:(/*^block*/id)arg3;
-(void)insertCameraClipSignificantEventBulletin:(id)arg1;
-(id)doorbellPressNotificationsNearDate:(id)arg1 forCameraProfile:(id)arg2;

@end

