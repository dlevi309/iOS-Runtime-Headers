/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@protocol FMFSessionDelegate <NSObject>
@optional
-(void)didReceiveLocation:(id)arg1;
-(void)didFailToFetchLocationForHandle:(id)arg1 withError:(id)arg2;
-(void)connectionError:(id)arg1;
-(void)didReceiveFriendshipRequest:(id)arg1;
-(void)didStartSharingMyLocationWithHandle:(id)arg1;
-(void)didStopSharingMyLocationWithHandle:(id)arg1;
-(void)didStartAbilityToGetLocationForHandle:(id)arg1;
-(void)didStopAbilityToGetLocationForHandle:(id)arg1;
-(void)didUpdateHidingStatus:(BOOL)arg1;
-(void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;
-(void)mappingPacketProcessingCompleted:(id)arg1;
-(void)didFailToHandleMappingPacket:(id)arg1 error:(id)arg2;
-(void)didChangeActiveLocationSharingDevice:(id)arg1;
-(void)didUpdateActiveDeviceList:(id)arg1;
-(void)didUpdatePendingOffersForHandles:(id)arg1;
-(void)didReceiveServerError:(id)arg1;
-(void)didUpdateFavoriteHandles:(id)arg1;
-(void)didUpdateFences:(id)arg1;
-(void)didUpdatePreferences:(id)arg1;
-(void)networkReachabilityUpdated:(BOOL)arg1;

@end

