/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

@class NSUUID;


@protocol HMDUserSettingsBackingStoreControllerDelegate <NSObject>
@property (readonly) NSUUID * userUUID; 
@property (readonly) BOOL isRunningOnHomeOwnersDevice; 
@property (readonly) BOOL isCurrentUser; 
@required
-(BOOL)isCurrentUser;
-(NSUUID *)userUUID;
-(BOOL)isRunningOnHomeOwnersDevice;
-(id)ownerForUserSettingsBackingStoreController:(id)arg1;
-(id)backingStoreController:(id)arg1 createParticipantManagerForCloudZone:(id)arg2;
-(void)didStartBackingStoreController:(id)arg1;
-(void)didStopBackingStoreController:(id)arg1;

@end

