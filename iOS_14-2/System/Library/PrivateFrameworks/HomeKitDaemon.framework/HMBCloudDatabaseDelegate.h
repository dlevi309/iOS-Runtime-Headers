/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMBCloudDatabaseDelegate <NSObject>
@optional
-(void)cloudDatabase:(id)arg1 encounteredError:(id)arg2 withOperation:(id)arg3 onZone:(id)arg4;
-(void)cloudDatabase:(id)arg1 didChangeManateeKeysForZoneWithID:(id)arg2;
-(void)cloudDatabase:(id)arg1 didCreateZoneWithID:(id)arg2;
-(void)cloudDatabase:(id)arg1 didRemoveZoneWithID:(id)arg2;
-(id)cloudDatabase:(id)arg1 willRemoveZoneWithID:(id)arg2;
-(void)cloudDatabase:(id)arg1 encounteredError:(id)arg2 withOperation:(id)arg3 onContainer:(id)arg4;
-(void)cloudDatabase:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;

@end

