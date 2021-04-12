/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/


@protocol SPCompanionAppServerProtocol <NSObject>
@required
-(void)sendCacheRequest:(id)arg1 identifier:(id)arg2;
-(void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3;
-(void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3 reply:(/*^block*/id)arg4;
-(void)fetchNotificationForNotificationID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)requestTimingData:(id)arg1 timingMetaData:(id)arg2;
-(void)launchCompanionAppForGizmoAppWithIdentifier:(id)arg1 withUserInfoData:(id)arg2 reply:(/*^block*/id)arg3;
-(void)extensionWithIdentifier:(id)arg1 gotUnknownInterfaceController:(id)arg2;

@end

