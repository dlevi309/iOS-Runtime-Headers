/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)didStartLocalZoneForBackingStoreController:(id)arg1;
-(id)backingStoreController:(id)arg1 createParticipantManagerForCloudZone:(id)arg2;
-(void)didStartBackingStoreController:(id)arg1;
-(void)backingStoreController:(id)arg1 didUpdatePhotosPersonManagerSettingsModel:(id)arg2 previousPhotosPersonManagerSettingsModel:(id)arg3;
-(void)didStopBackingStoreController:(id)arg1;

@end

