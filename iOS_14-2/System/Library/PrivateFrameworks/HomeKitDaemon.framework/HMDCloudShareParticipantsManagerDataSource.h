/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

