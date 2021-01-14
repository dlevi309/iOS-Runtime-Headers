/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@protocol TVPSecureKeyDeliveryCoordinatorDelegate
@optional
-(void)secureKeyDeliveryCoordinatorWillSucceed:(id)arg1 forKeyRequest:(id)arg2;
-(void)secureKeyDeliveryCoordinator:(id)arg1 willFailWithError:(id)arg2 forKeyRequest:(id)arg3;
-(void)secureKeyDeliveryCoordinator:(id)arg1 didReceiveOfflineKeyData:(id)arg2 forKeyRequest:(id)arg3;
-(void)secureKeyDeliveryCoordinator:(id)arg1 didReceiveUpdatedRentalPlaybackStartDate:(id)arg2;
-(void)secureKeyDeliveryCoordinator:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2 playbackStartDate:(id)arg3;

@required
-(void)secureKeyDeliveryCoordinatorWillSucceed:(id)arg1;
-(void)secureKeyDeliveryCoordinator:(id)arg1 willFailWithError:(id)arg2;
-(void)secureKeyDeliveryCoordinator:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2;

@end

