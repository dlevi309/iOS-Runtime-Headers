/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdNotificationClient : PLAssetsdBaseClient
-(void)asyncNotifyUserViewedNotificationWithAlbumCloudGUID:(id)arg1 ;
-(void)asyncNotifyResponseToPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg1 acceptInvitation:(BOOL)arg2 ;
-(void)asyncNotifyInterestingMemoryNotificationForColletionID:(id)arg1 notificationDeliveryDate:(id)arg2 ;
-(void)asyncNotifyInterestingMemoryNotificationViewedForColletionID:(id)arg1 ;
-(void)asyncNotifyReportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg1 ;
-(void)asyncNotifySuggestedCMMNotificationForColletionID:(id)arg1 notificationDeliveryDate:(id)arg2 ;
-(void)asyncNotifySuggestedCMMViewedForColletionID:(id)arg1 ;
-(void)asyncNotifyExpiringMomentShareWithUUIDs:(id)arg1 thumbnailImageData:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4 ;
@end

