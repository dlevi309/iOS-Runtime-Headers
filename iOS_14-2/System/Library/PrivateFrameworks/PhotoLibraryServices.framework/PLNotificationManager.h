/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLNotificationUNCenterDelegate.h>

@protocol OS_dispatch_queue;
@class CNContactStore, NSObject, NSMutableDictionary, PLNotificationUNCenter, NSString;

@interface PLNotificationManager : NSObject <PLNotificationUNCenterDelegate> {

	BOOL _badgeCountIsInvalid;
	BOOL _enableTemporaryDebugMode;
	CNContactStore* _contactStore;
	int _alertFiltrationEnabled;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSMutableDictionary* _waitingAssetsAddNotifications;
	PLNotificationUNCenter* _UNCenter;

}

@property (nonatomic,retain) PLNotificationUNCenter * UNCenter;              //@synthesize UNCenter=_UNCenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(id)_bestDateForDeliveringNotificationWithError:(id*)arg1 ;
+(id)filteredAlbumListForContentMode:(int)arg1 library:(id)arg2 ;
+(id)_notificationDeliveryDate;
-(void)noteUserAssetsAreReadyForMomentShare:(id)arg1 ;
-(id)contactStore;
-(void)removeNotificationForSuggestedCMMWithUUID:(id)arg1 ;
-(void)userViewedNotificationWithAlbumCloudGUID:(id)arg1 ;
-(void)postNotificationForSuggestedCMMWithUUID:(id)arg1 library:(id)arg2 notificationDeliveryDate:(id)arg3 ;
-(void)noteUserDidNavigateIntoSharedAlbum:(id)arg1 photoLibrary:(id)arg2 ;
-(void)noteUserDidNavigateAwayFromSharedAlbum:(id)arg1 photoLibrary:(id)arg2 ;
-(void)noteDidReceiveExpiringCMMInvitationsWithMomentShares:(id)arg1 ;
-(id)init;
-(unsigned long long)currentAppBadgeCountForNotificationUNCenter:(id)arg1 ;
-(void)_deleteNotificationsForAlbumWithUUID:(id)arg1 notificationTypes:(id)arg2 ;
-(void)noteUserDidChangeStatusForSuggestedCMMWithUUID:(id)arg1 ;
-(void)noteDidReceiveAssets:(id)arg1 forSharedAlbum:(id)arg2 mstreamdInfo:(id)arg3 ;
-(void)noteUserDidDeleteSharedAlbumWithUUID:(id)arg1 ;
-(unsigned long long)_appBadgeCount;
-(void)_removeWaitingNotificationForPhotosBatchID:(id)arg1 ;
-(void)_updateImageDataForNotification:(id)arg1 ;
-(void)_deleteNotificationsForAssetWithUUID:(id)arg1 shouldDeleteCommentsOrLikeNotifications:(BOOL)arg2 shouldDeletePhotosAddedToAlbumNotifications:(BOOL)arg3 ;
-(void)noteSharedAlbumUnseenStatusDidChange:(id)arg1 ;
-(void)reportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg1 ;
-(BOOL)_shouldAllowAlertsFromContactWithEmail:(id)arg1 ;
-(void)noteUserDidDeleteSharedAssetsWithUUIDs:(id)arg1 ;
-(id)_addWaitingNotification:(id)arg1 forPhotosBatchID:(id)arg2 ;
-(id)_memoryNotificationFromDictionaryRepresentation:(id)arg1 ;
-(id)_generateMemoryNotificationRepresentationWithMemoryUUID:(id)arg1 keyAssetUUID:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4 notificationDeliveryDate:(id)arg5 ;
-(void)noteDidChangePlaceholderKindForAsset:(id)arg1 fromOldKind:(short)arg2 forSharedAlbum:(id)arg3 mstreamdInfo:(id)arg4 ;
-(BOOL)_notificationType:(long long)arg1 matchesCommentsOrLikeNotifications:(BOOL)arg2 andPhotosAddedToAlbumNotifications:(BOOL)arg3 ;
-(void)noteSharedAssetCommentsUnreadStatusDidChange:(id)arg1 ;
-(BOOL)_alertFiltrationEnabled;
-(void)noteInvitationRecordStatusChanged:(id)arg1 fromOldState:(long long)arg2 mstreamdInfo:(id)arg3 ;
-(void)_resetAlertFiltration;
-(PLNotificationUNCenter *)UNCenter;
-(void)noteUserDidViewCloudFeedContent:(long long)arg1 photoLibrary:(id)arg2 ;
-(void)sendResponse:(BOOL)arg1 toPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg2 ;
-(id)_waitingNotificationForPhotosBatchID:(id)arg1 ;
-(void)noteDidReceiveComment:(id)arg1 mstreamdInfo:(id)arg2 ;
-(void)noteDidReceiveInvitationForSharedAlbum:(id)arg1 ;
-(id)_initSharedInstance;
-(void)calculateCurrentBadgeCountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)noteUserDidLeavePhotosApplication;
-(BOOL)_isMyEmailAddress:(id)arg1 ;
-(void)noteDidReceiveCMMInvitationWithMomentShare:(id)arg1 ;
-(void)getThumbnailImageDataAssetUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setUNCenter:(PLNotificationUNCenter *)arg1 ;
-(void)postNotificationForInterestingMemoryWithMemoryUUID:(id)arg1 library:(id)arg2 notificationDeliveryDate:(id)arg3 ;
-(void)removeNotificationForInterestingMemoryWithUUID:(id)arg1 ;
-(void)_deleteNotificationsForMemoriesWithUUID:(id)arg1 notificationTypes:(id)arg2 ;
-(void)_deleteNotificationsForObjectWithUUID:(id)arg1 notificationDictionaryKey:(id)arg2 notificationTypes:(id)arg3 ;
-(void)noteUserDidReadCommentOnSharedAsset:(id)arg1 photoLibrary:(id)arg2 ;
-(void)discardAllNotifications;
-(BOOL)enableTemporaryDebugMode;
-(void)noteDidDeleteSharedAlbum:(id)arg1 ;
-(void)postNotificationForExpiringCMMsWithUUIDs:(id)arg1 thumbnailImageData:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4 ;
-(void)triggerNotificationThumbnailUpdateForAsset:(id)arg1 ;
-(void)setEnableTemporaryDebugMode:(BOOL)arg1 ;
-(void)noteDidReceiveLike:(id)arg1 mstreamdInfo:(id)arg2 ;
-(void)noteMultipleContributorStatusChangedForAlbum:(id)arg1 mstreamdInfo:(id)arg2 ;
-(void)dealloc;
-(void)noteUserDidChangeStatusForMomentShare:(id)arg1 photoLibrary:(id)arg2 ;
-(void)noteDidDeleteSharedAssetsWithUUIDs:(id)arg1 ;
@end

