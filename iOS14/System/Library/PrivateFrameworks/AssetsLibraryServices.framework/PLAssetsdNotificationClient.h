/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdNotificationClient : PLAssetsdBaseClient
-(void)asyncNotifyUserViewedNotificationWithAlbumCloudGUID:(id)arg1 ;
-(void)asyncNotifyInterestingMemoryNotificationForColletionID:(id)arg1 notificationDeliveryDate:(id)arg2 ;
-(void)asyncNotifyInterestingMemoryNotificationViewedForColletionID:(id)arg1 ;
-(void)asyncNotifySuggestedCMMNotificationForColletionID:(id)arg1 notificationDeliveryDate:(id)arg2 ;
-(void)asyncNotifySuggestedCMMViewedForColletionID:(id)arg1 ;
-(void)asyncNotifyExpiringMomentShareWithUUIDs:(id)arg1 thumbnailImageData:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4 ;
-(void)asyncNotifyResponseToPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg1 acceptInvitation:(BOOL)arg2 ;
-(void)asyncNotifyReportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg1 ;
@end

