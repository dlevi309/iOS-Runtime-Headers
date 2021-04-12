/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLAssetsdNotificationServiceProtocol <NSObject>
@required
-(void)userViewedNotificationWithAlbumCloudGUID:(id)arg1;
-(void)reportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg1;
-(void)noteInterestingMemoryAlertWithMemoryUUID:(id)arg1 notificationDeliveryDate:(id)arg2;
-(void)noteInterestingMemoryAlertViewedWithUUID:(id)arg1;
-(void)respondToPhotoStreamInvitationWithAlbumCloudGUID:(id)arg1 acceptInvitation:(BOOL)arg2;
-(void)noteSuggestedCMMAlertWithCMMUUID:(id)arg1 notificationDeliveryDate:(id)arg2;
-(void)noteSuggestedCMMAlertViewedWithCMMUUID:(id)arg1;
-(void)noteGoingToExpireCMMsAlertWithCMMUUIDs:(id)arg1 thumbnailImageData:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4;

@end

