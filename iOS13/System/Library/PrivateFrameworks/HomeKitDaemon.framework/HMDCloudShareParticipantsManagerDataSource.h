/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDCloudShareParticipantsManagerDataSource <NSObject>
@optional
-(BOOL)manager:(id)arg1 shouldGrantWriteAccessToUser:(id)arg2;
-(BOOL)canUseUntrustedAccountHandlesForParticipantManager:(id)arg1;
-(BOOL)areShareModificationsEnabledForManager:(id)arg1;

@required
-(BOOL)manager:(id)arg1 shouldShareWithUser:(id)arg2;

@end

