/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDDatabaseDelegate <NSObject>
@optional
-(void)database:(id)arg1 didCreateZoneWithName:(id)arg2 isPrivate:(BOOL)arg3;
-(id)database:(id)arg1 willRemoveZoneWithName:(id)arg2 isPrivate:(BOOL)arg3;
-(void)database:(id)arg1 didRemoveZoneWithName:(id)arg2 isPrivate:(BOOL)arg3;
-(void)database:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;

@end

