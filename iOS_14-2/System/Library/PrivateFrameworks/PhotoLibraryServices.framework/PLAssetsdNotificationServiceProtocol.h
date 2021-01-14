/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLAssetsdNotificationServiceProtocol <NSObject>
@required
-(void)userViewedNotificationWithAlbumCloudGUID:(id)arg1;
-(void)noteInterestingMemoryAlertWithMemoryUUID:(id)arg1 notificationDeliveryDate:(id)arg2;
-(void)noteInterestingMemoryAlertViewedWithUUID:(id)arg1;
-(void)noteSuggestedCMMAlertViewedWithCMMUUID:(id)arg1;
-(void)respondToPhotoStreamInvitationWithAlbumCloudGUID:(id)arg1 acceptInvitation:(BOOL)arg2;
-(void)noteSuggestedCMMAlertWithCMMUUID:(id)arg1 notificationDeliveryDate:(id)arg2;
-(void)noteGoingToExpireCMMsAlertWithCMMUUIDs:(id)arg1 thumbnailImageData:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4;
-(void)reportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg1;

@end

