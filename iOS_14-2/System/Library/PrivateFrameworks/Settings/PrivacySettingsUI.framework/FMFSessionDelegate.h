/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
*/


@protocol FMFSessionDelegate <NSObject>
@optional
-(void)didChangeActiveLocationSharingDevice:(id)arg1;
-(void)didReceiveServerError:(id)arg1;
-(void)didReceiveFriendshipRequest:(id)arg1;
-(void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;
-(void)networkReachabilityUpdated:(BOOL)arg1;
-(void)didUpdateFences:(id)arg1;
-(void)didUpdateActiveDeviceList:(id)arg1;
-(void)didUpdatePendingOffersForHandles:(id)arg1;
-(void)didUpdatePreferences:(id)arg1;
-(void)didStopAbilityToGetLocationForHandle:(id)arg1;
-(void)didReceiveLocation:(id)arg1;
-(void)didFailToFetchLocationForHandle:(id)arg1 withError:(id)arg2;
-(void)connectionError:(id)arg1;
-(void)didUpdateHidingStatus:(BOOL)arg1;
-(void)mappingPacketProcessingCompleted:(id)arg1;
-(void)didUpdateFavoriteHandles:(id)arg1;
-(void)didStopSharingMyLocationWithHandle:(id)arg1;
-(void)didStartAbilityToGetLocationForHandle:(id)arg1;
-(void)didFailToHandleMappingPacket:(id)arg1 error:(id)arg2;
-(void)didStartSharingMyLocationWithHandle:(id)arg1;

@end

